// Program ce izracunat volumen kocke.

#include<stdio.h>
#include <stdlib.h>

//Funkcija za izracunavanje volumena kocke.
float volumen(int duljina){
	
	float volumen;
	volumen=duljina*duljina*duljina;
	return volumen;
}

int main(){
   int duljina;
   printf("Unesi duljinu stranice :\n");
   scanf("%d",&duljina);
   float V=volumen(duljina);
   printf("Volumen kocke je %f\n",V);
   return 0;
}
