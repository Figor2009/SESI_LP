#include <stdio.h>

int main()
{
	int vetor[6];
	int soma;
	int media;
	
	for (int i = 0; i < 6 ; i = i + 1) {
		printf("Digite o valor de %d\n", i + 1);
		scanf("%d", &vetor[i]);
	}

	for (int i = 0; i < 6 ; i++) {
		soma = soma + vetor[i];
	}
	
	media = soma / 6;

    printf("\n a média é %d", media);
}