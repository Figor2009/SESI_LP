#include <stdio.h>

void main()
{
	int dia_semana = 0;

	printf("Digite o nC:mero da semana: ");
	scanf("%d", &dia_semana);

	switch (dia_semana) {
	case 1 :
		printf("\nDomingo");
		break;
	case 2 :
		printf("\nSegunda");
		break;
	case 3 :
		printf("\nTerC'a");
		break;
	case 4 :
		printf("\nQuarta");
		break;
	case 5 :
		printf("\nQuinta");
		break;
	case 6 :
		printf("\nSexta");
		break;
	case 7 :
		printf("\nSC!bado");
		break;
	default:
		printf("\nque???");
		break;
	}


}