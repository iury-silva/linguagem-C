/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

Faça um programa que receba três números obrigatoriamente em ordem crescente e um quarto número que não siga essa regra. 
Mostre, em seguida, os quatro números em ordem decrescente. Suponha que o usuário digitará quatro números diferentes.


*******************************************************************************/
#include <stdio.h>

void ord (int num1, int num2, int num3, int num4);

int main(void)
{
    
    int n1, n2, n3, n4;
    
    
    printf("Insira o primeiro numero em ordem crescente:\n");
    scanf("%d", &n1);
   
    printf("Insira o segundo numero em ordem crescente:\n");
    scanf("%d", &n2);
   
     printf("Insira o terceiro numero em ordem crescente:\n");
    scanf("%d", &n3);

     printf("Insira o quarto numero:\n");
    scanf("%d", &n4);
    
 
    ord(n1, n2, n3, n4);
    
    
    
}





void ord (int num1, int num2, int num3, int num4){
    
    
     if(num1>num2>num3!=num4){
      
      printf("a ordem decrescente vai ficar: %d e %d e %d e %d", num4, num3, num2, num1);
  
      
      
  }
    
    
    
    
    
    
    
}