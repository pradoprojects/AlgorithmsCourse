#include<stdio.h>
main (){
	double h=0;
	double n, auxiliar;
	printf ("Digite o valor de N.\n");
	scanf ("%lf", &n); 
	
	if(n>0){
	
		for (auxiliar=1; auxiliar<=n ; auxiliar++){
			h=h+(1/auxiliar);
		}
		printf ("O valor de h eh %lf.\n", h);
	}else{
		printf("Erro! Não existe divisão por zero!");
	}
	
	
	system ("PAUSE");
}
