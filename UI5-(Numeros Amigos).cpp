/*El objetivo del apuntador: apunta a una dirrección de memoria. Siendo mas rapido/Memoria dinamica.
284 / 220 numero amigos.*/
/*10 y 8 no son amigos puesto que los divisores propios de 10 son 1,2,5 
cuya suma es 8, pero los divisores propios de 8 son 1,2,4 cuya suma es 7 distinto de 10.*/
int sumaDiv(int n);
int compara(int n1, int n2);
int factores(int n1, int n2);
#include<stdio.h>
main(){//principal
  int num1,num2/*,n*/;
	printf("Ingresa un numero: ");
	scanf("%d",&num1);
	printf("Ingresa un segundo numero: ");
	scanf("%d",&num2);
	printf("\n");
	compara(num1,num2);
	factores(num1, num2);
	return 0;
}

int sumaDiv(int a){ //calcular divisores.//recibe el dato en n
int i,suma=0;//contador suma
	for (i=1;i<a;i++){//no colocar el /2 en n//arrogara siempre que no son panas.
		if(a%i==0){
			suma=suma+i;
		}
	}
	return suma;
}
int sumaDiv2(int b){ //calcular divisores.//recibe el dato en n
int i,suma=0;//contador suma
	for (i=1;i<b;i++){//no colocar el /2 en n//arrogara siempre que no son panas.
		if(b%i==0){
			suma=suma+i;
		}
	}
	return suma;
}

int compara(int n1, int n2){//comparar numeros.
	if(sumaDiv(n1)==n2 && sumaDiv(n2)==n1){
		printf("Numero1: %d Numero2: %d ->|Son Amigos (Panas)|<-",n1,n2);
	}else{
		printf("Numero1: %d Numero2: %d ->|No Son Amigos (Panas)<-",n1,n2);
	}
}

int factores(int n1, int n2){//factores
	
	//numeros primos no tienen descomposicion.//identificar si es numero primo %==1
	printf("\n-------------------------------------------");
	printf("\n\tLos numeros divisores de %d y %d.",n1,n2);
	printf("\n-------------------------------------------");
	printf("\n");
	////////////////////separador n1/////////////
    printf("factores primos de: %d\n",n1);
    printf("\n");
    
    
for (int a=2;n1>1;a++){ //busca los primos de n1
  while (n1%a==0){
    printf("%d | %d N.Primo\n",n1,a);
    n1/=a;
	}
 }
    printf("%d |\n",n1);
    printf("\n");
    //////////////////separador n2////////
    
    printf("factores primos de: %d\n",n2);
    printf("\n");
for (int a=2;n2>1;a++){ //segunda parte
  while (n2%a==0){
        printf("%d | %d N.Primo\n",n2,a);
        n2/=a;
	}
 }
    printf("%d |\n",n2);
}
