#include <stdio.h>

void main() {
    int numeros[5];
    int i, j, temp;

    for(int i = 0; i < 5; i ++) {
		printf("Digite um valor: \n");
		scanf("%d", &numeros[i]);
	}
	
	for(int i = 0; i <5; i ++){

	   // for(int j = 0; j < 5; j ++){
	        
	   //     if(numeros[i] > numeros[j]) {
	   //         temp = numeros[i];
	   //     }
	        
	   // }
	   for(j = 0; j < 5 ; j++){
	       printf("%d - %d",j, j-1);
	       
	       if(numeros[j] < numeros[j +1]){
	           printf("%d\n", numeros[i]);
	           temp = numeros[i];
	        }
	   }
	   
	   
	}


printf(" -- - - --  - - - \n");
    printf("Números ordenados de menor: %d\n", temp);


}




