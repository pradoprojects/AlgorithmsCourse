#include <stdio.h>

main(){
	float m[4][2];
	int i, j;
	float media, somatorio=0;
	
	printf("Informe 8 valores reais para preencher a matriz \n");
	for(i=0; i<4; i++){
		for(j=0; j<2; j++){
			printf("Informe o valor %d %d \n", i, j);
			scanf("%f", &m[i][j]);
		}
	}

		
	for(i=0; i<4; i++){
		for(j=0; j<2; j++){
			somatorio=somatorio+m[i][j];
		}
		media = somatorio/2;
		printf("media linha %d eh %f \n", i, media);
		somatorio=0;
	}
	
	
	system("PAUSE");
}
