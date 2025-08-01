#include <stdio.h>

int main() {
    float a = 0, b = 0, c = 0;

    printf("Digite a primeira nota: ");
    scanf("%f", &a);

    printf("Digite a segunda nota: ");
    scanf("%f", &b);

    printf("Digite a terceira nota: ");
    scanf("%f", &c);

    float resultado = (a + b + c) / 3;

    printf("Sua média é de %.2f\n", resultado);

    return 0;
}
