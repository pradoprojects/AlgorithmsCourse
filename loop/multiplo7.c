/*
	@author Marllos Prado
	Generate and list all multiples of the number 7 less than or equal to 100.
*/

#include "stdio.h"

int main(){
	int cont;
	
	for(cont = 7; cont<=100 ; cont=cont+7){
		
		printf("O valor %d eh multiplo de 7 \n", cont);			
		
	}
	
	return 0;
}
