#include <stdio.h>

int main() {
    int N, i;
    
    scanf("%d", &N);
    
    if (N < 2 || N > 100) {
        return 1; 
    }

    int vetor[N];
    
    for (i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < N; i++) {
        if (vetor[i] < 0) {
            vetor[i] = 42;
        }
    }

    for (i = 0; i < N; i++) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}
