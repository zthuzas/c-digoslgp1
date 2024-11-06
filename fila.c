#include <stdio.h>

int main() {
    int N, D, i, posicao = 1;

    scanf("%d", &N);

    if (N < 2 || N > 10) {
        return 1; 
    }

    int fila[N];

    for (i = 0; i < N; i++) {
        scanf("%d", &fila[i]);
    }

    scanf("%d", &D);

    if (D >= 65) {
        for (i = 0; i < N; i++) {
            if (fila[i] < 65) {
                break; 
            }
            posicao++;
        }
    } else {
        posicao = N + 1;
    }

    printf("%d\n", posicao);

    return 0;
}
