/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
float nmedia (float altura, int id);
int main()
{
   
   int idade;
   float alt, resultado;
   
   
   printf("digite sua idade");
   scanf("%d", &idade);
   
   
  resultado = nmedia(alt, idade);
   
  printf("a media das alturas é %.2f", resultado);
    
}

float nmedia (float altura, int id){
    
    int cont=0;
    float somalt=0, media;
      
      while(id!=0){
       printf("digite sua altura");
       scanf("%f", &altura);
      
      if(id>50){
          
          somalt = somalt + altura;
          cont = cont + 1;     
          
          }
       printf("digite sua idade");
       scanf("%d", &id);
       
   }
    
    media = somalt/cont;
   
    
    return media;
    
    
    
}




