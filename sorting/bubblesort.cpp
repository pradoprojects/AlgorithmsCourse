#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

clock_t timer[2];
unsigned long long qtdeTrocas = 0;
int vRegistros[SIZE];


void bubbleSort ()
{
	int fim,i;
	for (fim=SIZE-1; fim>0; fim--) 
	{	
	
		for (i=0; i<fim; i++) {
	
			if (vRegistros[i]>vRegistros[i+1]) 
			{
				
				int temp = vRegistros[i];      
				/* swap */
				vRegistros[i] = vRegistros[i+1];
				vRegistros[i+1] = temp;	
				qtdeTrocas++;					
			}
		}
	}
}


void generateRandomNumbers() {
	int i;
	for (i = 0; i < SIZE; i++)
     {
           vRegistros[i] = rand() % 100;
     }
}

int main(int argc, char *argv[]) {

   generateRandomNumbers();
   
   timer[0] = clock();
 	bubbleSort();
   timer[1] = clock();  

   double Tempo = (timer[1] - timer[0]) * 1000.0 / CLOCKS_PER_SEC;
   printf("\n Bubble Sort: %d registers \n", SIZE); 
   printf("\n Total Swaps: %llu \n", qtdeTrocas); 
   printf("\n Time spent: %g ms.\n", Tempo);   

   return 0;
}
