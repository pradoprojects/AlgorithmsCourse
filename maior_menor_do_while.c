#include <stdio>
main(){
	
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
	system("PAUSE");
}
