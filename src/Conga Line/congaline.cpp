#include <iostream>
using namespace std;

struct Node {
    Node* partner_position;
    Node* next;
    Node* prev;
    string me;
    string partner;
};

class Queue {
    private:
        Node* head = NULL;
        Node* tail = NULL;
    public:
        void push_to_back(string a, string b) {
            Node* new_node1 = new Node;
            new_node1->me = a;
            new_node1->partner = b;
            new_node1->next = nullptr; new_node1->prev = nullptr; new_node1->partner_position = nullptr;

            // If the head is NULL, 
            if (head == nullptr) head = new_node1;
            else {
                tail->next = new_node1;
                new_node1->prev = tail;
                tail = new_node1;
            }

            // DECLARING A VARIABLE FOR NODE 2
            Node* new_node2 = new Node;
            new_node2->me = b;
            new_node2->partner = a;
            new_node2->next = nullptr; new_node2->prev = new_node1; new_node2->partner_position = new_node1;

            new_node1->partner_position = new_node2; new_node1->next = new_node2;
            tail = new_node2;
        }

        void traverse() {
            cout << "\n";
            Node* ptr = head;
            while (ptr != NULL) {
                cout << ptr->me << "\n";
                ptr = ptr->next;
            }
        }

        Node* begin() { return head; }

        void P(Node* ptr) { cout << ptr->partner << "\n"; }

        Node* front(Node* mic) { return mic->prev; }

        Node* back(Node* mic) { return mic->next; }

        Node* instruction_r(Node* mic) {
            if (mic == tail) return head;
            if (mic == head) {
                Node* temp = mic->next;
                mic->next->prev = NULL;
                mic->prev = tail;
                mic->next = NULL;
                tail->next = mic;
                tail = tail->next;
                head = temp;
                mic->partner_position->partner_position = tail;
                return temp;
            }

            Node* temp = mic->next;
            mic->prev->next = mic->next;
            mic->next->prev = mic->prev;
            tail->next = mic;
            mic->prev = tail;
            mic->next = NULL;
            tail = mic;
            mic->partner_position->partner_position = tail;
            return temp;
        }

        void traverse_backwards() {
            Node* ptr = tail;
            while (ptr != nullptr) {
                cout << ptr->me << "\n";
                ptr = ptr->prev;
            }
        }

        Node* instruction_c(Node* mic) {
            Node* to_be_returned = (mic == tail) ? head : mic->next;
            Node* partner = mic->partner_position;
            Node* after_partner = partner->next;

            // SCENARIO 1: The person holding the mic is already behind the partner
            if (mic->prev == mic->partner_position) return to_be_returned;

            // SCENARIO 2A: If the person holding the mic is at the front, change the head
            if (mic == head) {            
                head = mic->next; 
                head->prev = nullptr;   
            } 
            
            // SCENARIO 2B: If the partner is all the way at the back
            if (partner->next == nullptr) {
                if (mic->prev != nullptr) mic->prev->next = mic->next;
                if (mic->next != nullptr) mic->next->prev = mic->prev;
                mic->next = nullptr;
                partner->next = mic; 
                mic->prev = partner;
                tail = mic;
                partner->partner_position = mic;
                
                return to_be_returned;
            }
            if (mic->prev != nullptr) mic->prev->next = mic->next;
            if (mic->next != nullptr) mic->next->prev = mic->prev;
            partner->next = mic;
            mic->next = after_partner;
            if (after_partner != nullptr) after_partner->prev = mic;
            mic->prev = partner;
            mic->partner_position->partner_position = mic;
            return to_be_returned;
        }
};

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    Queue q;
    long a, b; cin >> a >> b;
    for (long i = 0; i < a; ++i) {
        string c, d; cin >> c >> d;
        q.push_to_back(c, d);
    }

    string c; cin >> c; Node* mic = q.begin();
    for (char letter: c) {
        if (letter == 'P') q.P(mic);
        else if (letter == 'B') mic = q.back(mic);
        else if (letter == 'F') mic = q.front(mic);
        else if (letter == 'R') mic = q.instruction_r(mic);
        else if (letter == 'C') mic = q.instruction_c(mic);
    }
    q.traverse();
}