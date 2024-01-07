#include <iostream>
#include <queue>
#include <unordered_map>
#include <vector>
using namespace std;

class Graph {
    private:
        int n;
        unordered_map<int, vector<int>> _al;
        vector<int> numberOfPartnerships;

    public:
        Graph(int n) {
            this->n = n;
            numberOfPartnerships.resize(n, 0);
        }

        void addEdge(int src, int dest) {
            _al[src].push_back(dest);
            _al[dest].push_back(src);
        }

        bool execute(int home, int src) {
            vector<bool> visited(n , false);
            visited[src] = true;

            queue<int> q;
            q.push(src);

            while (not q.empty()) {
                int front = q.front();
                q.pop();
                for (int dest: _al[front]) {
                    numberOfPartnerships[dest]++;
                    if (not visited[dest] and numberOfPartnerships[dest] >= (0.5 *_al[dest].size())) {
                        visited[dest] = true;
                        q.push(dest);
                    }
                }
            }

            return visited[home];
        }
};

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    

    int n, e, home, src;
    cin >> n >> e >> home >> src;
    Graph *g = new Graph(n);

    for (int i = 0; i < e; ++i) {
        int source, destination;
        cin >> source >> destination;
        g->addEdge(source - 1, destination - 1);
    }

    bool shouldStay = g->execute(home - 1, src - 1);
    if (shouldStay) cout << "leave";
    else cout << "stay";
    delete g;
    return 0;
}