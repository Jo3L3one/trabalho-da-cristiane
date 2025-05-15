#include <stdio.h> // Biblioteca para funções de entrada e saída

// Função que gera a Tabela de Adição Modular
void tabela_adicao(int n) {
    printf("Tabela de Adição Modular Z_%d:\n", n); // Cabeçalho
    printf("   ");
    for (int i = 0; i < n; i++) printf("%d ", i); // Imprime os índices da tabela
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%d | ", i); // Imprime o índice da linha
        for (int j = 0; j < n; j++) {
            printf("%d ", (i + j) % n); // Calcula a soma e aplica o módulo
        }
        printf("\n"); // Quebra de linha para próxima linha da tabela
    }
}

// Função que gera a Tabela de Multiplicação Modular
void tabela_multiplicacao(int n) {
    printf("\nTabela de Multiplicação Modular Z_%d:\n", n); // Cabeçalho
    printf("   ");
    for (int i = 0; i < n; i++) printf("%d ", i); // Imprime os índices da tabela
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%d | ", i); // Imprime o índice da linha
        for (int j = 0; j < n; j++) {
            printf("%d ", (i * j) % n); // Calcula a multiplicação e aplica o módulo
        }
        printf("\n"); // Quebra de linha para próxima linha da tabela
    }
}

int main() {
    int n;
    printf("Digite o valor de n para criar as tabelas em Z_n: ");
    scanf("%d", &n); // Lê o valor de n do usuário
    tabela_adicao(n); // Chama a função para gerar a tabela de adição
    tabela_multiplicacao(n); // Chama a função para gerar a tabela de multiplicação
    return 0;
}
