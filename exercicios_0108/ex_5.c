#include <stdio.h>

int main() {
	int a = 0;

	printf("Digite seu ano de nascimento: ");
	scanf("%d", &a);

	int resultado = 2025 - a;

	printf("Tu tem %d anos\n", resultado);

	return 0;
}
