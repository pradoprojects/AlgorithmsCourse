#include <stdio.h>
main (){
	
	double Celsius;
	double Fahrenheit;
	int Opcao;
	
	printf ("Digite 1 para converter de Celsius para Fahrenheit ou 2 para o inverso: \n");
	scanf ("%d", &Opcao);
	
	if (Opcao == 1){
		printf ("Informe a temperatura em Celsius: \n");
		scanf ("%lf", &Celsius);
		Fahrenheit = ((9.0/5.0)*Celsius) + 32;
		printf ("A temperatura em Fahrenheit e: %0.2lf \n", Fahrenheit);
	
	}else{
		if (Opcao == 2){
		    printf ("Informe a temperatura em Fahrenheit: \n");
		    scanf ("%lf", &Fahrenheit);
		    Celsius = ((5.0/9.0)*(Fahrenheit - 32.0));
		    printf ("A temperatura em Celsius e: %0.2lf \n", Celsius);
		}else{
			printf ("Opcao invalida \n");
		}	    
	}
	
	system ("PAUSE");

}   
