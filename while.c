/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int idade, cont=0;
   float alt, media, somalt=0;
   
   printf("Digite a idade: ");
   scanf("%d", &idade);
   
   while (idade!=0){
       printf("Digite a altura: ");
       scanf("%f", &alt);
       if(idade>50){
           somalt = somalt + alt;  //acumulador
           cont = cont + 1;  //contador
       }
        printf("Digite a idade: ");
        scanf("%d", &idade);
   }
   media = somalt/cont;
   printf("Quantidade de pessoas com mais de 50 anos: %d \nA media das alturas das pessoas com mais de 50 anos é: %.2f", cont, media);
}

