/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int sal;
    float salario, nsal,soma;    
    char op;   
        
        printf("escolha um código\n");
        scanf("%d", &sal);
    
    switch(sal) {
        
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
    
    if(salario==2.000)
        nsal=(2.000*0.10)+salario;
    
   if(salario==1.250)
        nsal=(1.250*0.20)+salario;
   
   if(salario==1.000)
        nsal=(1.000*0.30)+salario;
   
   if(salario==500)
        nsal=(500*0.40)+salario;
   
   
   
    printf("\nseu novo salario é: %f", nsal);
    
    printf("\ndeseja ver a diferença? y=yes n=no");
    scanf("%s",&op);
    
    printf("\ninsira seu novo salario: %f", nsal);    
    scanf("%f", &nsal);
    
    if (nsal>salario)
        soma =(nsal-salario);
    
    printf("\ne a diferença ficou: %f", soma);
    
}

