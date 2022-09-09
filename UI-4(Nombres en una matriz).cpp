/*0
Matriz en donde se almacene un nombre
10 nombre 
44 columnas
determinar el nombre mas largo.
determinar el mas chico
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int llenar_nombre(char nombre[10][25]);
int orden(char nombre[10][25], int tam[10]);
int mostrar_nombre(char nombre[10][25]);
char nombre[10][25];
int tam[10];
main(){
	printf("-------------------------------------------------\n");
	printf("|\tLlenar arrglo bidimensional\t\t|\n");
	printf("-------------------------------------------------\n");
	llenar_nombre(nombre);
	orden(nombre,tam);
	printf("---------------------------------\n");
	printf("|\tMostrar nombres\t\t|\n");
	printf("---------------------------------\n");
	mostrar_nombre(nombre);
	return 0;
}
int llenar_nombre(char nombre[10][25]){//cambiarlo por [10] y [44]
	int fil;
	for(fil=0;fil<10;fil++){
		printf("Ingrese nombre [%d]",fil+1);
		gets(nombre[fil]);
	}
}

int orden(char nombre[10][25], int tam[10]){
	int fil,col,temp,i,j;
		for(i=0;i<10;i++){
			tam[i]=strlen(nombre[i]);
		}
	for(i=0;i<9;i++){
		for(j=i+1;j<10;j++){
			if(tam[j]<tam[i]){
				temp=tam[j];
				tam[j]=tam[i];
				tam[i]=temp;
			}
		}
	}
}

int  mostrar_nombre(char nombre[10][25]){
	int i,a,b,c;
	for(i=0;i<10;i++){
		a=strlen(nombre[i]);
		b=tam[0];
		c=tam[9];
		if(c==a){
			printf("\nEl nombre mas grande es: %s\n",nombre[i]);
		}
		if(b==a){
			printf("\nEl nombre mas corto es: %s",nombre[i]);
		}
	}
}
