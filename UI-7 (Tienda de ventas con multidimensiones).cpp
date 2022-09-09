/*
Realizar programa que permita ingresar las ventas de 3 tienedas distintas.
//2 semestres al año.
//del uno al 10 en datos aleatorios
-Cada tienda tiene 3 empleados y las ventas se reportan de manera semestral
-identificar cual es la tienda con mayor monto de venta y en que semestre fue
-ventas de cada trabajador reporta un numero de ventas
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<iostream>
void llenar();
void mostrar();
void calculoDelSemestre1();
void calculoDelSemestre2();

int tienda[3][3][2], tam[3],tam2[3];

int main(){
	srand(time(NULL));
	printf("\n\t---------------------------------\n");
	printf("\t|\tInforme de ventas\t|");
	printf("\n\t---------------------------------\n");
	llenar();
	mostrar();
	calculoDelSemestre1();
	calculoDelSemestre2();
			
	return 0;
}
void llenar(){
	int i,j,k;
	for(i=0;i<6;i++){
		for (j=0;j<3;j++){
			for(k=0;k<2;k++){
				tienda[i][j][k]=rand()%10;
	 		}
   		}	
	}
}
void mostrar(){
	int i,j,k,a=0,b=0,c=0;
	a++;
	b++;
	c++;
	for (i=0;i<3;i++){
		printf("\nBodega Ahorrera %d:\n\n",c++);
		printf("\t|Semestre N#%d|\t\t|Semestre N#%d|\n",a=1,b=2);
		printf("\n");
		for(j=0;j<3;j++){
			for(k=0;k<2;k++){
			printf("\tEmpleado[%d][%d]= %d",j,k,tienda[i][j][k]);		
			}	
			printf("\n");
		}
	}
}

void calculoDelSemestre1(){
	int i,j,k,a=0,temp,tienda1,tienda2,tienda3;
	a++;
	for (i=0;i<3;i++){
		tam[i]=tienda[i][0][0]+tienda[i][1][0]+tienda[i][2][0];
		printf("-------------------------------------------------------\n");
		printf("Total del semestre N#1 de la Bodega Ahorrera %d: %d\n",a++,tam[i]);
	}
	//tiendas
	tienda1=tam[0];
	tienda2=tam[1];
	tienda3=tam[2];
	printf("-------------------------------------------------------\n");
	if(tam[2]==tienda2){
		printf("La Bodega Ahorrera con en menor ventas en su  semestre N#1 de ventas es la 1\n");
	}
	if(tam[2]==tienda1){
		printf("La Bodega Ahorrera con en menor ventas en su  semestre N#1 de ventas es la 2\n");
	}
	if(tam[2]==tienda3){
		printf("La Bodega Ahorrera con en menor ventas en su  semestre N#1 de ventas es la 3\n");
	}
	////////////////////////////////////////////////
	if(tam[0]==tienda2){
		printf("La Bodega Ahorrera con en mayor ventas en su  semestre N#1 de ventas es la 1\n");
	}
	if(tam[0]==tienda1){
		printf("La Bodega Ahorrera con en mayor ventas en su  semestre N#1 de ventas es la 2\n");
	}
	if(tam[0]==tienda3){
		printf("La Bodega Ahorrera con en mayor ventas en su  semestre N#1 de ventas es la 3\n");
	}
	//////////////////////////////////////////////////
	printf("-------------------------------------------------------\n");
	
}
void calculoDelSemestre2(){
	int i,j,k,a=0,temp,tienda1,tienda2,tienda3;
	a++;
	/////suma de valores
	for (i=0;i<3;i++){
		tam2[i]=tienda[i][0][1]+tienda[i][1][1]+tienda[i][2][1];
		printf("Total del semestre N#2 de la Bodega Ahorrera %d: %d\n",a++,tam2[i]);
	}
	tienda1=tam2[0];
	tienda2=tam2[1];
	tienda3=tam2[2];
	
		printf("-------------------------------------------------------\n");
	if(tam2[2]<tienda1){
		printf("La Bodega Ahorrera con en mayor ventas en su semestre N#2 de ventas es la 1\n");
	}else
	if(tam2[2]<tienda2){
		printf("La Bodega Ahorrera con en mayor ventas en su semestre N#2 de ventas es la 2\n");
	}else
	if(tam2[2]<tienda3){
		printf("La Bodega Ahorrera con en mayor ventas en su semestre N#2 de ventas es la 3\n");
	}
	
	////////////////////////////////////////////////////////////////////////
	if(tam2[0]>tienda1){
		printf("La Bodega Ahorrera con menor ventas en su semestre N#2 de ventas es la 1\n");
	}else
	if(tam2[0]>tienda2){
		printf("La Bodega Ahorrera con menor ventas en su semestre N#2 de ventas es la 2\n");
	}else
	if(tam2[0]>tienda3){
		printf("La Bodega Ahorrera con menor ventas en su semestre N#2 de ventas es la 3\n");
	}
	printf("-------------------------------------------------------\n");
}
/*
la ienda que mas vendio fue y en el semestre que se registro la venta
/*
	if(tam2[2]==tienda1<tam2[2]==tienda1){
		printf("La Bodega Ahorrera con en mayor ventas en su  semestre N#1 de ventas es la 1\n");
	}
	if(tam2[2]==tienda2<tam2[2]==tienda1){
		printf("La Bodega Ahorrera con en mayor ventas en su  semestre N#1 de ventas es la 2\n");
	}
	if(tam2[2]==tienda3<tam2[2]==tienda2){
		printf("La Bodega Ahorrera con en mayor ventas en su  semestre N#1 de ventas es la 3\n");
	}
	*/

