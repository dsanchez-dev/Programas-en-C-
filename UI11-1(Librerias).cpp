#include<stdio.h>
#include<operadores.h>
int main(){
	int a,b;
	//ingreso de datos. 
	printf("Ingrese el primer valor numerico: ");
	scanf("%d",&a);
	printf("Ingrese el segundo valor numerico: ");
	scanf("%d",&b);
	//-----------------------------//FUNCIONES IDENTIFICADORES DE UN NUMERO.//-----------------------------//
	//suma y resta de numeros
	printf("\nResultado de la suma de: %d + %d = %d\n",a,b,suma(a,b));
	printf("\nResultado de la resta de: %d - %d = %d\n",a,b,resta(a,b));
	//////Factores de divisores.
	printf("\nFactores divisores: %d y %d\n",a,b,factores(a,b));
	/////divisores de numeros
	printf("\nLa suma de divisores de: %d es: %d\n",a,sumaDiv2(a));
	printf("\nLa suma de divisores de: %d es: %d\n",b,sumaDiv2(b)) ;
	//comparacion de numeros
	printf("\n \n",a,b,compara(a,b));
	////numero perfecto
	printf("\n \n",a,numPerf(a));
	printf("\n \n",b,numPerf2(b));
	////numero par
	printf("\n \n",a,numPar(a));
	printf("\n \n",b,numPar2(b));
	////numeros impar
	printf("\n \n",a,numImpar(a));
	printf("\n \n",b,numImpar(b));
	//////numeros primos
	printf("\n \n",a,primo(a));
	printf("\n \n",b,primo2(b));
	//////Numeros capicua
	printf("\n \n",a,capicua(a));
	printf("\n \n",b,capicua2(b));
	
	return 0;
}

/*
ARREGLOS 
MANEJO DE ARCHIVOS
*/
