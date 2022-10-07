/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int nsoma (int idadeh1, int idadeh2, int idadem1, int idadem2, char sex);

int main(void){
    
    int idade_homens,idade_homens2, idade_mulheres,idade_mulheres2, resultado, produto;
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
    
   
                     
   resultado = (idade_homens, idade_homens2, idade_mulheres, idade_mulheres2, sexo); 
   
    if (idade_homens<idade_mulheres)
            
            produto = (idade_homens*idade_mulheres);
   
   if (idade_homens2<idade_mulheres2)
            
            produto = (idade_homens2*idade_mulheres2);
       
   
   
   
    printf("\na soma das idades entre o mais velho e a mais nova é:%d", resultado);
  
    
    printf("\no produto das idades do homem mais novo e a mulher mais velha é:%d", produto);
   
}
   
   int nsoma (int idadeh1, int idadeh2, int idadem1, int idadem2, char sex){
       
       int soma;
       
        if(idadeh1>idadem1)
        soma = (idadeh1+idadem1);
            
        else
        
        soma=(idadeh2+idadem2);
            
       
       
       
       return soma;
       
   }