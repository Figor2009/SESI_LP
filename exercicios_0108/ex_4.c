#include <stdio.h>

int main() {
	int a = 0;

	printf("Digite o comprimento (em cm): ");
	scanf("%d", &a);

	float resultado = a / 100.0f;

	printf("O comprimento de %d cm em metros C) de %.2f m\n", a, resultado);

	return 0;
}
