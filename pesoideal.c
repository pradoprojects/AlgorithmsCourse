#include<stdio.h>

main()
{
	float altura=0;
	float peso_ideal=0;

	
	//Intera��o para obter altura do usu�rio
	printf("Digite a altura: ");
	scanf("%f", &altura);
	
	peso_ideal=(72.7*altura)-58.0;
	
	printf("O seu peso ideal eh: %0.2f \n",peso_ideal);

	system("PAUSE");
}
