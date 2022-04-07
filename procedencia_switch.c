#include<stdio.h>
main()
{
	float P;
	int   C;
	
	printf("Informe o preco e o codigo do produto:\n");
	scanf("%f %d", &P, &C);
	
	
	
	if(C<0){
		printf("Invalido");
	}else{
		printf("O valor: R$ %0.2f", P);
		switch(C){
			case 1 : printf("Procedencia: SUL");
			break;
			case 2 : printf("Procedencia: NORTE");
			break;
			case 3 : printf("Procedencia: LESTE");
			break;
			case 4 : printf("Procedencia: OESTE");
			break;
			default : if (C==5||C==6||(C>=25&&C<=30)){
						printf("Procedencia: NORDESTE");
					  }else{
						if(C>=7&&C<=9){
							printf("Procedencia: SUDESTE");
							
						}else{
							if(C>=10&&C<=20){
								printf("Procedencia: CENTRO-OESTE");
								
							}else{					
								printf("Importado");
							}
						}
					}
			
		}
	
	}
	system("PAUSE");
}
