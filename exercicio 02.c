#include<stdio.h>

int main(){

    int salario;

    printf("Digite o seu salario:\n");
    scanf("%d", &salario);
    
    if(salario >= 1320){
        printf("seu salario está acima do salario minimo");
        printf("\nseu salario é de %d", salario);
    } 
    else{
        printf("seu salario esá abaixo do salario minimo");
    }
    
}