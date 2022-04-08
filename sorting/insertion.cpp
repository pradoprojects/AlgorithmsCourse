#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

clock_t timer[2];
unsigned long long qtdeTrocas = 0;
int vRegistros[SIZE];


void insertionSort(){
    int i, j, key;
    for (i = 1; i < SIZE; i++) {
        key = vRegistros[i];
        j = i - 1;
        
        while (j >= 0 && vRegistros[j] > key) {
            vRegistros[j + 1] = vRegistros[j];
            j = j - 1;
         qtdeTrocas++;   
        }
        vRegistros[j + 1] = key;
         qtdeTrocas++;
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
 	insertionSort();
   timer[1] = clock();  

   double Tempo = (timer[1] - timer[0]) * 1000.0 / CLOCKS_PER_SEC;
   printf("\n Insertion Sort: %d registers \n", SIZE); 
   printf("\n Total Swaps: %llu \n", qtdeTrocas); 
   printf("\n Time spent: %g ms.\n", Tempo);   

   return 0;
}
