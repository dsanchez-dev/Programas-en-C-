//realizar un programa que determine, la persona mas vieja entre 3 personas.
#include<iostream>
#include<conio.h>
#include<stdlib.h>
//operadores racionales. (<, >);
//3 programas en uno solo

int main(){
	char nombre1[25],nombre2[25],nombre3[25];
	int edad1,edad2,edad3;
	
	
	printf("Ingrese 3 edades y sus nombres respectivamente.");
	printf("\n");
	
	printf("Ingrese su nombre: ");
	gets(nombre1);
	printf("Ingrese su edad: ");
	scanf("%d",&edad1);
	fflush(stdin);
	
	printf("\n--------------------------------------\n");
	printf("Ingrese su nombre: ");
	gets(nombre2);
	printf("Ingrese su edad: ");
	scanf("%d",&edad2);
	fflush(stdin);
	
	
	printf("\n--------------------------------------\n");
	printf("Ingrese su nombre: ");
	gets(nombre3);
	printf("Ingrese su edad: ");
	scanf("%d",&edad3);
	
	
	
/*		
	if(edad1 >= edad2 && edad1 >= edad3){
		printf("\n--------------------------------------\n");
		printf("La persona mas vieja es: %s, con: %d ",nombre1,edad1);
		printf("\n--------------------------------------\n");
	} else if(edad2 >= edad1 && edad2 >= edad3){
		printf("\n--------------------------------------\n");
		printf("La persona mas vieja es: %s, con: %d ",nombre2,edad2);
		printf("\n--------------------------------------\n");
	} else if(edad3 >= edad1 && edad3 >= edad2){
		printf("\n--------------------------------------\n");
		printf("La persona mas vieja es: %s, con: %d ",nombre3,edad3);
		printf("\n--------------------------------------\n");
	}
	
	//ambos iguales
	
	if(edad1 >= edad2){
		printf("\n--------------------------------------\n");
		printf("La persona mas vieja es: %s, con: %d y \t",nombre1,edad1);
		printf(" %s, con: %d ",nombre2,edad2);
		printf("\n--------------------------------------\n");
	} else if(edad2 >= edad1){
		printf("\n--------------------------------------\n");
		printf("La persona mas vieja es: %s, con: %d y \t",nombre2,edad2);
		printf(" %s, con: %d ",nombre1,edad1);
		printf("\n--------------------------------------\n");
	} else if(edad3 >= edad1){
		printf("\n--------------------------------------\n");
		printf("Las personas mas viejas son: %s  con: %d,  y ",nombre3,edad3);
		printf(" %s, con: %d ",nombre1,edad1);
		printf("\n--------------------------------------\n");
	}
*/
	//no usar el operador &&

	if(edad1 >= edad2 ){
		printf("\n-------------------edad1 >= edad2-------------------\n");
		printf("La persona es vieja es: %s, con: %d  que %s, con: %d ",nombre1,edad1,nombre2,edad2);
		printf("\n--------------------------------------\n");
	}
	else if(edad1 >= edad2){
		printf("\n-------------edad1 >= edad3-------------------------\n");
		printf("La persona es vieja es: %s, con: %d  que %s que tine: %d ",nombre1,edad1,nombre3,edad3);
		printf("\n--------------------------------------\n");
	}else  if(edad2 >= edad1){
		printf("\n-------------------edad2 >= edad1------------------\n");
		printf("La persona es vieja es: %s, con: %d  que %s, que tine: %d ",nombre2,edad2,nombre1,edad1);
		printf("\n--------------------------------------\n");
	}else if(edad2 >= edad3){
		printf("\n------------------edad2 >= edad3--------------------\n");
		printf("La persona es vieja es: %s, con: %d  que %s que tine: %d ",nombre2,edad2,nombre3,edad3);///
		printf("\n--------------------------------------\n");
	} else if(edad3 >= edad1){
		printf("\n------------------edad3 >= edad1--------------------\n");
		printf("La persona es vieja es: %s, con: %d  que %s que tine: %d ",nombre3,edad3,nombre1,edad1);
		printf("\n--------------------------------------\n");
	}else if(edad3 >= edad2){
		printf("\n--------------------edad3 >= edad2------------------\n");
		printf("La persona es vieja es: %s, con: %d  que %s que tine: %d ",nombre3,edad3,nombre2,edad2);
		printf("\n--------------------------------------\n");
	}


	printf("\n--------------------------------------\n");
	printf("Desarrollado por Daniel Sanchez Gonzalez");
	printf("\n--------------------------------------\n");
	
	getch();
	return 0;
}
