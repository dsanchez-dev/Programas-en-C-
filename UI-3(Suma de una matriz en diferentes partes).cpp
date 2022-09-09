/*Impresion de solo partes de una matriz en especial*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int llenar_nombres(int numeros[5] [5]);
int mostrar_nombres(int numeros[5] [5]);
int pares(int numeros [5] [5]);
int suma_centro(int numeros [5] [5]);
int suma_orillas(int numeros [5] [5]);
//int diagonal_sec(int numeros[5][5]);
int diagonal_pri(int numeros[5][5]);
int diagonal_triang_sup(int numeros[5][5]);
int diagonal_triang_inf(int numeros[5][5]);
main(){	
	int numeros[5][5];
	srand(time(NULL));
	/*
	printf("-------------------------------------------------\n");
	printf("|\tLlenar arreglo bidimensional\t\t|\n");
	printf("-------------------------------------------------\n"); */
	llenar_nombres(numeros);
	printf("---------------------------------\n");
	printf("|\tMostrar datos\t\t|\n");
	printf("---------------------------------\n");
	mostrar_nombres(numeros);
	printf("---------------------------------\n");
	printf("|Suma del centro de datos.\t|\n");
	printf("---------------------------------\n");
	suma_centro(numeros);
	printf("\n---------------------------------\n");
	printf("|Suma de la orilla de datos.\t|\n");
	printf("---------------------------------\n");
	suma_orillas(numeros);
	printf("\n---------------------------------\n");
	printf("|Suma del triangulo superior\t|\n");
	printf("---------------------------------\n");
	diagonal_triang_sup(numeros);
	printf("\n--------------------------------\n");
	printf("|Suma de la diagnonal inferior  |\n");
	printf("--------------------------------\n");
	diagonal_pri(numeros);
/*	printf("\n---------------------------------\n");
	printf("|Suma de la diagnonal secundaria|\n");
	printf("---------------------------------\n");
	diagonal_sec(numeros);*/
	printf("\n---------------------------------\n");
	printf("|Suma de la triangulo inferior\t|\n");
	printf("---------------------------------\n");
	diagonal_triang_inf(numeros);
	return 0;
}
int llenar_nombres(int numeros[5] [5]){
	for(int fil=0;fil<5;fil++){
		for(int col=0;col<5;col++){
//			printf("Ingrese los datos para el nombresglo bidimensional en la posicion [%d] [%d]: %d\n",fil,col,rand());
			numeros[fil][col]=rand()%10;
		}
	}
}
int mostrar_nombres(int numeros[5] [5]){
	int fil,col,a=-1;
	for(int a=0;a<5;a++){
	printf("  %d\t",a);
	}
	printf("\n");
	for(fil=0;fil<5;fil++){
		a++;
		printf("%d",a);
		for(col=0;col<5;col++){
			printf("| %d \t",numeros[fil][col]);
		}
		printf("\n");
	}
}

int pares(int numeros [5] [5]){
	int fil,col,compares=0,totalpar[25][3];
	for(fil=0;fil<5;fil++){
		printf("\n");
		for(col=0;col<5;col++){
			printf("\t");
			if(numeros[fil][col]%2==0){
			totalpar[compares][0]=numeros[fil] [col];
			totalpar [compares] [1]= fil;
			totalpar [compares] [2]= col;
			compares++;
			}
		}
	}
	//salida o mostrar
	printf("\nTotal de numeros pares: %d\n",compares);
	printf("Los cuales son y estan ubicados: %d\n",compares);
	printf("\n");
	for(fil=0;fil<compares;fil++){
		printf("\n");
		for(col=0;col<3;col++){
			printf("\t");
			printf("%d \t",totalpar[fil][col]);
			if(col==0){
			printf("|Posicion |");
			}
		}
		printf("\n");
	}
	
}
int suma_centro(int numeros [5] [5]){
	int fil,col,suma=0;
	//seleccionamos lo que realizaresmos dentro del vector bidimensional, mediante los indices en donde se inciara.
			//   <=3
	for(fil=1;fil<4;fil++){
		printf("\n");
		for(col=1;col<4;col++){
			printf("\t");
			printf("|%d|",numeros[fil][col]);
			suma+=numeros[fil][col];
		}
	}
	printf("\nEl total de la suma es: %d", suma);
}

//resultado de las horillas
int suma_orillas(int numeros[5][5]){
	int fil,col,suma=0;
	//seleccionamos lo que realizaresmos dentro del vector bidimensional, mediante los indices en donde se inciara.
			//   <=3
	for(fil=0;fil<5;fil++){
		printf("\n");
		for(col=0;col<5;col++){
			printf("\t");
			if(fil==0 || fil==4||col==0 || col==4){
			printf("|%d|",numeros[fil][col]);
			suma+=numeros[fil][col];		
			}
		}
	}
	printf("\nEl total de la suma es: %d", suma);
}
/*
//diagonal secundario.
int diagonal_sec(int numeros[5][5]){
	int fil,col,a=0,suma=0;
	//seleccionamos la parte en la cual se aplicara la suma
		for(fil=0;fil<5;fil++){
			printf("\n");
		for(col=0;col<5;col++){
			printf("\t");
			if (fil==col){
				a++;
				printf("|%d|",numeros[fil][col]);
                suma += numeros[fil][col];
            }
		}
	}
	printf("\nEl total de la suma es: %d", suma);
}
*/
//diagonal inferior.
int diagonal_pri(int numeros[5][5]){
	int fil,col,a=0,suma=0;
	//seleccionamos la parte en la cual se aplicara la suma
		for(fil=0;fil<5;fil++){
			printf("\n");
		for(col=0;col<5;col++){
			printf("\t");
			if (col == fil){
				printf("|%d|",numeros[fil][col]);
                suma += numeros[fil][col];
                a++;
            }
		}
	}
	printf("\nEl total de la suma es: %d", suma);
}

//diagonal del triangulo superior.
int diagonal_triang_sup(int numeros[5][5]){
	int fil,col,a=0,suma=0;
	//seleccionamos la parte en la cual se aplicara la suma
		for(fil=0;fil<5;fil++){
			printf("\n");
		for(col=0;col<5;col++){
			printf("\t");
			if(fil == col - 1 || fil == col - 2 || fil == col - 3 || fil == col - 4){
				a++;
				printf("|%d|",numeros[fil][col]);
				suma+=numeros[fil][col];		
			}
		}
	}
	printf("\nEl total de la suma es: %d", suma);
}
//diagnonal secundaria inferior.
int diagonal_triang_inf(int numeros[5][5]){
	int fil,col,a=0,suma=0;
	//seleccionamos la parte en la cual se aplicara la suma
		for(fil=0;fil<5;fil++){
			printf("\n");
		for(col=0;col<5;col++){
			printf("\t");
			if(fil == col + 1 || fil == col + 2 || fil == col + 3 || fil == col + 4){
				a++;
				printf("|%d|",numeros[fil][col]);
				suma+=numeros[fil][col];		
			}
		}
	}
	printf("\nEl total de la suma es: %d", suma);
}

