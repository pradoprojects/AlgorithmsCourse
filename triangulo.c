#include<stdio.h>

main(){
	float a=0;
	float b=0;
	float c=0;
	
	printf("Informe os valores dos lados do triangulo,separados por espaco e pressione enter \n");
	scanf("%f %f %f", &a, &b, &c);
	
	if(a<b+c && b<a+c && c<b+a){
		printf("Forma triangulo \n");
		
		if(a==b && b==c && c==a){
			printf("Triangulo equilatero \n");	
		}else{
			if(a==b||b==c||a==c){
				printf("Triangulo isoceles \n");
			}else{
				printf("Triangulo escaleno \n");	
			}
		}
		
	}else{
		printf("Nao e triangulo \n");
	}
	
	system ("PAUSE");	
}
