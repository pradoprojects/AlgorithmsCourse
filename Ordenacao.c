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
void ordenar_quick(int inicio, int fim){
   
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
   
   if(inicio < j) ordenar_quick(inicio, j);
   if(i < fim) ordenar_quick(i, fim);   

}


void ordenar_bolha ()
{
	int fim,i;
	for (fim=SIZE-1; fim>0; fim--) 
	{	
	
		for (i=0; i<fim; i++) {
	
			if (vRegistros[i]>vRegistros[i+1]) 
			{
				
				int temp = vRegistros[i];      
				/* troca */
				vRegistros[i] = vRegistros[i+1];
				vRegistros[i+1] = temp;	
				qtdeTrocas++;					
			}
		}
	}
}


void gerarNumerosAleatorios() {
	int i;
	//srand( (unsigned)time(NULL) ); // Execute o experimento com esta linha desbilitada
	for (i = 0; i < SIZE; i++)
     {
           vRegistros[i] = rand() % 100;
     }
}


void imprimirNumeros() {
	int i;
	for (i = 0; i < SIZE; i++)
     {
        printf("%d ", vRegistros[i]);
     }
}


int main(int argc, char *argv[]) {

   gerarNumerosAleatorios();
   
   timer[0] = clock();
 
   //ordenar_bolha();
   //ordenar_quick(0, SIZE-1);
	insertionSort();
   timer[1] = clock();  

   double Tempo = (timer[1] - timer[0]) * 1000.0 / CLOCKS_PER_SEC;
   printf("\n Total de Trocas: %llu \n", qtdeTrocas); 
   printf("\n Tempo gasto: %g ms.\n", Tempo);   

	//printf("\n%d bytes\n", sizeof( unsigned long long ) );

   return 0;
}

