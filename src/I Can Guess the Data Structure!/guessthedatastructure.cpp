#include <iostream>
#include <stack>
#include <queue>

void solve(int t) {
    std::stack<int> s;
    std::queue<int> q;
    std::priority_queue<int> pq;
    bool candidates[3] = {true, true, true};

    for (int i = 0; i < t; ++i) {
        int command, value;
        std::cin >> command >> value;
        if (command == 1) {
            s.push(value);
            q.push(value);
            pq.push(value);
        } else {
            if (s.empty()) {
                candidates[0] = false;
                candidates[1] = false;
                candidates[2] = false;
                continue;
            }

            if (s.top() != value) candidates[0] = false;
            if (q.front() != value) candidates[1] = false;
            if (pq.top() != value) candidates[2] = false;
            s.pop();
            q.pop();
            pq.pop();
        }
    }

    int count = 0, last;
    for (int i = 0; i < 3; ++i) {
        if (candidates[i]) {
            count++;
            last = i;
        }
    }
    if (count == 0) std::cout << "impossible\n";
    else if (count > 1) std::cout << "not sure\n";
    else {
        if (last == 0) std::cout << "stack\n";
        else if (last == 1) std::cout << "queue\n";
        else std::cout << "priority queue\n";
    }
}

int main(void) {
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);
    int t;
    while (std::cin >> t) solve(t);
    return 0;
}