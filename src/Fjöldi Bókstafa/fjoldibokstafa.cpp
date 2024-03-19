#include <iostream>
#include <string>

int main(void) {
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);

	std::string question;
	std::cin >> question;
	int count = 0;
	for (auto c: question) {
		if ((c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z')) count++;
	}
	std::cout << count << std::endl;
    return 0;
}