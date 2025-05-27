#include <stdio.h>
#include <ctype.h>

int main(){
    char letra;

    scanf("%c", &letra);
    printf("Leu %c ascii(%d) hexadecimal (%x) \n", letra, letra, letra);

    printf("resultado %d \n", isalpha(letra)); //funcao que diz 1 se é letra e 0 se não é.
    
    printf("trasnforma letra minuscula em maiuscula %c \n", toupper(letra));

    return 0;


    // https://www.tutorialspoint.com/c_standard_library/index.htm //
    // SITE QUE TEM AS BIBLIOTECAS DE C //
}