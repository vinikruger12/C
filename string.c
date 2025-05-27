#include <stdio.h>
#include <string.h>

int main(){
    char nome[100];
    int indice;
    scanf("%[^\n]s", nome); // nao precisa do &
    printf("Esse é o meu nome: %s \n", nome);
    strcpy(nome, "Vinicius Kruger"); // troca o valor da sring por

    printf("Meu novo nome é %s \n", nome);

    printf("O tamanho do meu nome é: %i \n", strlen(nome));
    
    for(indice = 0;indice < strlen(nome);indice++){
        printf("A %i º letra é: ", (indice+1));
        printf("%c \n", nome[indice]);
    }

     for(indice = 0;indice < strlen(nome);indice++){
        if(nome[indice] == 'a' || nome[indice] == 'e' ||nome[indice] == 'a' || nome[indice] == 'e')
    }

    



}