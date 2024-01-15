#include <iostream>
#include <cmath>
 
int main() {

  int T;
  std::cin >> T;

  while (T--) {
    int testCase, base, dig, ssd = 0;
    unsigned long long num, finalN;


    std::cin >> testCase >> base >> num;

    int i = 0;
    while(num > 0){
      dig = num % base;
      num = num / base;
      ssd += dig * dig;
      finalN += dig * std::pow(10, i);
      i++;
      
    }

    std::cout << testCase << " " << ssd << "\n"; 
  }

  return 0;
}
