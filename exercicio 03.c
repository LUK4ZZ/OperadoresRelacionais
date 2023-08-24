#include<stdio.h>

int main(){

    int altura;

    printf("Digite aqui sua altura:\n");
    scanf("%d", &altura);

    if(altura >= 1.8){
        printf("voce é grande parabens");
    }
    else{
        printf("voce é pequeno que triste");
    }

}