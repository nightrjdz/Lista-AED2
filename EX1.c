/******************************************************************************
Kaue Henrique Ra:8136527  
*******************************************************************************/

#include <stdio.h>

int diferenca(int a, int b){
    if (a > b){
        return a-b;

    }else{
        return b-a;
    }
}

void main(){
    int a, b;
    printf("Digite dois valores inteiros: \n");
    scanf("%d%d", &a, &b);

    printf("A diferenca dos dois numeros e %d\n", diferenca(a, b));
}
