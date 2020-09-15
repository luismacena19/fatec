#include <stdio.h>
#include <stdlib.h>

void reverse(char s[]) {
    if (s[0] != '\0') {
        reverse(&s[1]);
        printf("%c",s[0]);
    }
}

int main(){
    
    char s[100],c;
    int t;
    
    printf("\nDigite uma string sem espaço a ser revertida: ");
    scanf("%s",&s);
    printf("\nO reverso de %s, é ", s);
    reverse(s);
    printf("\n");
    return 0;
}
