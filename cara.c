#include <stdio.h>

int main() {
    int N, i, resultado;

    while (1) {
        scanf("%d", &N);

        if (N == 0) {
            break;
        }

        int vitoriasMaria = 0;
        int vitoriasJoao = 0;

        for (i = 0; i < N; i++) {
            scanf("%d", &resultado);
            if (resultado == 0) {
                vitoriasMaria++;
            } else if (resultado == 1) {
                vitoriasJoao++;
            }
        }

        printf("Maria %d Joao %d\n", vitoriasMaria, vitoriasJoao);
    }

    return 0;
}
