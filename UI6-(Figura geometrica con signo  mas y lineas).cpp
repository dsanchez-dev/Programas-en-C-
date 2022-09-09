#include<stdio.h>//tarea
/*Realizar la figura indica en pdf. */
int figura(int num);

int main(){
	int dato;
	
	printf("Ingrese un numero para hacer la figura del cuadrado: ");
	scanf("%d",&dato);
	figura(dato);
	return 0;
}

int figura(int num){
//Impresion de parte superior.
for(int a=0; a<=num; a++){
		if(a==num){
			printf("+");
		}else 
			printf("  +---");
 }
//Impresion de espacios 
for(int i=1; i<=num; i++){
	printf("\n");
	
	for(int a=0; a<=num; a++){
		printf("      ");
   	}
printf("\n");

//Impresion de |
for(int b=0; b<=num; b++){
	 if(b==num){
			printf("|   ");
		}else
			printf("  |   ");
		}

printf("\n");
for(int c=0; c<=num; c++){
		printf("      ");
 }
 //saltos de acomodo
printf("\n");
//Impresion de +  y +-----
for(int d=0; d<=num; d++){
	if(d==num){
		printf("+   ");
	}else
	printf("  +---");
	}
	printf("\n");
	}
	//fin
	return 0;
 }

