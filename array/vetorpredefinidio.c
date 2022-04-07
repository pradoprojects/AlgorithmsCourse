#include <stdio.h>

main(){
	int i;
	int X[10];

	
	for(i=0; i<10; i++){
		X[i]= i-2;
	}
	
	for(i=0; i<10; i++){
		printf("%d ", X[i]);
	}

	system("PAUSE");
	
	
}
