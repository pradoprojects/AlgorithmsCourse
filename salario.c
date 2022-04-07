#include <stdio.h>

main(){
	int cod;
	float salario;
	
	printf("Informe o codigo do cargo (1- Escriturario, 2-Secretario, 3-Caixa, 4-Gerente, 5-Diretor) \n");
	scanf("%d", &cod);
	
	switch(cod){
		case 1: printf("Informe o salario \n");
				scanf("%f", &salario);
				salario = salario*1.5;
				printf("O novo salario do escriturario eh %0.2f \n", salario);
		break;
		
		case 2: printf("Informe o salario \n");
				scanf("%f", &salario);
				salario = salario*1.35;
				printf("O novo salario do secretario eh %0.2f \n", salario);
		break;
		case 3: printf("Informe o salario \n");
				scanf("%f", &salario);
				salario = salario*1.20;
				printf("O novo salario do caixa eh %0.2f \n", salario);
		break;
		case 4: printf("Informe o salario \n");
				scanf("%f", &salario);
				salario = salario*1.4;
				printf("O novo salario do gerente eh %0.2f \n", salario);
		break;		
		case 5: printf("Informe o salario \n");
				scanf("%f", &salario);
				printf("O salario do diretor se manteve em %0.2f \n", salario);
		break;	
		default: printf("Cargo invalido");
	}
	
	system("PAUSE");
	
}
