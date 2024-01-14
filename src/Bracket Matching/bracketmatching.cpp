#include <bits/stdc++.h>
using namespace std;

struct Node {
    char data;
    Node* next;
};

class Stack {
    private: 
        Node* head = NULL;
    public:
        void push(char data) {
            Node* new_node = new Node;
            new_node->data = data;
            new_node->next = head;
            head = new_node;
        }

        bool empty() {
            if (head == NULL) return true;
            return false;
        }

        char top() { return head->data; }

        void pop() { head = head->next; }
};

int main() {
    long x; cin >> x;
    string str; cin >> str;
    Stack st;
    
    for (long i = 0; i < str.size(); ++i) {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
            st.push(str[i]);
        } else if (st.empty() || 
        (str[i] == ']' && st.top() != '[') || 
        (str[i] == '}' && st.top() != '{') || 
        (str[i] == ')' && st.top() != '(')) {
            cout << "INVALID";
            return 0;
        } else {
            st.pop();
        }
    }
    
    if (st.empty()) cout << "VALID";
    else cout << "INVALID";
}