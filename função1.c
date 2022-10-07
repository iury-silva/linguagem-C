/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

float peso (float alt, char sex);

int main(void)
{

    
    float altura, resultado;
    char sexo;
    
    
    printf ("Informe qual é sua altura");
    scanf ("%f", &altura);
    
    printf ("Informe o sexo - M para masculino e F para feminino: ");
    scanf ("%s", &sexo);
    
            
    resultado = peso (altura, sexo);
    
    printf("\nSeu peso ideal é: %f", resultado);        
    
    
}


float peso (float alt, char sex){
    
    float peso_ideal;
    
    
    if(sex =='F')
        peso_ideal = (62.1*alt)-44.7;
        else
            peso_ideal = (72.7*alt)-58;
              
    return peso_ideal;
    
    }