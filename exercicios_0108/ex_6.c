#include <stdio.h>

int main() {
	char nome[5];
	int salario = 0;
	int mes_trabalhado = 0;

	printf("Digite seu nome: ");
	scanf("%s", nome);
	
	printf("Digite seu salário mensal: ");
	scanf("%d", &salario);
	
	printf("Digite quantos meses de trabalho: ");
	scanf("%d", &mes_trabalhado);
	
	printf("Funcionário %s ganhou R$%d em %d meses", nome, salario * mes_trabalhado, mes_trabalhado);

// 	int resultado = 2025 - a;

// 	printf("Tu tem %d anos\n", resultado);

	return 0;
}

