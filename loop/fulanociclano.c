/*
	@author Marllos Prado

Fulano is 1.50 meters and grows 2 centimeters a year, while Ciclano is 1.10 meters and grows 3 centimeters a year. Build a program that calculates and prints how many years it will take for Ciclano to be older than Fulano

*/
#include<stdio.h>

int main(){
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

	return 0;
}
