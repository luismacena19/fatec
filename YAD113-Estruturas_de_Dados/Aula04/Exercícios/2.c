#include <stdio.h>
#include <stdlib.h>

int tamanho(char s[]){
	if(s[0] == '\0')
	return 0;
	return 1+tamanho(&s[1]);
}

int main(){

	char s[100];
	int size = 0;
	
	printf("\nDigite uma string sem espaços: \n");
	scanf("%s", s);
	
	size = tamanho(s);
	
	printf("\nA string tem tamanho = %i\n", size);

	return 0;
}