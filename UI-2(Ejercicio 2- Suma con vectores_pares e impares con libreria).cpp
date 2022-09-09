#include<stdio.h>
#include<stdlib.h>
//funciones
int arre_datos(int arre[10]);
int mostrar_datos(int arre[10]);
int suma_datos(int arre[10],int arre1[10]);
int salida_datos(int arre[10]);
//variables
int arre[10],arre2[10],arre3[10];
int main(){
	arre_datos(arre);
	arre_datos(arre2);
	mostrar_datos(arre);
	mostrar_datos(arre2);
	suma_datos(arre,arre2);
//	mostrar_datos(arre3);
	return 0;
}
//---------------LLENAR VECTOR----------------//
int arre_datos(int arre[10]){
	int i,j,par=0,impar=0,pares[10],impares[10],a,num;
	
	j=0;
	a++;
	printf("-------------------------------------------------------\n");
	printf("|\t\t\tArreglo [%d]\t\t\t|\n",a);
	printf("-------------------------------------------------------\n");
	for(i=0;i<10;i++){
	j++;		
		printf("Ingrese valores para llenar el vector [%d] y  Posicion[%d]: %d",arre[i],j,arre[i]=rand()%10);
		printf("\n");
	}
}
//sumar datos
int suma_datos(int arre[10],int arre2[10]){
	for(int i=0;i<10;i++){
		arre3 [i]=arre2[i]+arre[i];
		/*printf("[%d]+ [%d] = %d\n",arre[i],arre2[i],arre3[i]);*/
	}
}
//salida
int mostrar_datos(int arre[10]){
	printf("\n-------------Salida de la suma de los vectores-------------\n");
	for(int i=0;i<10;i++){
	printf("La suma de datos en la casilla [%d]= %d \n",i,arre[i]);
	}
}
