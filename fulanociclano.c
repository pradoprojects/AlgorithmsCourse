#include<stdio.h>

main(){
	float fulano = 1.5;
	float tf = 0.02;
	float ciclano = 1.1;
	float tc = 0.03;
	int tempo=0;
	
		
	while(ciclano <= fulano){
		fulano = fulano + tf; 
		ciclano = ciclano + tc; 
		tempo = tempo +1;
	}
	printf("Sao necessarios %d anos para que ciclano ultrapasse fulano \n", tempo);
	//printf("\n Altura fulano %f | Altura ciclano %f", fulano, ciclano);	
	system("PAUSE");
}
