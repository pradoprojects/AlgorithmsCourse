/*
	@author Marllos Prado

	Build a program that converts a temperature given in degrees Celsius to Farenheith:
*/

#include <stdio.h>
int main (){
	
	double Celsius=0;
	double Fahrenheit=0;

	
	printf ("Informe a temperatura em Celsius: \n");
	scanf ("%lf", &Celsius);
	
	Fahrenheit = ((9.0/5.0)*Celsius) + 32.0;
	
	printf ("A temperatura em Fahrenheit e: %0.2lf \n", Fahrenheit);
	


	return 0;
}   
