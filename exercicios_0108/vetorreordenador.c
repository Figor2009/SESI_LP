#include <stdio.h>

void main() {
    int numeros[5];
    int i, j, temp;

    for(int i = 0; i < 5; i ++) {
		printf("Digite um valor: \n");
		scanf("%d", &numeros[i]);
	}
	
    for (i = 0; i < 5 - 1; i++) {
        for (j = 0; j < 5 - i - 1; j++) {
            if (numeros[j] > numeros[j + 1]) {
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    printf("Números ordenados de menor para maior:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }

}




