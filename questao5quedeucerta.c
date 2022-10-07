#include <stdio.h>

int main()
{

    int n, x;
    float h;
    
 printf("Insira um numero:\n ");
 scanf("%d", &n); 
    
    
    
    for( x=1; x<=n; x++){
        
        
        
        h = 1.0/x;

        
    // 1/2 + 1/3 + 1/4... 1/n 
    
     printf("resultado de h é: %.2f\n", h );
        
    }
    
    
    
    return 0;
    
    
    
}
