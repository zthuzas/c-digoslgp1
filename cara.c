#include <stdio.h>

int main() {
    int N, i, resultado;

    // Loop principal para ler casos de teste até encontrar N = 0
    while (1) {
        scanf("%d", &N);

        // Verifica o fim da entrada
        if (N == 0) {
            break;
        }

        int vitoriasMaria = 0;
        int vitoriasJoao = 0;

        // Lê os resultados dos N jogos e conta as vitórias
        for (i = 0; i < N; i++) {
            scanf("%d", &resultado);
            if (resultado == 0) {
                vitoriasMaria++;
            } else if (resultado == 1) {
                vitoriasJoao++;
            }
        }

        // Exibe o resultado para o caso de teste atual
        printf("Maria %d Joao %d\n", vitoriasMaria, vitoriasJoao);
    }

    return 0;
}
