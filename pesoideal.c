#include<stdio.h>

main()
{
	float altura=0;
	float peso_ideal=0;

	
	//Interação para obter altura do usuário
	printf("Digite a altura: ");
	scanf("%f", &altura);
	
	peso_ideal=(72.7*altura)-58.0;
	
	printf("O seu peso ideal eh: %0.2f \n",peso_ideal);

	system("PAUSE");
}
