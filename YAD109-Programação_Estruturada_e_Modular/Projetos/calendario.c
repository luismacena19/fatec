#include<stdio.h>
#include<locale.h>
#include<stdbool.h>

int procurarLinha(int lineMatriz, int colMatriz, int Matriz[lineMatriz][colMatriz], int num)
{
	//Variáveis
	int col,line;

    for(col=0;col<colMatriz;col++)
		{
			for(line=0;line<lineMatriz;line++)
			{
				if(Matriz[line][col]==num) //Caso seja igual ao ano buscado
				{
                    return line;
				}
			}
		}
}//Fim da função procurarLinha

//Função principal
int main()
{
	//Calendário permanente de 1901 a 2092
	int A1[28][4]; //Anos de 1901 - 2000
	int A2[28][4]; //Anos de 2001 - 2092

	//Meses
	int B[28][12]=
	{{4,0,0,3,5,1,3,6,2,4,0,2},
	 {5,1,1,4,6,2,4,0,3,5,1,3},
	 {6,2,2,5,0,3,5,1,4,6,2,4},
	 {0,3,4,0,2,5,0,3,6,1,4,6},
	 {2,5,5,1,3,6,1,4,0,2,5,0},
	 {3,6,6,2,4,0,2,5,1,3,6,1},
	 {4,0,0,3,5,1,3,6,2,4,0,2},
	 {5,1,2,5,0,3,5,1,4,6,2,4},
	 {0,3,3,6,1,4,6,2,5,0,3,5},
	 {1,4,4,0,2,5,0,3,6,1,4,6},
	 {2,5,5,1,3,6,1,4,0,2,5,0},
	 {3,6,0,3,5,1,3,6,2,4,0,2},
	 {5,1,1,4,6,2,4,0,3,5,1,3},
	 {6,2,2,5,0,3,5,1,4,6,2,4},
	 {0,3,3,6,1,4,6,2,5,0,3,5},
	 {1,4,5,1,3,6,1,4,0,2,5,0},
	 {3,6,6,2,4,0,2,5,1,3,6,1},
	 {4,0,0,3,5,1,3,6,2,4,0,2},
	 {5,1,1,4,6,2,4,0,3,5,1,3},
	 {6,2,3,6,1,4,6,2,5,0,3,5},
	 {1,4,4,0,2,5,0,3,6,1,4,6},
	 {2,5,5,1,3,6,1,4,0,2,5,0},
	 {3,6,6,2,4,0,2,5,1,3,6,1},
	 {4,0,1,4,6,2,4,0,3,5,1,3},
	 {6,2,2,5,0,3,5,1,4,6,2,4},
	 {0,3,3,6,1,4,6,2,5,0,3,5},
	 {1,4,4,0,2,5,0,3,6,1,4,6},
	 {2,5,6,2,4,0,2,5,1,3,6,1}};

	//Dia da semama
	int C[7][6];


	int l,c,x;
	int dia, mes, ano, resposta, linha, restoAno;
	setlocale(LC_ALL, "Portuguese");
	bool error=false;

	//populando a tabela A1
	x=-3;
	for(c=0;c<4;c++)
		for(l=0;l<28;l++, x++)
			if(x<1) A1[l][c]=-1;
			else if(x<100) A1[l][c]=x;
			else if(x==100) A1[l][c]=0;
			else A1[l][c]=-1;

	//populando a tabela A2
	x=-19;
	for(c=0;c<4;c++)
		for(l=0;l<28;l++, x++)
			if(x<1) A2[l][c]=-1;
			else A2[l][c]=x;
	
	//populando a tabela C
	x=1;
	for(c=0;c<6;c++)
		for(l=0;l<7;l++, x++)
			if(x>37) C[l][c]=-1;
			else C[l][c]=x;

	do{
		printf("\nEntre com uma data no formato DD/MM/AAAA: ");
		scanf("%d/%d/%d", &dia, &mes, &ano);

		if(ano<1901 || ano>2092)
		{	
			//Exibe o erro de deve retornar para a coleta de dados
			printf("Erro!! O ano deve ser de 1901 a 2092.\n");
			error=true;
		}
			else
			{
				error=false;
			}
	}while(error);

    restoAno= ano%100;

    if(ano<=2000)
    {
        linha = procurarLinha(28,4,A1,restoAno);
    }
        else
        {
            linha = procurarLinha(28,4,A2,restoAno);
        }

	switch(procurarLinha(7,6,C,dia+B[linha][mes-1]))
	{
		case 0: //Domingo
			printf("O dia %d/%d/%d foi em um Domingo\n",dia, mes, ano);
			break;

		case 1: //Segunda-Feira
			printf("O dia %d/%d/%d foi em uma segunda-feira\n",dia, mes, ano);
			break;

		case 2: //Terça-Feira
			printf("O dia %d/%d/%d foi em uma terça-feira\n",dia, mes, ano);
			break;

		case 3: //Quarta-Feira
			printf("O dia %d/%d/%d foi em uma quarta-feira\n",dia, mes, ano);
			break;

		case 4: //Quinta-Feira
			printf("O dia %d/%d/%d foi em uma quinta-feira\n",dia, mes, ano);
			break;

		case 5: //Sexta-Feira
			printf("O dia %d/%d/%d foi em uma sexta-feira\n",dia, mes, ano);
			break;

		case 6: //Sabado
			printf("O dia %d/%d/%d foi em um sabado\n",dia, mes, ano);
			break;

		default:

			printf("ERRO");
			break;
	}
	return 0;
}
