/*
	Having as input the height of a person, build a program that calculates his ideal weight, using the following formula:
	* h = height (in meters)
	* ideal weight = (72.7 x h) – 58
*/

#include<stdio.h>

int main()
{
	float altura=0;
	float peso_ideal=0;

	
	//Interação para obter altura do usuário
	printf("Digite a altura: ");
	scanf("%f", &altura);
	
	peso_ideal=(72.7*altura)-58.0;
	
	printf("O seu peso ideal eh: %0.2f \n",peso_ideal);


	
	return 0;
}
