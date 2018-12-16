/*#include <stdlib.h>
#include <string.h>
#include <stdio.h>*/

void alrevez(char *mensaje){
  char auxiliar[strlen(mensaje)];
  int i;
  for(i=0;i<strlen(mensaje);i++){
    auxiliar[i]=*(mensaje+i);
  }
  auxiliar[i]='\0';
  for(i=0;i<strlen(mensaje);i++){
    *(mensaje+i)=auxiliar[(strlen(mensaje)-i)-1];
  }
  //*(mensaje)
}

/*int main(int argc, char const *argv[]) {*/
  /* code */
  /*char mensaje[]="Hola que hace";
  //char *puntero=mensaje;
  alrevez(mensaje);
  printf("%s\n",mensaje );
  return 0;
}*/
