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

int main()
{
	char c;
	
	printf("informe a categoria do nadador: \n A, B, C, D \n");
	scanf("%c", &c); 
	switch(c){
		case 'A' : printf("A idade do nadador eh entre 5-7 anos");break;
		case 'a' : printf("A idade do nadador eh entre 5-7 anos");break;
		case 'B' : printf("A idade do nadador eh entre 8-10 anos");break;
		case 'b' : printf("A idade do nadador eh entre 8-10 anos");break;
		case 'C' : printf("A idade do nadador eh entre 11-13 anos");break;
		case 'c' : printf("A idade do nadador eh entre 11-13 anos");break;
		case 'D' : printf("A idade do nadador eh entre 14-17 anos");break;
		case 'd' : printf("A idade do nadador eh entre 14-17 anos");break;
		default: printf ("Categoria %c invalida \n", c);
	}

	return 0;
}
