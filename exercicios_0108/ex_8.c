#include <stdio.h>

void main()
{
	float nota1 = 0;
	float nota2 = 0;
	float nota3 = 0;
	float media = 0;

	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);

	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);

	printf("Digite a terceira nota: ");
	scanf("%f", &nota3);

	media = (nota1 + nota2 + nota3) / 3;

	printf("Sua mC)dia C): %.1f", media);

	if (media <= 5) {
		printf("\nYOU ARE REPROVED!!");
	}
	else if (media < 7) {
		printf("\nYOU ARE IN RECUPERATION!!");
	}
	else {
		printf("\nYou passed de anow");
	}


}