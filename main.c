/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{

    float altura, peso_ideal;
    char sexo;
    
    
    printf("Informe qual é sua altura");
    scanf("%f", &altura);
    printf("Informe o sexo"
    "M para masculino e F para feminino: ");
    scanf("%s", &sexo);
    
    
    if(sexo =='F')
        peso_ideal = (62.1*altura)-44.7;
        else
            peso_ideal = (72.7*altura)-58;
              
            
    printf("\nSeu peso ideal é: %f", peso_ideal);        
    
}
