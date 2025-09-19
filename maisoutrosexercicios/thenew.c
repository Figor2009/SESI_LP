#include <stdio.h>

int main()
{
	int vetor[5];
	for (int i = 0; i <= 4; i = i + 1) {
		printf("Digite o valor de %d\n", i + 1);
		scanf("%d", &vetor[i]);
	}
    
    printf("\nExibindo os valores\n");
    
	for (int i = 0; i <= 4; i = i + 1) {
		printf("\nO valor de %d é %d", i + 1, vetor[i]);
	}
}