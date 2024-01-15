#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
typedef unordered_map<string, stack<pair<long, string>>> umss;

umss mappers; 
stack<vector<string>> s;
vector<string> v;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    long x, counter = 1; cin >> x; s.push(v);
    for (long i = 0; i < x; ++i) {
        string str, val; cin >> str;
        if (str == "TYPEOF") {
            string value_to_determine; cin >> value_to_determine;
            umss::iterator it = mappers.find(value_to_determine);
            if (it == mappers.end() || it->second.empty()) {
                cout << "UNDECLARED\n";
            } else {
                cout << it->second.top().second << "\n";
            }
        } else if (str == "DECLARE") {
            string value_to_input, data_type; cin >> value_to_input >> data_type;
            umss::iterator it = mappers.find(value_to_input);
            if (it == mappers.end()) {
                stack<pair<long, string>> st;
                st.push(make_pair(counter, data_type));
                mappers.insert(make_pair(value_to_input, st));
            } else if (it->second.empty() || it->second.top().first != counter) {
                it->second.push(make_pair(counter, data_type));
            } else if (it->second.top().first == counter) {
                cout << "MULTIPLE DECLARATION\n";
                return 0;
            } 
            s.top().push_back(value_to_input);
        } else if (str == "{") {
            counter++;
            s.push(v);
            v.clear();
        } else {
            for (string str: s.top()) mappers[str].pop();
            s.pop();
            counter--;
        }
    }
}