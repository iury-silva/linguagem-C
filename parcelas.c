/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{

    float val, nval;
    int parcelas, vezes;
  
    
    printf("Informe o valor do seu produto");
    scanf("%f", &val);
    printf("\ncaso Selecione 3 parcelas haverá acrescimo de 10 %% no seu valor");
    printf("\ncaso Selecione 5 parcelas haverá acrescimo de 20 %% no seu valor");
    printf("\nSelecione o número de parcelas: 3 ou 5");
    scanf("%d", &parcelas);
    
      if(parcelas==3)
        nval=(val*10/100)+val;
        
        
        else
          nval=(val*20/100)+val;
          
          printf("\nO preço ficou: %f", nval);
    
    
}
