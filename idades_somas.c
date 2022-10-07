/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int idade_homens,idade_homens2, idade_mulheres,idade_mulheres2, soma, produto;
    char sexo;
    
    
    printf("favor informar a idade");
    scanf("%d", &idade_homens);
    printf("\ninforme seu sexo:M=masculino e F=feminino");
    scanf("%s", &sexo);
    
    printf("favor informar a idade");
    scanf("%d", &idade_homens2);
    printf("\ninforme seu sexo:M=masculino e F=feminino");
    scanf("%s", &sexo);
    
    printf("favor informar a idade");
    scanf("%d", &idade_mulheres);
    printf("\ninforme seu sexo:M=masculino e F=feminino");
    scanf("%s", &sexo);
    
    printf("favor informar a idade");
    scanf("%d", &idade_mulheres2);
    printf("\ninforme seu sexo:M=masculino e F=feminino");
    scanf("%s", &sexo);
    
    if(idade_homens>idade_mulheres);
        soma/=(idade_homens+idade_mulheres);
            
        if (idade_homens<idade_mulheres)
            produto = (idade_homens*idade_mulheres);
             
    if(idade_homens2>idade_mulheres2);
        soma=(idade_homens2+idade_mulheres2);
            
        if (idade_homens2<idade_mulheres2)
            produto = (idade_homens2*idade_mulheres2);
                     
    
    printf("\na soma das idades entre o mais velho e a mais nova é:%d", soma);
  
    
    printf("\no produto das idades do homem mais novo e a mulher mais velha é:%d", produto);
   
   
    
}
