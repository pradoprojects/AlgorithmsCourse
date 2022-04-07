#include<stdio.h>


main(){
	float i, j;
	float soma = 0;
	int contadora=0;
	
	for(i=0; i<=7; i++){
		for(j=0; j<=7; j++){
			soma = soma + ((2*j+1)*i)/(2*j+5);
			contadora++;
		}
	
	}
	printf("Somatorio: %f \n", soma);
	printf("Total repeticao: %d \n", contadora);
	system("PAUSE");

}
