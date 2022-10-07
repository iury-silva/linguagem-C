#include <stdio.h>

float novosal (float sal); //protótipo da função

int main() {
   
    float salario, Resultado;
    
    printf("informe seu salario");
    scanf("%f", &salario);
    
   Resultado = nsal(salario);
   
    printf("seu novo salario ficou: %f", Resultado);
    
    
}

 float novosal (float sal){
     
     float nsal;
     
     if(sal<300)
        nsal = (sal*0.15)+sal;
        
        else 
         nsal = (sal*0.35) + sal;
         
    return nsal; }
     
     
 