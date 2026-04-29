// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i, numero, maiorQ50 = 0;
    for (i = 0; i < 10; i++){
        printf("Digite um numero");
        scanf("%d", &numero);
        if(numero >50){
            maiorQ50++;
        }
    }
    printf("Maior que 50: %d\n", maiorQ50);
    return 0;
}
