#include <stdio.h>

int a, b = 0;

int pergunta(char letra) {
    
	int valor = 0;
	printf("Digite o valor de %c: ", letra);
	scanf("%d", &valor);
	return valor;

}

int soma_de_dois_valores() {

	a = pergunta('a');
	b = pergunta('b');

	printf("\n %d + %d = %d", a, b, a + b);

}

int sub_de_dois_valores() {

	a = pergunta('a');
	b = pergunta('b');

	printf("\n %d - %d = %d", a, b, a - b);

}

int mult_de_dois_valores() {

	a = pergunta('a');
	b = pergunta('b');

	printf("\n %d x %d = %d", a, b, a * b);

}

int div_de_dois_valores() {

	a = pergunta('a');
	b = pergunta('b');

	printf("\n %d %% %d = %d", a, b, a / b);

}

void main()
{
	printf("--------------------\n");
	printf("     CALCULADORA    \n");
	printf("--------------------\n");
	printf("-[1] SOMA          -\n");
	printf("-[2] SUBTRAÇÃO     -\n");
	printf("-[3] MULTIPLICAÇÃO -\n");
	printf("-[4] DIVISÃO       -\n");
	printf("--------------------\n");

	int opcao = 0;
	printf("Selecione uma das opções: \n");
	scanf("%d", &opcao);

	switch(opcao) {
	case 1:
		soma_de_dois_valores();
		break;

	case 2:
		sub_de_dois_valores();
		break;

	case 3:
		mult_de_dois_valores();
		break;

	case 4:
		div_de_dois_valores();
		break;

	default:
		printf("que");
		break;
	}
}