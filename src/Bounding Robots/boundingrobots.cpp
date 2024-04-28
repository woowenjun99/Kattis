#include <iostream>

void solve() {
    int w, l;
    while (std::cin >> w >> l, not (w == 0 and l == 0)) {
        int robot_x = 0;
        int robot_y = 0;
        int current_x = 0;
        int current_y = 0;
        int n;
        std::cin >> n;
        while (n--) {
            char c;
            int steps;
            std::cin >> c >> steps;
            if (c == 'u') {
                robot_y += steps;
                current_y = current_y + steps > l - 1 ? l - 1 : current_y + steps;
            } else if (c == 'd') {
                robot_y -= steps;
                current_y = current_y - steps < 0 ? 0 : current_y - steps;
            } else if (c == 'l') {
                robot_x -= steps;
                current_x = current_x - steps < 0 ? 0 : current_x - steps;
            } else {
                robot_x += steps;
                current_x = current_x + steps > w - 1 ? w - 1 : current_x + steps;        
            }
        }
        std::cout << "Robot thinks " << robot_x << " " << robot_y << "\n";
        std::cout << "Actually at " << current_x << " " << current_y << "\n\n";
    };
}

int main(void) {
    std::ios::sync_with_stdio(0); 
    std::cin.tie(0); 
    std::cout.tie(0);
    solve();
    return 0;
}