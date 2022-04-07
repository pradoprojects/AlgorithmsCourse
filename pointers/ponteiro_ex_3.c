/*
	@author Marllos Prado
	Write a program that reverses the order of elements in a
	5-place array, interpreting it as a pointer.
*/

#include <stdio.h>

int main(){
	int vet[10]={{1},{2},{3},{4},{5},{6},{7},{8},{9},{100}} ;
	int i;
	int aux;
	for(i=0; i<=5; i++){
		aux = *(vet+i);
		
		*(vet+i) = *(vet+(9-i));
		//ou vet[i] = *(vet+(9-i));
		
		*(vet+(9-i)) = aux;
		//ou vet[9-i] = aux;
	}
	
	for(i=0; i<10; i++){
		printf("notacao ponteiro %d \n", *(vet+i));
	}
	
	return(0);
	
}
