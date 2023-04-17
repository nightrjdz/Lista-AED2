/******************************************************************************
Kaue Henrique Ra:8136527   
*******************************************************************************/
#include <stdio.h>
#include <ctype.h>
char caracter(int a){
   if (isalpha(a) == 0){
       printf("Nao esta entre a e z");
   }else{
       printf("Esta entre a e z");
   }
}

void main(){
    char a;
    printf("Digite um caracter: \n");
    scanf("%c", &a);

    caracter(a);
}

