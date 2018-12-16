/*include <stdlib.h>
#include <string.h>
#include <stdio.h>*/

void alrev(char *mensaje,int inicio){
  int i,j=0;
  char copia[3];
  for(i=inicio;i<inicio+3;i++){
    copia[j]=*(mensaje+i);
    j++;
  }
  j=0;
  for(i=inicio;i<inicio+3;i++){
    *(mensaje+i)=copia[2-j];
    j++;
  }
}

void alrv(char *mensaje){
  int veces=strlen(mensaje)/3;
  int indice=0;
  for(int j=0;j<veces;j++){
    alrev(mensaje,indice);
    indice=indice+3;
  }
}

/*int main(int argc, char const *argv[]) {*/
  /* code */
  /*char mensaje[]="hola que hace";
  alrv(mensaje);
  printf("%s\n",mensaje );
  return 0;
}*/
