#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

  char nome[100][100],temp[100];
  int n,i,j;

  printf("Digite o  número de strings a serem ordenadas:\n");
  scanf("%d",&n);
  for(i=0;i<=n;i++){
    
    fgets(nome[i], sizeof nome, stdin);
    printf("Digite a string %d :",i + 1);
  }
  for(i=1;i<=n;i++){
    for(j=0;j<=n-i;j++){
      if(strcmp(nome[j],nome[j+1])>0){
        strcpy(temp,nome[j]);
        strcpy(nome[j],nome[j+1]);
        strcpy(nome[j+1],temp);
      }
    }
  }

  printf("Strings ordenadas em ordem Alfabética :");
  
  for(i=0;i<=n;i++){
    printf("%s",nome[i]);
  }
  
 return 0;

}