#include <stdio.h>
int v1, v2; //variáveis de escopo global

int maiorValor(){
   int resp; //variavel de retorno 
   if(v1>=v2){
       resp=v1;
    }else{
       resp=v2;
    }
    return resp;
}

int main(){
   int maior;
   printf("Digite dois valores inteiros");
   scanf("%d %d", &v1, &v2);
   maior = maiorValor();
   printf("O maior eh: %d", maior);
   return 0;
}
