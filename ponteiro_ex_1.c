#include <stdio.h>

main(){
	int vet[10]={{1},{2},{3},{4},{5},{6},{7},{8},{9},{10}};
	int i;
	for(i=0; i<10; i++){
		printf("notacao normal %d \n", &(vet[i]) );
		printf("notacao ponteiro %d \n", vet+i );
	} 
	system("PAUSE");
	
}
