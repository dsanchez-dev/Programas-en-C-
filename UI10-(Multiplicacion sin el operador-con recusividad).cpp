#include<stdio.h>
int mult(int a, int b);
int multRe(int a, int b);
int main()
{
	int num, num2;
	printf("Ingrese 2 datos para multiplicarlos sin el for: ");
	scanf("%d",&num);
	printf("\n");
	scanf("%d",&num2);
	
	mult(num,num2);
	multRe(num,num2);
	return 0;
}
int mult(int a, int b){
	int i, resul=0;
	for(i=1;i<=b;i++){
	resul=a+resul;
	}
	printf("El resultado de la multiplicacion de : %d * %d = %d",a,b,resul);
	return 0;
}
int multRe(int a, int b){
	printf("\n--------Recursivo----------\n");
	int aux;
	aux = 1;
	if(a<=0){
		printf("El resultado es 1.");
		return 1;
	}else{
		return aux + mult( a, b);
	}
}
