#include<stdio.h>

main(){
	int m[4][3];
	int linha, coluna;
	
	//Preenche a matriz.
	for(linha=0;linha<4;linha++){
		for(coluna=0;coluna<3;coluna++){
			printf("Informe o valor da casa %d %d", linha, coluna);
			scanf("%d", &m[linha][coluna]);	
		}		
	}
	
	//Imprime a matriz.	
	for(linha=0;linha<4;linha++){
		for(coluna=0;coluna<3;coluna++){
			printf("%d ", m[linha][coluna]);
		}
		printf("\n");		
	}
	system("PAUSE");
}
