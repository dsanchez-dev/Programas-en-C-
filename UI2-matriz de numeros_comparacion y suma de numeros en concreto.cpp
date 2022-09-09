/*
07/septiembre/2022
Programa que lea una matriz de datos enteros 5x5, 
el programa debera identificar el valor mas alto de cada columna identificar
el valor mas alto de cada columna y identifcar el valor mas alto de cada columna 
y indicar la posicion de fila y columna, tambien
identificar el dato menor de cada fila, asi como tambien el promedio de los datos mayores.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void datos_arre();
void most_data();
void valores();
void mayor();
void comp();
void determina();

int numeros[5][5];

//////variables

int main(){
	printf("---------------------------------\n");
	printf("|\tLlenar matriz\t\t|\n");
	printf("---------------------------------\n");
	datos_arre();
	printf("---------------------------------\n");
	printf("|\tMostrar datos\t\t|\n");
	printf("---------------------------------\n");
	most_data();	
	printf("---------------------------------\n");
	printf("|\tComparacion de datos\t|\n");
	printf("---------------------------------\n");
	valores();
	printf("\n---------------------------------\n");
	printf("|\tDato mayor\t\t|\n");
	printf("---------------------------------\n");
	mayor();
	printf("\n---------------------------------\n");
	printf("|\tDatos mayores/promedio\t|\n");
	printf("---------------------------------\n");
	comp();
	determina();
	
	return 0;
}

void datos_arre(){
	for(int fil=0;fil<5;fil++){//itera las filas
		for(int col=0;col<5;col++){//itera las columnas 
			printf("[%d] [%d]: %d\n",fil,col,rand()%10);//rand()%100
			numeros[fil][col]=rand()%100;//asignas los valores aleatorios para ingresarlos en la matriz
		}
		printf("\n");//formato de impresion
	}
}

void most_data(){
	int fil,col,a=-1;
	//formato de impresion
	for(int a=0;a<5;a++){
	printf("  %d\t",a);
	}
	printf("\n");
	for(fil=0;fil<5;fil++){
		a++;//numero del costado izquierdo
		printf("%d",a);
		for(col=0;col<5;col++){
			printf("|%d \t",numeros[fil][col]);
		}
		printf("\n");
	}
}

void valores(){//por filas
	int fil,col,aux1=0,aux2=0,alt1,alt2,alter1,alter2,mat1[5],mat2,res=0,prom,j;
	
	for(fil=0;fil<5;fil++){
		for(col=0;col<5;col++){
			aux1=0;
		if(numeros[fil][col]>aux1){
			aux1=numeros[fil][col];
			alt1=fil;//posiciones
			alt2=col;
		}
	  }		
		printf("\n");///formato
		aux2=0;
		if(numeros[fil][col]>aux2){
			aux2=numeros[fil][col];
			alter1=fil;//posiciones
			alter2=col;//posiciones
		}///numeros grandes	
	//ubicados en cada columna para realizar el promedio
	printf("\nEl numeros grandes: %d | ubicado en [%d][%d]",aux1,fil,alt2);
    printf("\nEl numeros menores: %d | ubicado en [%d][%d]",aux2,fil,alter2);	
	printf("\n");
  	}//for 2
}

void mayor(){
	int fil,col,aux1=0,aux2=0,alt1,alt2,alter1,alter2,mat1[5],mat2,res=0,prom,mayor,a,b;
	
	for(fil=0;fil<5;fil++){
		for(col=0;col<5;col++){
		if(numeros[fil][col]>aux1){
			aux1=numeros[col][fil];
			a=fil;
			b=col;
		}	
	   }
	}
	printf("Numero mas grande de todos en la matriz: %d | posicion [%d] [%d]",aux1,a,b);
 }
 
void comp(){
	int pos1,pos2,posl1,posl2,alt1=0,alt2=150,fil,col,a[1],b[1],c[1],d[1],e[1],f[1];
 	for(fil=0;fil<5;fil++){
 		for(col=0;col<5;col++){
 			if(numeros[fil][col]>alt1){
 				alt1=numeros[fil][col];
 				pos1=fil;
 				pos2=col;
 				if(numeros[fil][col]<alt2){
 					alt2=numeros[fil][col];
 					posl1=fil;
 					posl2=col;
 				}
 			}
 			a[fil]=alt1;
 			b[fil]=alt2,
 			c[fil]=pos1;
 			d[fil]=pos2;
 			e[fil]=posl1;
 			f[fil]=posl2;
 		}
 		printf("\n");
 	}
 }
 
 void determina(){
 	int fil,col,MatAl[5],lol,prom,lo;
 	for(fil=0;fil<5;fil++){
 		for(col=0;col<5;col++){
 			if(numeros[col][fil]>=MatAl[0]){
 				MatAl[5]=MatAl[4];
 				MatAl[4]=MatAl[3];
 				MatAl[3]=MatAl[2];
 				MatAl[2]=MatAl[1];
 				MatAl[1]=MatAl[0];
 				MatAl[0]=numeros[fil][col];
 			}else if(numeros[fil][col]>=MatAl[1]){
 				MatAl[5]=MatAl[4];
 				MatAl[4]=MatAl[3];
 				MatAl[3]=MatAl[2];
 				MatAl[2]=MatAl[1];
 				MatAl[1]=numeros[fil][col];
 			}else if(numeros [fil][col]>=MatAl[2]){
 				MatAl[5]=MatAl[4];
 				MatAl[4]=MatAl[3];
 				MatAl[3]=MatAl[2];
 				MatAl[2]=numeros[fil][col];
 			}else if(numeros [fil][col]>=MatAl[3]){
 				MatAl[5]=MatAl[4];
 				MatAl[4]=MatAl[3];
 				MatAl[3]=numeros[fil][col];
 			}else if(numeros [fil][col]>=MatAl[4]){
 				MatAl[5]=MatAl[4];
 				MatAl[4]=numeros[fil][col];
 			}else if(numeros[fil][col]>=MatAl[1]){
 				MatAl[5]=numeros[fil][col];
 			}
 		}
 	//	for(int k=0;k<5;k++){
 	lol=0;
 			for(int l=0;l<5;l++){
 				lol=lol+MatAl[l];
 			}
 			prom=lol;	
 	
 	
}
 	printf("El promedio de los numeros grandes es de : %d",prom/5);
}
