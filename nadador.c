#include<stdio.h>

main(){
    int idade;
    
    printf("Nadador informe sua idade e aperte enter \n");
    scanf("%d", &idade);
    
    if(idade >= 5 && idade <= 7){
        printf("Voce esta na categoria infantil A \n");
	}else{
		if(idade >= 8 && idade <= 10){
		        printf("Voce esta na categoria infantil B\n");
		}else{
			if(idade >= 11 && idade <= 13){ 
		        printf("Voce esta na categoria juvenil A\n");
			}else{
				if(idade >= 14 && idade <= 17){ 
			        printf("Voce esta na categoria juvenil B\n");
				}else{
			        printf("Voce nao se enquadra em nenhuma categoria\n");

				}
			     
			}
		    		
		}
		    
	}
    
system("PAUSE");

}   
