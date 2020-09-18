#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool allowMatch(int cpf[]){
	
	int i,j,k = 0;
    bool b = true;
	int vetor[10][11] = {{0,0,0,0,0,0,0,0,0,0,0},
						 {1,1,1,1,1,1,1,1,1,1,1},
						 {2,2,2,2,2,2,2,2,2,2,2},
						 {3,3,3,3,3,3,3,3,3,3,3},
						 {4,4,4,4,4,4,4,4,4,4,4},
						 {5,5,5,5,5,5,5,5,5,5,5},
						 {6,6,6,6,6,6,6,6,6,6,6},
						 {7,7,7,7,7,7,7,7,7,7,7},
						 {8,8,8,8,8,8,8,8,8,8,8},
						 {9,9,9,9,9,9,9,9,9,9,9}};
    
	for(i=0; i < 10; i++){

	    for(j=0; j < 11 ; j++){

	       if(cpf[j] == vetor[i][j])
	       k++;
	   	   if (k == 11) b = false;

	    } 
		k = 0;
	} 
	return b;
}

bool verificaDigito(int cpf[], int mult){

	int i, soma=0, N = mult-1;
    for(i=0; i<N; i++, mult--)
        soma = soma + cpf[i]*mult;
    
    int resto = ((soma*10) % 11)%10;

    return resto == cpf[N];
}

int main(){
    int cpf[11];
    int i;

    printf("Entre com os 11 digitos do CPF:\n");
    for(i=0;i<11;i++){
        scanf("%d", &cpf[i]);
    }
    if(verificaDigito(cpf, 10) && verificaDigito(cpf, 11) && (allowMatch(cpf)))
        printf("\nCPF válido.\n");
    else printf("\nErro no CPF.\n");
    
    return 0;
}

