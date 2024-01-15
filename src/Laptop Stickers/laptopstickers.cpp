#include <iostream>
#include <vector>
using namespace std;

void printArray(char** vect, int L, int H) {
    for (int i = 0; i < H; i ++) {
        for (int j = 0; j < L; j ++) {
            if (vect[i][j] >= 'a' && vect[i][j] <= 'z') {
                cout << vect[i][j];     
            } else {
                cout << '_';
            }
        }
        cout << endl;
    }    
}

void freeArray(char **vect, int L, int H) {
    for (int i = 0; i < H; i ++) {
        delete []vect[i];
    }
    delete vect;
}

int main() {
    int L, H, K;
    cin >> L >> H >> K;
     char **Laptop = new char* [H];
    for (int i = 0; i < H; i ++) {
        Laptop[i] = new char[L];
    }    

    char current = 'a';

    for (int i = 0; i < K; i ++) { 
        int l, h, a, b;
        cin >> l >> h >> a >> b;

        for (int i = 0; i < l; i ++) {
            for (int j = 0; j < h; j ++) {      
                if ((b + j) < H && (a + i) < L) {
                    Laptop[b + j][a + i] = current;
                }
            }
        }

        current += 1;
    }
    
    printArray(Laptop, L, H);
    freeArray(Laptop, L, H);
}