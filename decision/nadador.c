/*
	@author Marllos Prado
	Write a program that takes the age of a swimmer and prints its category following the rules:
	
	Category 	--> Age
	Child A  	--> 5 - 7 years
	Child B  	--> 8 - 10 years
	Juvenile A  --> 11 - 13 years
	Juvenile B  --> 14 - 17 years
 
	If it does not fit into any category, the program must inform the user of this
*/

#include<stdio.h>

int main(){
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
    

	return 0;
}   
