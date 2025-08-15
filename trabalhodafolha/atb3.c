#include <stdio.h>

void main()
{
    int soma = 0;
    
    for(int i = 0; i<=100; i ++){
        soma = soma + i;
        printf("\n%d, %d", i, soma);
    }
    
    printf("\nA soma é: %d", soma);
}
