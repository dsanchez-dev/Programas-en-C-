#include<iostream>
#include <cmath>
void triangulo(float num1, float num2); //declaramos un metodo				//procedimientos.
void circulo(float num1, float num2);
void cuadrado(float num1, float num2);
void rectangulo(float num1, float num2);
//variables locales y globales

main(){ //metodo principal
	int opc;
	float num1,num2,total,area,radio;
	
	//SE USAN ESTOS  DATOS
	printf("Ingrese un base del tringulo: ");
	scanf("%f",&num1);
	printf("\n");
	printf("Ingrese un altura del triangulo: ");
	scanf("%f",&num2); 
	triangulo(num1,num2);//metodo del triangulo
	
	printf("Ingrese el radio del circulo: ");
	scanf("%f",&num1);
	circulo(num1,num2);//metodo del circulo
	
	printf("Ingrese un lado del cuadrado: ");
	scanf("%f",&num1);
	printf("\n");
	printf("Ingrese un segundo lado del cuadrado: ");
	scanf("%f",&num2); 
	cuadrado(num1,num2);//metodo del cuadrado
	
	printf("Ingrese un base del rectangulo: ");
	scanf("%f",&num1);
	printf("\n");
	printf("Ingrese un altura del rectangulo: ");
	scanf("%f",&num2); 
	rectangulo(num1,num2);//metodo del rectangulo
	
	return 0;
}

void triangulo (float num1, float num2){//metodo
float total;
	total=(num1*num2)/2;
	printf("\n");
	printf("el area total de triangulo es: %f",total);
	printf("\n");
}

void circulo (float num1, float num2){
float total;
	 total=3.1416*pow(num1,2);
	 printf("\n");
    printf("El area del circulo es: %f",total);
    printf("\n");
	
}

void cuadrado (float num1, float num2){//metodo
float total;
	total = num1*num2;
	printf("\n");
	printf("El area es cuadrado: %f",total);
	printf("\n");
}

void rectangulo(float num1, float num2){//metodo
float total;
		total=num1*num2;
		printf("\n");
		printf("El area es del rectangulo es: %f",total);
		printf("\n");
}
