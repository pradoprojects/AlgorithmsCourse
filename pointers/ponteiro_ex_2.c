/*
	@author Marllos Prado
	Write a program that prints the values of a 10-place array by interpreting it as a pointer.

*/

#include <stdio.h>

int main(){
	int vet[10]={{1},{2},{3},{4},{5},{6},{7},{8},{9},{10}};
	int i;
	for(i=0; i<10; i++){
		printf("notacao normal %d \n", vet[i] );
		printf("notacao ponteiro %d \n", *(vet+i) );
	} 
	return(0);
	
}
