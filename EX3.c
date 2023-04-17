/******************************************************************************
Kaue Henrique Ra:8136527  
*******************************************************************************/
#include <stdio.h>

float area(int raio){
    return (raio * raio) * 3.14;
}

void main(){
    int raio;
    printf("Digite o valor do raio: \n");
    scanf("%d", &raio);

    printf("A area do circulo e %.2f\n", area(raio));
}
