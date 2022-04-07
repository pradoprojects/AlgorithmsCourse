/*
	@author Marllos Prado
	Given two sequences of 5 numbers informed by the user, calculate the sum of each number with its correspondent.

*/
#include <stdio.h>
int main(){
	int x[5];
	int y[5];
	int i;
	int soma;
	
	printf("Informe a primeira sequencia de 5 valores separados por enter \n");
	
	for(i=0; i<5; i++){
		scanf("%d", &x[i]);
	}
	
	printf("Informe a segunda sequencia de 5 valores separados por enter \n");
	
	for(i=0; i<5; i++){
		scanf("%d", &y[i]);
	}
	
	for(i=0; i<5; i++){
	
		soma = x[i]+y[i];
		printf("%d \n", soma);
	
	}
	
	return 0;
}
