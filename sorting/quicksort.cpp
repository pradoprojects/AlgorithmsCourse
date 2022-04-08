#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

clock_t timer[2];
unsigned long long qtdeTrocas = 0;
int vRegistros[SIZE];


void quickSort(int inicio, int fim){
   
   int pivo, aux, i, j, meio;
   
   i = inicio;
   j = fim;
   
   meio = (int) ((i + j) / 2);
   pivo = vRegistros[meio];
   
   do{
      while (vRegistros[i] < pivo) i = i + 1;
      while (vRegistros[j] > pivo) j = j - 1;
      
      if(i <= j){
         aux = vRegistros[i];
         vRegistros[i] = vRegistros[j];
         vRegistros[j] = aux;
         i = i + 1;
         j = j - 1;
         qtdeTrocas++;
      }
   }while(j > i);
   
   if(inicio < j) quickSort(inicio, j);
   if(i < fim) quickSort(i, fim);   

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
 	quickSort(0, SIZE-1);
   timer[1] = clock();  

   double Tempo = (timer[1] - timer[0]) * 1000.0 / CLOCKS_PER_SEC;
   printf("\n Insertion Sort: %d registers \n", SIZE); 
   printf("\n Total Swaps: %llu \n", qtdeTrocas); 
   printf("\n Time spent: %g ms.\n", Tempo);   

   return 0;
}
