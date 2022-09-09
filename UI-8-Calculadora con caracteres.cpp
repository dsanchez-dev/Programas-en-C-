//realizar un programa que evalue las operaciones basicas aritmeticas de 2 numeros enteros 
#include <stdio.h>
#include<conio.h>

int main() {
	
	int num1, num2, resul;
	char opc;
	
	printf("--------------------MENU------------------\n");
	printf("case 1: (+) Suma de numeros enteros.\n");
	printf("case 2: (-) Resta de numeros enteros.\n");
	printf("case 3: (*) Multiplicacion de numeros enteros\n");
	printf("case 4: (/) Division de numeros enteros.\n");
	printf("IMPORTANTE: Solo ingrese numeros enteros.\n");
	printf("--------------------MENU-------------------\n");
	printf("\n");
	
	printf("Ingresa un numero entero:"); scanf("%d",&num1); fflush(stdin);
	printf("Ingrese la operacion a realizar: "); opc=getchar();
	printf("Ingresa otro numero entero:"); scanf("%d",&num2);
	
	
		switch(opc){
			
		case '+': 
			resul=num1+num2;
			break;
		case '-': 
			resul=num1-num2;
			break;
		case '*': 
			resul=num1*num2;
			break;
		case '/': 
			resul=num1/num2;
			break;
		default:
			printf("\nOperacion erronea");
		}
	printf("El resultado es: %d",resul);//no colocar & direccion de memoria
	
	getch ();
	return 0;
}
