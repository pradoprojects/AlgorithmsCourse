/*
	@author Marllos Prado
	Write a program that places the numbers 1 through 100 on the screen in reverse order (starting at 100 and ending at 1).
*/

#include <stdio.h>

int main(){
	int contador = 100;
	
	while(contador > 0){
		printf("%d \n", contador);
		contador = contador-1;
	}
	return 0;
}
