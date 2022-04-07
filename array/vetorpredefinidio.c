#include <stdio.h>

/* 
@author Marllos Prado
Generate an array with 10 numbers as follows: each number stored in the array will be the value of its own position in the array (its index) minus 2 (ie Xi = i-2). Display this vector on the screen.
*/

int main(){
	int i;
	int X[10];

	
	for(i=0; i<10; i++){
		X[i]= i-2;
	}
	
	for(i=0; i<10; i++){
		printf("%d ", X[i]);
	}

	return 0;
	
	
}
