/*
	@author Marllos Prado
	Write a program that calculates the sum of the following formula varying j from 0 to 7 for each value of i ranging from 0 to 7:
	((2*j+1)*i)/(2*j+5)	
*/

#include<stdio.h>


int main(){
	float i, j;
	float soma = 0;
	int contadora=0;
	
	for(i=0; i<=7; i++){
		for(j=0; j<=7; j++){
			soma = soma + ((2*j+1)*i)/(2*j+5);
			contadora++;
		}
	
	}
	printf("Somatorio: %f \n", soma);
	printf("Total repeticao: %d \n", contadora);
	
	return 0;
}
