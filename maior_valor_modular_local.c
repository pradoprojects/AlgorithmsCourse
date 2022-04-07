#include <stdio.h>


int maiorValor(int a, int b){
   int resp; //variavel de retorno 
   if(a>=b){
       resp=a;
    }else{
       resp=b;
    }
    return resp;
}

int main(){
   int maior, v1, v2;
   printf("Digite dois valores inteiros");
   scanf("%d %d", &v1, &v2);
   maior = maiorValor(v1, v2);
   printf("O maior eh: %d", maior);
   return 0;
}
