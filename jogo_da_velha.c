#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 3
void imprimirTabuleiro(char matriz[][TAMANHO]) {
    printf("Tabuleiro:\n   1   2   3\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < TAMANHO; j++) {
            printf(" %c ", matriz[i][j]);
            if (j < TAMANHO - 1) printf("|");
        }
        if (i < TAMANHO - 1) printf("\n  ---|---|---\n");
    }
    printf("\n");
}

int verificarJogada(char tabuleiro[][TAMANHO], int linha, int coluna) {
    if (tabuleiro[linha-1][coluna-1] != ' ') {
        return 0;
    }
    return 1;
}

void atualizarTabuleiro(char tabuleiro[][TAMANHO], int linha, int coluna, char simbolo) {
    printf("Jogada do %c: Linha: %d, Coluna: %d\n", simbolo, linha, coluna);
    tabuleiro[linha-1][coluna-1] = simbolo;
    imprimirTabuleiro(tabuleiro);
}

void fazerJogadaComputador(char tabuleiro[][TAMANHO], char simbolo) {
    int linha, coluna;
    do {
        linha = rand(time(NULL)) % 3 + 1;
        coluna = rand(time(NULL)) % 3 + 1;
    } while (!verificarJogada(tabuleiro, linha, coluna));
    atualizarTabuleiro(tabuleiro, linha, coluna, simbolo);
}

void fazerJogadaJogador(char tabuleiro[][TAMANHO], char simbolo) {
    int linha, coluna, valido;
    do {    
        printf("Jogada do %c\n", simbolo);
        printf("Digite a linha(1-3): ");
        scanf("%d", &linha);
        printf("Digite a coluna(1-3): ");
        scanf("%d", &coluna);
        valido = verificarJogada(tabuleiro, linha, coluna);
        if (!valido) {
            printf("Jogada inválida!\n");
        }
    } while (!valido);
    atualizarTabuleiro(tabuleiro, linha, coluna, simbolo);
}

int verificarEmpate(char tabuleiro[][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            if (tabuleiro[i][j] == ' ') {
                return 0;
            }
        }
    }
    return 1;
}

char verificarVitoria(char tabuleiro[][TAMANHO]) {
    // Verificar linhas
    for (int i = 0; i < TAMANHO; i++) {
        if (tabuleiro[i][0] != ' ' && tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2]) {
            return tabuleiro[i][0];
        }
    }
    // Verificar colunas
    for (int j = 0; j < TAMANHO; j++) {
        if (tabuleiro[0][j] != ' ' && tabuleiro[0][j] == tabuleiro[1][j] && tabuleiro[1][j] == tabuleiro[2][j]) {
            return tabuleiro[0][j];
        }
    }
    // Verificar diagonais
    if (tabuleiro[0][0] != ' ' && tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2]) {
        return tabuleiro[0][0];
    }
    if (tabuleiro[0][2] != ' ' && tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0]) {
        return tabuleiro[0][2];
    }
    // Verificar empate
    if (verificarEmpate(tabuleiro)) {
        return 'E';
    }
    return ' ';
}

int main() {
    int modo;
    srand(time(NULL));
    printf("Escolha o modo de jogo:\n");
    printf("1 - Jogador vs Jogador\n");
    printf("2 - Jogador vs Computador\n");
    printf("Modo: ");
    scanf("%d", &modo);

    char tabuleiro[TAMANHO][TAMANHO] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    char resultado;
    imprimirTabuleiro(tabuleiro);
    do {
        fazerJogadaJogador(tabuleiro, 'X');
        resultado = verificarVitoria(tabuleiro);
        if (resultado != ' ') {
            break;
        }

        if (modo == 2) {
            fazerJogadaComputador(tabuleiro, 'O');
        } else {
            fazerJogadaJogador(tabuleiro, 'O');
        }
        resultado = verificarVitoria(tabuleiro);
    } while (resultado == ' ');

    imprimirTabuleiro(tabuleiro);
    if (resultado == 'E') {
        printf("Jogo finalizado! Empate!\n");
    } else {
        printf("Jogo finalizado! Vencedor: %c\n", resultado);
    }
}