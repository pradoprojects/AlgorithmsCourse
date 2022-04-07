#include <stdio.h>
main(){
	int x[5];
	int i;
	int soma;
	
	printf("Informe a  sequencia de 5 valores separados por enter \n");
	
	for(i=0; i<5; i++){
		scanf("%d", &x[i]);
	}
	
	
	
	for(i=0; i<5; i++){
	
		soma = soma + x[i];
		
	
	}
	
	printf("%d \n", soma);
	system("PAUSE");
	
	
}
