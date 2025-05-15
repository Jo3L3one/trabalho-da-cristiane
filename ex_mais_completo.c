#include <stdio.h>

int mdc_iterativo(int a, int b) {
    // Enquanto o valor de b não for zero, continuamos o loop
    while (b != 0) {
        int resto = a % b; // Calcula o resto da divisão de 'a' por 'b'
        a = b;             // Atualiza 'a' para o valor de 'b'
        b = resto;         // Atualiza 'b' para o valor do resto
    }
    // Quando o loop termina, o valor de 'a' é o MDC
    return a;
}

int main() {
    int a, b;

    // Entrada de valores pelo usuário
    printf("Digite o valor do primeiro número: ");
    scanf("%d", &a);
    printf("Digite o valor do segundo número: ");
    scanf("%d", &b);

    // Chamada da função e exibição do resultado
    printf("MDC de %d e %d é: %d\n", a, b, mdc_iterativo(a, b));

    return 0;
}
