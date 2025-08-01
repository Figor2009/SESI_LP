#include <stdio.h>

int main() {
	char nome[20];
	int preco = 0;
	int quantia = 0;

	printf("Digite nome do produto: ");
	scanf("%s", nome);
	
	printf("Digite o PREÇO do produto: ");
	scanf("%d", &preco);
	
	printf("Digite quantas unidades foram compradas: ");
	scanf("%d", &quantia);
	
	printf("O(s) Produto(s) %s custará R$%d", nome, preco * quantia);

// 	int resultado = 2025 - a;

// 	printf("Tu tem %d anos\n", resultado);

	return 0;
}

