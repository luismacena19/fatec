#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
    int n, i,item;
    char *temp;
    char *nome[100];

    printf("Digite o  número de strings a serem ordenadas:\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Digite a string %d :",i + 1);
        nome[i] = (char *) malloc(101 * sizeof(char));
        scanf(" %s", nome[i]);
    }

     for (item = 1; item < n; item++) {
        temp = nome[item];

        for (i = item; i > 0 && strcmp(nome[i - 1], temp) > 0; i--);{
            memcpy(&nome[i + 1], &nome[i], (item - i) * sizeof(char *));
        }
        nome[i] = temp;
    }
    printf("Strings ordenadas em ordem Alfabética :\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", nome[i]);
        
    }

    return 0;
}
