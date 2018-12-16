/*#include <stdlib.h>
#include <string.h>
#include <stdio.h>*/
/*typedef int bool;
#define true 1
#define false 0*/

int esMinuscula(char caracter){
  if(caracter >= 'a' && caracter <= 'z')
    return 1;
  return 0;
}

int esMayuscula(char caracter){
  if (caracter >= 'A' && caracter <= 'Z')
    return 1;
  return 0;
}

int esCaracterPermitido(char caracter){
  if(esMinuscula(caracter)==1 || esMayuscula(caracter)==1)
    return 1;
  return 0;
}

char desplaza(char caracter,int desplazamiento){
  if(!esCaracterPermitido(caracter)==1)
    return caracter;
  int diferencia=0;
  //int alfabeto
  if(esMinuscula(caracter)==1){
    if((caracter+desplazamiento)<='z'){
      return (char)caracter+desplazamiento;
    }
    diferencia=(((caracter+desplazamiento)-'z')%26)-1;
    return 'a'+diferencia;
  }
  //if(esMayuscula(caracter)){
    if((caracter+desplazamiento)<='Z'){
      return caracter+desplazamiento;
    }
    diferencia=(((caracter+desplazamiento)-'Z')%26)-1;
    return 'A'+diferencia;
  //}
}

void cesar(char *mensaje,int desplazamiento){
  int i;
  for(i=0;i<strlen(mensaje);i++){
    *(mensaje+i)=desplaza(*(mensaje+i),desplazamiento);
  }
  *(mensaje+i)='\0';
}

/*int main(int argc, char const *argv[]) {
  char vector[]="mensaje AZ cifrarz";
  cesar(vector,2);
  printf("%s\n",vector );
  return 0;
}*/
