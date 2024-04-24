#include <algorithm>
#include <iostream>
#include <vector>

void solve() {
    int ncs, ne;
    std::cin >> ncs >> ne;

    // We need to keep track of each CS students grades. TC: O(ncs)
    std::vector<int> computer_science_students(ncs);
    unsigned long long total = 0;
    for (auto &i: computer_science_students) {
        std::cin >> i;
        total += i;
    }
    double computer_science_average = (1.0 * total) / ncs;

    // We keep track of the total econs students grades.
    unsigned long long total_econs = 0;
    for (int i = 0; i < ne; ++i) {
        int score;
        std::cin >> score;
        total_econs += score;
    }
    double economics_average = (1.0 * total_econs) / ne;

    unsigned long long results = 0;
    for (int i = 0; i < computer_science_students.size(); ++i) {
        if ((1.0 * (total_econs + computer_science_students[i]) / (ne + 1)) > economics_average and (1.0 * (total - computer_science_students[i]) / (ncs - 1)) > computer_science_average) results++;
    }
    std::cout << results << "\n";
}

int main(void) {
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);
    int t;
    std::cin >> t;
    while (t--) solve();
    return 0;
}