/*
	@Author Marllos Prado
	Change the ideal weight program so that it receives, in addition to the height, the user's current weight, and check if he is at the ideal weight. If so, inform the user that he is at his ideal weight.
*/

#include<stdio.h>

int main()
{
	float altura=0;
	float peso_ideal=0;
	float peso_atual=0;	
	
	
	//Interação para obter altura do usuário
	printf("Digite a altura: ");
	scanf("%f", &altura);
	printf("Digite seu peso atual");
	scanf("%f", &peso_atual);
	
	peso_ideal=(72.7*altura)-58.0;
	
	if(peso_atual <= peso_ideal){
	
		if(peso_atual >= 30){
			printf("Parabens voce esta no peso ideal!");
		}else{
			printf("Cuidado, peso muito baixo!");
		}	
		
	}else{
		printf("Cuidado, sobrepeso!");
	}
	
		
	printf("O seu peso ideal eh: %0.2f \n",peso_ideal);
	


	return 0;
}
