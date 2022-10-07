/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main(void)

{
int numero, cont=0;

    printf("Digite um numero: ");
    scanf("%d",&numero);

    for (cont=0; cont<=20 ; cont++){
        printf("%d x %d = %d \n",numero,cont,numero*cont);
    }
    
}