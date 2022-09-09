/*
identificae de una mariz 4x4 donde la fila sea < que la columna//07/sep/2022 *3
promediar los datos los datos que se encuentren en la fila par y una columna impar
															if &
										promedio entre las 2, que seram 2(1,3)
identificae de una mariz 4x4 donde la fila sea < que la columna//07/sep/2022 *3
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void llenar();
void most_data();
void select();
int numeros[4][4];
void pares();

int main(){
	printf("---------------------------------\n");
	printf("|\tLlenar matriz\t\t|\n");
	printf("---------------------------------\n");
	llenar();
	printf("---------------------------------\n");
	printf("|\tMostrar datos\t\t|\n");
	printf("---------------------------------\n");
	most_data();
	select();
	pares();
	return 0;
}
void llenar(){
	for(int fil=0;fil<4;fil++){//itera las filas
		for(int col=0;col<4;col++){//itera las columnas 
			printf("[%d] [%d]: %d\n",fil,col,rand()%10);//rand()%100
			numeros[fil][col]=rand()%13;//asignas los valores aleatorios para ingresarlos en la matriz
		}
		printf("\n");//formato de impresion	
	}
}

void most_data(){
	int fil,col,a=-1;
	//formato de impresion
	for(int a=0;a<4;a++){
	printf("  %d\t",a);
	}
	printf("\n");
	for(fil=0;fil<4;fil++){
		a++;//numero del costado izquierdo
		printf("%d",a);
		for(col=0;col<4;col++){
			printf("|%d \t",numeros[fil][col]);
		}
		printf("\n");
	}
}

void select(){
	int fil,col;
	for(fil=0;fil<4;fil++){
		for(col=0;col<4;col++){
			if(numeros[fil]<numeros[col]){//seleccion de datos especiales
				printf("[%d]",numeros[fil][col]);//muestra los datos que fueron seleccionados
			}
		}
		printf("\n");
	}
}
void pares(){
	int fil,col,aux;
	float a,b=0,prom;
	for(fil=1;fil<4;fil++){
		aux=0;
		for(col=0;col<4;col++){
			if(fil%2==0 && col%2==1){//identificado valores
			a++;//cuenta las veces que encuentra un dato o al iniciar a buscar
			b+=numeros[fil][col];
			
			}
		}
		printf("\n");
	}
	prom=b/a;
	printf("El promedio de los datos [FILA PAR] [COL IMPAR] es: %f",prom);//promedio obtener
}
