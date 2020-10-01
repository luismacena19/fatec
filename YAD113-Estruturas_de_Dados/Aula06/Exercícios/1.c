#include <stdio.h>
#include <stdlib.h>

int buscaRecursiva(int vet[], int N, int indiceInicio , int procurado)
	{	
		if(indiceInicio >= N) 
			return -1;  //não achei de jeito nenhum!
			
		if(vet[indiceInicio] == procurado) 
			return indiceInicio;  //achei!
			
		return buscaRecursiva(vet, N, indiceInicio + 1, procurado);
	}


int main(int argc, char *argv[]) {
	int vet[] = {3,5,7,1,13,1,27,6,17,23};
	int n =  sizeof(vet)/sizeof(int);
	int pos = buscaRecursiva(vet, n, 0, 27);
	if(pos==-1){
		printf("nao encontrado !");
	} else {
		printf("Pos=%i, valor=%i \n", pos, vet[pos]);
	}
	return 0;
}