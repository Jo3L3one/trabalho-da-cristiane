#include <stdio.h>

int mdc_iterativo(int a, int b) {
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}
int mdc_recursivo(int c, int d) {
    if (d == 0) {
        return c;
    } else {
        return mdc_recursivo(d, c % d);
    }
}

int main() {
    int a = 48, b = 18;
    printf("MDC de %d e %d é: %d\n", a, b, mdc_iterativo(a, b));

    int c = 48, d = 18;
    printf("MDC de %d e %d é: %d\n", c, d, mdc_recursivo(c, d));
    
    return 0;
}
