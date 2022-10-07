/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
float nsalario(int codi, float sal);
int main()

{
    int cod, soma;
    float salario, nsal, resultado;    
    char op;   
        
        printf("escolha um código\n");
        scanf("%d", &cod);
    
    switch(cod) {
        
        case 101:
            printf("gerente:2.000");
            break;
        case 102:
            printf("engenheiro:1.250");
            break;
        case 103:
            printf("técnico:1.000");
            break;
        default:
            printf("outros:500");
            break;
    }
    
    printf("\ninsira seu salario:");
    scanf("%f", &salario);
    
   
   
   resultado = nsalario(cod, salario);
   
    if (resultado>salario)
        soma = (resultado-salario);
   
   
    printf("\nseu novo salario é: %f\n e a diferença: %i", resultado, soma);
    
  
}

float nsalario(int codi, float sal){
    
    float soma, nsal;
    
    
    if(sal==2000)
        nsal=(2000*0.10)+sal;
    
   if(sal==1250)
        nsal=(1250*0.20)+sal;
   
   if(sal==1000)
        nsal=(1000*0.30)+sal;
   
   if(sal==500)
        nsal=(500*0.40)+sal;
   
    
   return nsal;
   
    }