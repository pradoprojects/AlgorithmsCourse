#include <stdio.h>
main(){
	float tc = -100;
	float tf;
	
	while( tc <= 100 ){
		tf = ((tc*9.0)/5.0) +32.0;
		printf("%0.2f Celsius ---------- %0.2f Fahrenheit \n", tc, tf);
		tc = tc+10;
	}
	system("PAUSE");

}
