#include<stdio.h>
int arre_datos(int arre[10]);
int compa_datos(int arre[10]);
int arre[10],arre2[10];
int main(){
	arre_datos(arre);
	compa_datos(arre);
	arre_datos(arre2);
	compa_datos(arre2);
	return 0;
}
//////////////////
int arre_datos(int arre[10]){
	int i,j,par=0,impar=0,pares[10],impares[10],a=0;
	j=0;
	a++;
	printf("-------------------------------------------------------\n");
	printf("|\t\t\tArreglo [%d]\t\t\t|\n",a++);
	printf("-------------------------------------------------------\n");
	for(i=0;i<10;i++){
	j++;		
		printf("Ingrese valores para llenar el vector [%d] y  Posicion[%d]: ",arre[i],j);
		scanf("%d",&arre[i]);
	}
	printf("\n");
}
//////////////////////
int compa_datos(int arre[10]){
	int par=0,impar=0,pares[10],impares[10],a,i;
	a++;
	for(i=0;i<10;i++){
		if(arre[i]%2==0){
		pares[par++]=arre[i];
	}else{
		impares[impar++]=arre[i];
	}
}	
	printf("\n---------------------------------------------------------\n");
	printf("|\t\tEl total de pares es: %d\t\t\t|\n",par);
	printf("|\t\tEl total de impares es: %d\t\t|",impar);
	printf("\n---------------------------------------------------------\n");
}
