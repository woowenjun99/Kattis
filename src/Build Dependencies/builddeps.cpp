#include <iostream>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

class Graph {
    private:
        unordered_map<string, vector<string>> adjacent_list;
        unordered_set<string> visited;
        stack<string> s;

        void dfs(string dependency) {
            visited.insert(dependency);
            for (auto it = adjacent_list[dependency].begin(); it != adjacent_list[dependency].end(); ++it) {
                if (visited.find(*it) == visited.end()) dfs(*it); 
            }
            s.push(dependency);
        }

    public:
        void add_edge(string file, string dependency) { 
            adjacent_list[dependency].push_back(file); 
        } 

        void toposort(string changed) {
            dfs(changed);

            while (!s.empty()) {
                cout << s.top() << "\n";
                s.pop();
            }
            visited.clear();
        }
};

int main() {
    // Admin Purposes
    // freopen("in.txt", "r", stdin);
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    Graph g;

    // Reading in the inputs
    int n; cin >> n; cin.ignore();
    for (int i = 0; i < n; ++i) {
        string str, file, dependency; getline(cin, str);

        // Filtering out and retrieving the first file
        stringstream ss(str);
        ss >> file;
        file.pop_back();

        while (ss >> dependency) g.add_edge(file, dependency);
    }

    string file; cin >> file;
    g.toposort(file);
    return 0;
}