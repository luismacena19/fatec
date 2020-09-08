#include <stdio.h>
#include <stdlib.h>

double fdeposito(double operador,double *valor){
				*valor += operador;
				printf("\nSeu saldo atual e de: R$ %.2f\n", *valor);
 	}
double fsaque(double operador,double *valor){
		if (*valor < operador){
			printf("\nSaldo indisponivel para saldo. Saldo atual é de:R$ %.2f\n", *valor);
		}
		else{
			*valor = *valor - operador;
			printf("\nSeu saldo atual é de:R$ %.2f\n", *valor);
		}
 	} 	
int main() {


	int op = 0, cont = 0;
	double saldo = 1000,  deposito = 0, saque = 0;
	double *psaldo;
	psaldo = &saldo;
	
	do{
		printf("\nSelecione uma das seguintes opções: \n 1 - Consultar Saldo \n 2 - Realizar Saque \n 3 - Realizar Deposito \n");
		printf("\nOpção: ");
		scanf("%d", &op);
		
		switch(op){
			case 1 : {
				printf("\nSeu saldo atual é de:\nR$ %.2f\n", *psaldo);
				break;
			}
			case 2 : {
				printf("\nDigite o valor do saque: ");
				scanf("%lf", &saque);
				fsaque(saque, &saldo);
				break;
			}
			case 3 : {
				printf("\nDigite o valor do deposito: ");
				scanf("%lf", &deposito);
				fdeposito(deposito,&saldo);
				break;
			}
			default : {
				printf("\nOpção inválida!\n");
			}			
		}
		printf("\nDeseja continuar? 1-SIM 0-NAO: \n");
		scanf("%d", &cont);	
		
	} while(cont == 1);
	return 0;
}

