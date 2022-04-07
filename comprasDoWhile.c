#include <stdio.h>

int main(){
	float valorCompra=0;
	char codigoCompra='s';
	float totalCompra=0;
	float totalDinheiro=0;
	float totalCheque=0;
	
	do{
		printf("------------------------------------- \n");
		printf("Digite d para compras a vista em dinheiro \n");
		printf("Digite c para compras em cheque \n");
		printf("Digite s para sair \n");
		printf("------------------------------------- \n");
		scanf("%s", &codigoCompra);
		
		if(codigoCompra == 'd' || codigoCompra == 'c' || codigoCompra == 's'){
				
			switch(codigoCompra){
				
				case 'd': 
				printf("Digite o valor da compra \n");
				scanf("%f", &valorCompra);
				totalDinheiro = totalDinheiro + valorCompra; 
				totalCompra = totalCompra + valorCompra;
				break;
				
				case 'c': 
				printf("Digite o valor da compra \n");
				scanf("%f", &valorCompra);
				totalCheque = totalCheque + valorCompra;
				totalCompra = totalCompra + valorCompra;
				break;
				
				case 's':
					printf("Encerrando o programa... \n");
				break;
				
				default: printf("Erro! Codigo Invalido");
			}
			
		
		
		}else{
			printf("Codigo Invalido");
		
		}
	}while(codigoCompra != 's');
	
	printf("O total em dinheiro eh: %0.2f \n", totalDinheiro);
	printf("O total em cheque eh: %0.2f \n", totalCheque);
	printf("O total de compras eh: %0.2f \n", totalCompra);
	

}
