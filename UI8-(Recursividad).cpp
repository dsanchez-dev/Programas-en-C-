#include<stdio.h>
int factorial(int n);
int fibonachi(int n);
//int fiboRe(int n);
main(){
	int num,resultado,total;
	printf("Ingresa un numero: ");
	scanf("%d",&num);
	factorial(num);
	fibonachi(num);
//	fiboRe(num);
	return 0;
 }
 		
int factorial(int n){
	int resultado;
	if(n==0){
		resultado=1;
	}else{
		resultado = n * factorial(n-1);
		printf("|F!:%d|\n",resultado);
	}
	return resultado;
 }
 int fibonachi(int n){
 	int resul=0;
 	if(n<=1){
 		printf("------------verdadero---------");
 		printf("\nAlmacenado en el return: %d\n",n);
 		return 1;
	 }else{
	 	resul= fibonachi(n-1)+fibonachi(n-2);
	 	printf("----------ELSE----------");
	 	printf("\nAlmacenado en resultado: %d\n",resul);
	 	return resul;
	 }
 }
 
