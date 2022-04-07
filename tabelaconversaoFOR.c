#include <stdio.h>

main(){
	float tc;
	float tf;
	
	for (tc=-100; tc<=100  ; tc+=10){
		printf("%0.2f celsius", tc);
		tf = ((9.0/5.0)*tc)+32;
		printf("--------- %0.2f fahrenheit \n", tf);
	}
	system("PAUSE");
}
