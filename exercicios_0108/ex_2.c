#include <stdio.h>

void main()
{
    int a = 1;
    int b = 2;
    
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    int resultado = a + b;
    printf("resultado de %d + %d é %d", a, b, resultado);
}