/*
	@author Marllos Prado
	Read 5 numbers, storing them in array X[5]. Copy this array, backwards (in reverse reading order), into a second vector Y[5]. Show the Y vector.
*/

#include <stdio.h>
int main(){
	int x[5];
	int y[5];
	int i;
	
	
	printf("Informe a primeira sequencia de 5 valores separados por enter \n");
	
	for(i=0; i<5; i++){
		scanf("%d", &x[i]);
	}
	
	for(i=0; i<5; i++){
		y[i]=x[4-i];
	}
	printf("x[] -- y[] \n");
	for(i=0; i<5; i++){
		printf("%d -- %d \n", x[i], y[i]);
	}
	
	
	return 0;
	
	
}
