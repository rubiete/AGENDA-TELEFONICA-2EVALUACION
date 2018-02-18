#include<fstream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
 int medida(char aux[]){
    int l=0;
    while(aux[l]!='\0'){
            l++;
            }
    return l;
}
 int main(){
     char aux[15];
     int amigos,salir,l;     
     printf("¿Cuantos amigos deseas agregar a tu agenda?: ");
     scanf("%i",amigos);
     int matriztlfn[amigos];
     char *matriznombre[amigos];
     for (int cont=0;cont<amigos;cont++){
         printf("\nNombre de tu amigo: ");
         scanf("%s",aux);
         l=medida(aux);
         matriznombre[cont]=(char *) malloc(l*sizeof(char));
         strcpy(matriznombre[cont],aux);
         printf("Telefono de tu amigo: ");
         scanf("%i",matriztlfn[cont]);
         printf("%s",matriznombre[cont]);
         printf("%i",matriztlfn[cont]);
         }
     /*for (int cont=0;cont<amigos;cont++){
         printf("%s",*matriznombre[cont]);
         printf("%i",matriztlfn[cont]);
         }*/
     scanf("%i",salir);
 }
