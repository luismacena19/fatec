#include <stdio.h>

int tamanho(char string[]){
	if(string[0] == '\0')
	return 0;
	return 1+tamanho(&string[1]);
}

int main(){

	char string[100];
	int size = 0;
	
	printf("\nDigite uma string sem espaços: \n");
	scanf("%s", string);
	
	size = tamanho(string);
	
	printf("\nA string tem tamanho = %i\n", size);

	return 0;
}