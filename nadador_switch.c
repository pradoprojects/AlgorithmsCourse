#include <stdio.h>

main()
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
	system("pause");
}
