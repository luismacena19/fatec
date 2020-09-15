#include <stdio.h>
#include <stdlib.h>

int eleva(int x, int y){
	if(y == 0)
		return 1;
	if(y == 1)
		return x;
	return x * eleva(x,y-1);
}

int main(void){
	int x, y, resultado;

	printf("\nExponencial de x elevado a y\n");
	printf("\nDigite um número inteiro x:");
	scanf("%i", &x);
	
	printf("\nDigite um número inteiro y:");
	scanf("%i", &y);

	resultado = eleva(x,y);
	printf("\n%i elevado a %i =  %i\n", x, y, resultado);
		
	return 0;
}
