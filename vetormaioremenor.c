/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int v[10], maior, menor, i;
    
    
    printf("insira 10 valores: ");
    
    for(i=0; i<10; i++)
    scanf("%d", &v[i]);
    
    
    maior = v[0];
    for(i=1; i<10; i++){
    
    if(v[i]>maior)
    maior = v[i];
    }
    
   
   menor = v[0];
   for(i=1; i<10; i++){ 
    if(v[i]<menor)
    menor = v[i];
   }
    

    printf("o maior é: %d\n", maior);
    printf("----------------------\n");
    printf("o menor é: %d", menor);
    
    
}
