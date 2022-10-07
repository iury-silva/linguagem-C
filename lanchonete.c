/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  
  int cod;
  float total, sub, quant;
  
  printf("insira o codigo do seu pedido");
  scanf("%d", &cod);
  
  while(cod!=0){
      
      printf("insira a quantidade");
      scanf("%f", &quant);
      
      switch(cod){
          
          case 100:
          sub=1.20*quant;
          break;
          
          case 101:
          sub=1.30*quant;
          break;
            
          case 102:
          sub=1.50*quant;
          break;
          
          case 103:
          sub=1.20*quant;
          break;
          
          case 104:
          sub=1.30*quant;
          break;
          
          case 105:
          sub=1*quant;
          break;
                  
          }
      total = total + sub;
     printf("insira o codigo do seu pedido\n");
     scanf("%d", &cod);
  
      
  }
  
  printf("o total do seu pedido ficou: %.2f", total);
  
  
        
}
