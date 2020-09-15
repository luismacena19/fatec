#include <stdio.h>
#include <stdlib.h>

int caract(char c,char s[]) {
    if (s[0] == '\0')
	return 0;
    if (s[0]==c) return (1+caract(c,++s));
    return caract(c,++s);
}
int main(){

    char s[100],c;
    int tamanho = 0;
    
    printf("\nDigite uma string sem espaços: ");
    scanf("%s", &s);
    
    printf("\nDigite o  caractere a ser contado: ");
    scanf("%s", &c);
    
    tamanho = caract(c,s);
    printf("\nExistem %i ocorrências do caractere \"%c\" \n", tamanho,c);
    
    return 0;
}
