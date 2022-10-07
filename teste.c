/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int idade1, idade2, idade3, idade4;
   char sexo, soma, produto;
   
   printf("informe sua idade");
   scanf("%d", &idade1);
   printf("informe o seu sexo, M para masculino e F para feminino");
   scanf("%s", &sexo);
   
     printf("informe sua idade");
   scanf("%d", &idade2);
   printf("informe o seu sexo, M para masculino e F para feminino");
   scanf("%s", &sexo);
    
      printf("informe sua idade");
   scanf("%d", &idade3);
   printf("informe o seu sexo, M para masculino e F para feminino");
   scanf("%s", &sexo);
   
     printf("informe sua idade");
   scanf("%d", &idade4);
   printf("informe o seu sexo, M para masculino e F para feminino");
   scanf("%s", &sexo);
   
   if(idade1>idade2)
       soma=(idade1+idade2);   
        
        else produto=(idade3+idade4);
        
    printf("\nA soma e produtos são: %d e %d", soma, produto);
   
   
   
   
   
   
}
