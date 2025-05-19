#include <stdio.h>
#include <stdlib.h>

// Função para calcular o Máximo Divisor Comum (MDC) usando o Algoritmo de Euclides
int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Função para calcular o Mínimo Múltiplo Comum (MMC) a partir do MDC
int mmc(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    }
    return (a * b) / mdc(a, b);
}

// Função para gerar a tabela de adição modular Z_n
void tabelaAdicaoModular(int n) {
    printf("Tabela de Adição Modular Z_%d:\n", n);
    printf("  +");
    for (int i = 0; i < n; i++) {
        printf(" %2d", i);
    }
    printf("\n---");
    for (int i = 0; i < n; i++) {
        printf("---");
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("%2d |", i);
        for (int j = 0; j < n; j++) {
            printf(" %2d", (i + j) % n);
        }
        printf("\n");
    }
    printf("\n");
}

// Função para gerar a tabela de multiplicação modular Z_n
void tabelaMultiplicacaoModular(int n) {
    printf("Tabela de Multiplicação Modular Z_%d:\n", n);
    printf("  *");
    for (int i = 0; i < n; i++) {
        printf(" %2d", i);
    }
    printf("\n---");
    for (int i = 0; i < n; i++) {
        printf("---");
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("%2d |", i);
        for (int j = 0; j < n; j++) {
            printf(" %2d", (i * j) % n);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int num1, num2, n;

    // Parte a) - MDC e MMC
    printf("Digite dois números inteiros para calcular o MDC e o MMC:\n");
    printf("Número 1: ");
    scanf("%d", &num1);
    printf("Número 2: ");
    scanf("%d", &num2);

    printf("O MDC de %d e %d é: %d\n", num1, num2, mdc(num1, num2));
    printf("O MMC de %d e %d é: %d\n\n", num1, num2, mmc(num1, num2));

    // Parte b) - Tabelas Z_n
    printf("Digite um número inteiro n para gerar as tabelas Z_n:\n");
    printf("n: ");
    scanf("%d", &n);

    if (n > 0) {
        tabelaAdicaoModular(n);
        tabelaMultiplicacaoModular(n);
    } else {
        printf("Por favor, digite um valor de n maior que zero.\n");
    }

    return 0;
}
