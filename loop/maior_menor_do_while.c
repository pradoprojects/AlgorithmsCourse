/*
	@author Marllos Prado

Write a program that reads a set of N non-zero integers and shows which was the largest and smallest value given. Use the value zero to terminate the program.

Note: the user must not inform a priori the value of N in the program.

*/

#include <stdio.h>
int main(){
	
	int valor;
	int menor;
	int maior;
	int cont = 0;
	
	do{
		printf("Informe o proximo valor \n");
		scanf("%d", &valor);

		if(cont == 0){
			menor = valor;
			maior = valor;		
			cont++;
		}

		
		if(valor<menor && valor!=0){
			menor = valor;
		}else{
		
			if(valor>maior && valor !=0){
				maior = valor;
			}
		}
		
	}while(valor != 0);
	
	printf("O menor valor eh %d \n", menor);
	printf("O maior valor eh %d \n", maior);

	return 0;
}
