#include<stdio.h>
#include <stdlib.h> //libreria para usar getchar()
int main(int argc, char * argv[]){
	float monto,porc,total;
	char incial;
	//se solicita otra información.
	printf ("Ingresa la incial de tu nombre: \n");
	incial=getchar(); //sustituye una variable de caracter al asignar el tipo de variable a usar.
	
	//se lleva acabo otro proceso
	 printf("Ingresa el monto\n");
	scanf("%f",&monto); 
	
	printf("Ingresa el porcentaje de descuento\n");
	scanf("%f",&porc);
	
	total =  monto-(monto*(porc/100));
	
	//se agrego otra variable
	printf("%c : el total : %.2f \n",incial,total);
	
	//printf("%c : el total es: %.2f",inicial,total);
	
	return 0;
}
