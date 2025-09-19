#include <stdio.h>

int main()
{
	int vetor[8];
	int i, maior, menor
	for (int i = 0; i <= 7; i = i + 1) {
		printf("Digite o valor de %d\n", i + 1);
		scanf("%d", &vetor[i]);
	}

	printf("\nExibindo os valores em ordem\n");

	for (i = 0; i <= 7; i++) {
		if (vetor[i] >= maior) {
			maior = valores[i];
		}
		if (vetor[i] = menor) {
			menor = valores[i];
		}
	}
}