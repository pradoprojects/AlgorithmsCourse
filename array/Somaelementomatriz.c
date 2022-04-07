#include <stdio.h>

// Em caso de 2 ou mais valores iguais e maiores que os demais,
// esse programa sempre retorna a primeira ocorrência.

main(){
	float m[3][2];
	int i, j;
	int x, y;
	float maior;
	
	printf("Informe 6 valores inteiros para preencher a matriz");
	for(i=0; i<3; i++){
		for(j=0; j<2; j++){
			scanf("%f", &m[i][j]);
		}
	}
	maior = m[0][0];
	x=0;
	y=0;
		
	for(i=0; i<3; i++){
		for(j=0; j<2; j++){
			if(m[i][j]>maior){
				//Encontrou novo maior
				maior = m[i][j];
				x = i;
				y = j;				
			}
		}
	}
	printf("O maior valor eh %f na posicao %d %d da matriz \n", maior, x, y);
	
	system("PAUSE");
}
