#include <stdio.h>

void main()
{
	int idade = 0;

	printf("Digite sua idade: ");
	scanf("%d", &idade);

	if (idade < 20){
	    printf("Tu é jovem menino");
	}
	else if (idade < 50 ){
	    printf("Tu é adulto");
	}
	else {
	    printf("tué véio");
	}
}