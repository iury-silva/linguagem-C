/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

float novoval(float valor, int parc);

int main()
{

    float val, nval, resultado;
    int parcelas, vezes;
  
    
    printf("Informe o valor do seu produto");
    scanf("%f", &val);
    printf("\ncaso Selecione 3 parcelas haverá acrescimo de 10 %% no seu valor");
    printf("\ncaso Selecione 5 parcelas haverá acrescimo de 20 %% no seu valor");
    printf("\nSelecione o número de parcelas: 3 ou 5");
    scanf("%d", &parcelas);
    
    resultado = novoval (val, parcelas);
          
          printf("\nO preço ficou: %.2f", resultado);
    
    
}

float novoval(float valor, int parc){
    
    float nval;
    
    
      if(parc==3)
        nval=(valor*10/100)+valor;
        
        
        else
          nval=(valor*20/100)+valor;
    
    
    return nval;
    
    
}









