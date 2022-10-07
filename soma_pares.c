/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int soma_pares(int V[]);

int main() {
    int V[5], x, Resultado;

	for(x=0; x<5; x++){
		printf("Digite um número");
		scanf("%d", &V[x]);
	}

	Resultado = soma_pares(V);

	for(x=0; x<5; x++)
		printf("%d\t", V[x]);

	printf("\nA soma dos valores pares do vetor é: %d", Resultado);

 
}

int soma_pares(int V[]){
	
	int soma=0;  //sempre acumuladores e contadores precisam ser inicializados em zero
	int x;
	
	for(x=0; x<5; x++){
		if(V[x]%2==0)  //se o resto da divisão por 2 for zero
			soma = soma+V[x];
	}
	return soma;

    
}


