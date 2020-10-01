#include <stdio.h>
#include <stdlib.h>

void bubble (int v[], int n) {
  int i, j, aux;
  for (i=1; i<n; i++) {
    for (j=0; j<n-i; j++) {
      if (v[j] > v[j+1]) {
        aux = v[j];
        v[j] = v[j+1];
        v[j+1] = aux;
      }
    }
  }
}

int buscaInt(int c, int n, int * v){
	int meio, cmp, ini=0;
	int fim=n-1;
	while (ini <= fim) {
		meio=(ini+fim)/2;
		cmp = compInt(c,v[meio]);
		if (cmp < 0) {
			fim=meio-1;
		} else {
			if (cmp > 0) {
				ini=meio+1;
			} else {
				return meio;
			}
		} 
	}
   return -1;
}


int compInt(int c, int b)
{
	if (c < b)
		return -1;
	else if (c > b)
		return 1;
	else
	return 0;
}

int main() {
	 int t[] = {2,4,45,7,9,11,16,27,42,5,50};
	 int tamanho = sizeof(t)/sizeof(int);
	 bubble (t, tamanho);
	 int pos = buscaInt(5, tamanho, t);
	if(pos==-1){
		printf("nao encontrado !");
	} else {
		printf("Pos=%i, valor=%i \n", pos, t[pos]);
	}
	return 0;
}
