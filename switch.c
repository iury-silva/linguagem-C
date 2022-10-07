/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int empresa, x, y, z;
    float p, a, b, c, d, f;
    a=0.45;
    b=0.35;
    c=0.3;
    d=0.4;
    f=0.25;
    
   printf("Selecione a empresa\n");
   scanf("%i", &empresa);
    
    switch(empresa){
        
        case 1:
        printf("empresa n1");
        
        printf("\nIndique o nível de poluição:");
        scanf("%f", &p);
    
        
        if(p > a){
        printf("paralisar produção");
        }
        if (p < b){
        printf("aceitavel");
        }   
        else{
            printf("ajustar produção");
        }
            break;
        
        
        
        case 2:
            printf("empresa n2");
        
        printf("\nIndique o nível de poluição:");
        scanf("%f", &p);
    
        
        if(p>d){
            printf("paralisar produção");
        }    
        if(p<c){
            printf("aceitavel");
        }    
        else{
            printf("ajustar produção");
        }    
            break;
        
        
        
        
        case 3:
        printf("empresa n3");
        
        printf("\nIndique o nível de poluição:");
        scanf("%f", &p);
    
       
       if(p>b){
            printf("paralisar produção");
        }    
        if(p<f){
            printf("aceitavel");
        }    
        else{
            printf("ajustar produção");
        }
            break;
        
        default:
            printf("INVALIDO");
            break;
        
    }
    
        
   
    
   
    
}
