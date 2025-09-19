#include <stdio.h>

int main()
{
	int vetor[10];
	int soma = 0;
	for (int i = 0; i <= 9; i = i + 1) {
		printf("Digite o valor de %d\n", i + 1);
		scanf("%d", &vetor[i]);
	}

	printf("\nExibindo o valores\n");

	for(int i = 0; i <= 9; i++) {
		soma += vetor[i];
	}

	printf("\n A soma de todos os valores é de %d", soma);
}