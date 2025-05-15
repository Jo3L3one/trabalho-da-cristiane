#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>


unsigned long long int mdc(unsigned long long n1, unsigned long long int n2){
    unsigned long long int resto;
    while(n2 != 0) {
        resto = n1 % n2;
        n1 = n2;
        n2 = resto;
    }
    return n1;
}
int main(){

    char n1_entrada[50],n2_entrada[50];
    unsigned long long int n1, n2;

    printf("insira o primeiro numero: ");
    scanf("%s", n1_entrada);
    printf("agora o segundo: ");
    scanf("%s", n2_entrada);

    unsigned long long int converter(char *entrada){
        char *achou = strchr(entrada, '^');
        if (achou != NULL){
            *achou = '\0';
            unsigned long long int base = atoll(entrada);
            unsigned long long int expoente = atoll(achou+1);
            unsigned long long int resultado = 1;
            for(unsigned long long int i = 0; i < expoente; i++){
                if(resultado > ULLONG_MAX/base){
                    printf("esse numero eh grande dms, vai causar overflow (dar mt erro pq o numero eh ENORME)\n");
                    exit(1);
                }
                resultado *= base;
            }
            return resultado;
        } else {
            return atoll(entrada);
        }
    }

    n1 = converter(n1_entrada);
    n2 = converter(n2_entrada);

    printf("o valor do mdc de %llu e %llu deu = %llu\n", n1, n2, mdc(n1, n2));

    return 0;
}