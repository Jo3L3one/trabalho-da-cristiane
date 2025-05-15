#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
//isso aq são as bibliotecas q eu usei

//unsigned long long int é pra número MUITO grande, tipo um 2^50, e isso aq em baixo é a calculadora do mdc que basicamente faz com q enqnt n2 não for 0, fique repetindo o processo
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

    //aq é o armazenamento da entrada basicamente
    char n1_entrada[50],n2_entrada[50];
    unsigned long long int n1, n2;

    //aq é a entrada dos valores
    printf("lembrete, se for escrever potencia, coloca no formato base^expoente\n");
    printf("insira o primeiro numero: ");
    scanf("%s", n1_entrada);
    printf("agora o segundo: ");
    scanf("%s", n2_entrada);

    //isso aq é pra fazer a potência antes de colocar ela na calculadora do mdc, caso n seja um número com potência, ele só passa direto
    unsigned long long int converter(char *entrada){
        char *achou = strchr(entrada, '^');
        if (achou != NULL){
            *achou = '\0';
            unsigned long long int base = atoll(entrada);
            unsigned long long int expoente = atoll(achou+1);
            unsigned long long int resultado = 1;
            for(unsigned long long int i = 0; i < expoente; i++){
                if(resultado > ULLONG_MAX/base){
                    printf("esse numero eh grande dms, vai causar overflow (dar mt erro pq o numero eh ENORME)\n"); //isso aq é pra previnir overflow d número mt grande
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
    //e aq a gnt tem o resultado ☻
    printf("o valor do mdc de %llu e %llu deu = %llu\n", n1, n2, mdc(n1, n2));

    return 0;
}