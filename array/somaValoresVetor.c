/*
	@author Marllos Prado
	Read 5 numbers from user, storing them in the array X[5]. Calculate the sum of these 5 numbers and display it on the screen.
*/

#include <stdio.h>
int main(){
	int x[5];
	int i;
	int soma;
	
	printf("Informe a  sequencia de 5 valores separados por enter \n");
	
	for(i=0; i<5; i++){
		scanf("%d", &x[i]);
	}
	
	
	
	for(i=0; i<5; i++){
	
		soma = soma + x[i];
		
	
	}
	
	printf("%d \n", soma);
	
	return 0;
}
