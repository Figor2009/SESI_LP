#include <stdio.h>

void main()
{
    int a = 1;
    int b = 2;
    
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    int resultado = a * b;
    printf("Hello World\n");
    printf("resultado de %d x %d é %d", a, b, resultado);
}