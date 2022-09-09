/*Diseñar un programa de potencia */
#include<stdio.h>
#include<math.h>
int poteciaN(int base, int potencia);
int poteciaRe(int base, int potencia);

main(){
	int num, exp,a;
	printf("Ingresa el numero y despues la potencia: ");
scanf("%d%d",&num,&exp);
	poteciaN(num,exp);
	a=poteciaRe(num,exp);
	return 0;
}
////////////////////////////////////////////
int poteciaN(int base, int potencia){
	int acum;
	acum=1;
	for(int i=1;i<=potencia;i++){
        acum = acum * base;
    }
    printf("\n%d * %d = %d\n",base,potencia,acum);
    printf("\nEl resultado es: %d\n",acum);
	return 0;
}
///////////////////////////////////////////
int poteciaRe(int base, int potencia){
	int aux;
	if(base<=0){
		printf("El resultado es 1.");
		return 1;
	}else{
		return base * poteciaRe(base, potencia - 1);
	}
}
