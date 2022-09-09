//Librerias
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<iostream>
//metodos
int matrizDeNombres1(char nombre [5][25]);
//int matrizDeMaterias2(char materia[5][15]);
int matrizDeCalificaciones3(float calificaciones[5][15], char nombre [5][25]);
int rango4(float calificaciones[5][15], char nombre [5][25], float tam[5]);
int  salida5(char nombre [5] [25]);
//variables
float calificaciones [5][15], tam[5];
char nombre[5][25];

int main(){
	srand(time(NULL));
	matrizDeNombres1(nombre);
	//materia
//	matrizDeMaterias2(materia);
	printf("\n-----------------------------------------------------------------------------------------------------------------\n");
	printf("|      \tNombre completo\t        |  Programacion |    Redes      |     Etica     |    Estadias   |   Calculo     |");
	printf("\n-----------------------------------------------------------------------------------------------------------------\n");
	matrizDeCalificaciones3(calificaciones,nombre);
	rango4(calificaciones,nombre,tam);
	printf("-------------------------------\n");
	salida5(nombre);
	printf("\n");
	printf("\n");
	system("\tPAUSE");
	return 0;
}
//1
int matrizDeNombres1(char nombre [5][25]){
	int fil;
	printf("---------------------------------------------\n");
	printf("|Ingresa los nombres completos de los alumno| \n");
	printf("---------------------------------------------\n");
	for(fil=0;fil<5;fil++){
		gets(nombre[fil]);
	}
	system("cls");
}
//3
int matrizDeCalificaciones3(float calificaciones[5][15], char nombre [5][25]){
	
	for(int fil=0;fil<5;fil++){
		for(int col=0;col<5;col++){
			calificaciones[fil][col]=rand()%10;
		}
	}
	int fil,col,i,a=-1;
	for(fil=0;fil<5;fil++){
		printf("%s\t",nombre [fil]);
		for(col=0;col<5;col++){
			printf("\t|\t%0.2f   ",calificaciones[fil][col]);
		}
		printf(" |");
		printf("\n");
		printf("-----------------------------------------------------------------------------------------------------------------\n");
	}
}
//4
int rango4(float calificaciones[5][15], char nombre [5][25], float extra[5]){
	int i,aux,j;
	int a,b,c,o,d,e,f,g,h;
	//asignacion en diferentes partes de la matriz
	for(i=0;i<5;i++){
		tam[i]=calificaciones[i][0]+calificaciones[i][1]+calificaciones[i][2]+calificaciones[i][3]+calificaciones[i][4];
	}
	//acomodar
	for (i = 0; i <5; i++) { 
		for (j = i + 1; j <5; j++){ 
			if (tam[j] < tam[i]) { 
				aux = tam[j]; 
				tam[j] = tam[i]; 
				tam[i] = aux; 
			} 
		} 
	}
	//obtencion de la persona con mayor promedio
	for(i=0;i<5;i++){
		a=calificaciones[i][0]+calificaciones[i][1]+calificaciones[i][2]+calificaciones[i][3]+calificaciones[i][4];
		b=extra[0];
		c=extra[4];
		if(c==a){
			printf("-El promedio mas alto lo tiene: %s.\n",nombre[i]);
		}
		if(b==a){
			printf("-El promedio mas bajo lo tiene: %s.\n",nombre[i]);
		}
	}	
}
//5
int salida5(char nom [5] [25]){
	int i,temp,j;
	int a,b,c,programacion,redes,etica,estadias,calculoDif;
	//asignacion en ciertas partes de la matriz
	for(i=0;i<5;i++){
		tam[i]=calificaciones[0][i]+calificaciones[1][i]+calificaciones[2][i]+calificaciones[3][i]+calificaciones[4][i];
		
	}
	//materias.
	programacion=tam[0];
	redes=tam[1];
	etica=tam[2];
	estadias=tam[3];
	calculoDif=tam[4];
	//comparacion de ordenamiento
	for (i = 0; i <5; i++){ 
		for (j = i + 1; j <5; j++){ 
			if (tam[j] < tam[i]){ 
				temp = tam[j]; 
				tam[j] = tam[i]; 
				tam[i] = temp; 
			} 
		} 
	} 
	
	//cuando es mayor
	if(tam[4]==programacion){
		printf(">La materia con el promedio mas alto es: Programacion.\n");
	}
	if(tam[4]==redes){
		printf(">La materia con el promedio mas alto es: Redes.\n");
	}
	if(tam[4]==etica){
		printf(">La materia con el promedio mas alto es: Etica.\n");
	}
	if(tam[4]==estadias){
		printf(">La materia con el promedio mas alto es: Estadias.\n");
	}
	if(tam[4]==calculoDif){
		printf(">La materia con el promedio mas alto es: Calculo diferencial.\n");
	}
	//cuando es menor
	if(tam[0]==programacion){
		printf(">La materia con el promedio mas bajo es: Programacion.\n");
	}
	if(tam[0]==redes){
		printf(">La materia con el promedio mas bajo es: Redes.\n");
	}
	if(tam[0]==etica){
		printf(">La materia con el promedio mas bajo es: Etica.\n");
	}
	if(tam[0]==estadias){
		printf(">La materia con el promedio mas bajo es: Estadias. \n");
	}
	if(tam[0]==calculoDif){
		printf(">La materia con el promedio mas bajo es: Calculo diferencial.\n");
	}
}

