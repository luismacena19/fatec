#include <stdio.h>
#include <stdlib.h>

int tamstring(char s[]){
	if(s[0] == '\0')
	return 0;
	return 1+tamstring(&s[1]);
}

int main(){

	char s[100];
	int tamanho = 0;
	
	printf("\nDigite uma string sem espaços: ");
	scanf("%s", s);
	
	tamanho = tamstring(s);
	
	printf("\nA string tem tamanho = %i\n", tamanho);

	return 0;
}
