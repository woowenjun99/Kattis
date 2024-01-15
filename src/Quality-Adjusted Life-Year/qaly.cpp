#include <iostream>

int main() {
    // No. of periods of constant quality of life.
    int N;
    float sum, q, y;
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%f", &q);
        scanf("%f", &y);
        sum += (q * y);
    }
    printf("%f", sum);
}