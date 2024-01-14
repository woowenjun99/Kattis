#include <iostream>

void bubbleSort(int A[3]) {
    for (int i = 0; i < 3; i ++) {
        bool swap = false;
        for (int j = 0; j < 2 - i; j++) {
            if (A[j] > A[j + 1]) {
                swap = true;
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
        
        if (!swap) {
            break;
        }
    }
}

int main() {
    int A[3] = {0};
    int B[3] = {0};
    
    for (int i = 0; i < 3; i ++) {
        std::cin >> A[i];
    }
    
    for (int i = 0; i < 3; i ++) {
        char x = 'A';
        char y;
        std::cin >> y;
        B[i] = y - x;
    }
    
    bubbleSort(A);
    for (int i = 0; i < 3; i ++) {
        std::cout << A[B[i]] << " ";
    }
}