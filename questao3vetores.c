/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{

    int v[30], x;
    
    
    printf("Digite 30 números:");
    
    for(x=0; x<30; x++)
    scanf("%d", &v[x]);

    for (x=0; x<5; x++){
        
        if(v[x]%2==0)
        printf("os pares sao: %d\t\n", v[x]);
    }
    


}
