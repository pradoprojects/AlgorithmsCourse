#include <stdio.h>
#include <math.h>
#include <stdlib.h>
main() {
	
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


	system("pause");	
}

