/*
	@author Marllos Prado
	Make a program where the user enters 3 values A, B, C, and your program should check if they can be the lengths of the sides of a triangle and, if they are, check if they make up an equilateral, isosceles or scalene triangle. Also inform if they do not compose any triangle.

	Triangle: 3-sided geometric figure, where each side is smaller than the sum of the other two.
	
	Equilateral Triangle: Triangle with 3 equal sides.
	Isosceles triangle: Triangle with 2 equal sides.
	Scalene triangle: Triangle with all sides different.
*/

#include<stdio.h>

int main(){
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
	

	return 0;	
}
