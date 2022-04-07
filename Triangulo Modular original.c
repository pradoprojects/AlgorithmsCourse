#include<stdio.h>

//implementado com variaveis locais

int verifica_triangulo(float A, float B, float C)
{
	
	int resp;
	if ((A<(B+C))&&(B<(A+C))&&(C<(A+B)))
	{
		resp = 1;
	}
	else
	{
		resp = 0;
	}
	return resp;
}

int define_tipo (float A, float B, float C)
{
	int tipo;
	if (A==B&&A==C){
		tipo = 1; //1 significa equilatero
	} else{
		if (A==B||A==C||B==C) {
			tipo = 2;//2 significa isosceles
		} else {
			tipo = 3;//3 significa escaleno
		}
	}
	return tipo;
}

int main()
{
	float ladoA, ladoB, ladoC;
	int tipo_triangulo, ehtriangulo, repete;
	do {
		printf("Informe o valor dos 3 lados seguidos de ENTER: ");
		scanf("%f %f %f", &ladoA, &ladoB, &ladoC);
		ehtriangulo = verifica_triangulo(ladoA, ladoB, ladoC);
		if (ehtriangulo==0)
		{
			printf("\n Estes valores nao formam um triangulo.");
		} 
		else 
		{
			printf("\n Estes valores formam um triangulo.");
			tipo_triangulo = define_tipo (ladoA, ladoB, ladoC);
			switch (tipo_triangulo){
				case 1: printf ("\nTriangulo equilatero."); break;
				case 2: printf ("\nTriangulo isosceles."); break;
				case 3: printf ("\nTriangulo escaleno."); break;
				default : printf ("\nExcessao.");
			}
		}
		printf("\nDeseja continuar (digite -1 para sair ou qualquer outro numero para continuar): ");
		scanf("%d", &repete);
	} while (repete != -1);

	return (0);
}


