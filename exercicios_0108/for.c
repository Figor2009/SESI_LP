#include <stdio.h>

void main()
{
	int tabuada = 0;
	printf("Digite a tabua que você deseja visualizar: ");
	scanf("%d", &tabuada);
	for (int i = 0; i <= 10; i = i + 1) {
		printf("%d x %d = %d\n", tabuada, i, tabuada * i);
	}

}