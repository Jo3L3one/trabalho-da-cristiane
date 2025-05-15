#include <stdio.h> // Biblioteca para funções de entrada e saída

// Função que gera a Tabela de Adição Modular
void tabela_adicao(int n) {
    int matriz_adicao[n][n]; // Cria a matriz para armazenar os valores

    // Preenche a matriz com as somas modulares (i + j) mod n
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz_adicao[i][j] = (i + j) % n;
        }
    }

    // Imprime o cabeçalho da tabela
    printf("Tabela de Adição Modular Z_%d:\n", n);
    printf("    "); // Espaço para alinhar os índices das colunas
    for (int i = 0; i < n; i++) printf("%d ", i); // Imprime índices das colunas
    printf("\n");

    // Imprime cada linha da tabela
    for (int i = 0; i < n; i++) {
        printf("%d | ", i); // Imprime o índice da linha
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz_adicao[i][j]); // Imprime o valor da célula
        }
        printf("\n");
    }
}

// Função que gera a Tabela de Multiplicação Modular
void tabela_multiplicacao(int n) {
    int matriz_multiplicacao[n][n]; // Cria a matriz para armazenar os valores

    // Preenche a matriz com as multiplicações modulares (i * j) mod n
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz_multiplicacao[i][j] = (i * j) % n;
        }
    }

    // Imprime o cabeçalho da tabela
    printf("\nTabela de Multiplicação Modular Z_%d:\n", n);
    printf("    "); // Espaço para alinhar os índices das colunas
    for (int i = 0; i < n; i++) printf("%d ", i); // Imprime índices das colunas
    printf("\n");

    // Imprime cada linha da tabela
    for (int i = 0; i < n; i++) {
        printf("%d | ", i); // Imprime o índice da linha
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz_multiplicacao[i][j]); // Imprime o valor da célula
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Digite o valor de n para criar as tabelas em Z_n: ");
    scanf("%d", &n); // Lê o valor de n do usuário
    tabela_adicao(n); // Gera a tabela de adição modular
    tabela_multiplicacao(n); // Gera a tabela de multiplicação modular
    return 0;
}
