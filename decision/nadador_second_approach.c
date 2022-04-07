/*
	@author Marllos Prado
	Write a program that takes the age of a swimmer and prints its category following the rules:
	
	Category 	--> Age
	Child A  	--> 5 - 7 years
	Child B  	--> 8 - 10 years
	Juvenile A  --> 11 - 13 years
	Juvenile B  --> 14 - 17 years
 
	If it does not fit into any category, the program must inform the user of this
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
	
	int idade;
	
	printf("Para fins de classificacao digite a idade do nadador: ");
	scanf("%d", &idade);
	
	if(idade<=4)
	printf("Nadador nao se encaixa em nenhuma categoria\n");
		else if (idade<=7)
		printf("Nadador da categoria Infantil A\n");
			else if (idade<=10)
			printf("Nadador da categoria Infantil B\n");
				else if(idade<=13)
				printf("Nadador da categoria Juvenil A\n");
					else if(idade<=17)
					printf("Nadador da categoria Juvenil B\n");
						else if (idade>=18)
						printf("Nadador nao se encaixa em nenhuma categoria\n");


	
	return 0;	
}

