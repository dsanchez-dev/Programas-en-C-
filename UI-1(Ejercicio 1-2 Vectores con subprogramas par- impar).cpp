#include<stdio.h>
int datos_arre(int a);
int datos_arre2(int a);
int arre[10];
int arre2[10];
main(){
	int num;
	datos_arre(num);
	datos_arre2(num);
	return 0;
}
int datos_arre(int a){
	int i,j,par=0,impar=0,pares[10],impares[10];//for antes que incie ya sabe que hacer.
	j=0;
	for(i=0;i<10;i++){
		j++;
			printf("Ingrese valores para llenar el vector [%d] y  Posicion[%d]: ",arre[i],j);
			scanf("%d",&arre[i]);
	if(arre[i]%2==0){
		pares[par++]=arre[i];
	}else{
		impares[impar++]=arre[i];
	}
}
	printf("\nEl total de pares es: %d\n",par);
	printf("\nEl total de impares es: %d\n",impar);
	return 0;
}

int datos_arre2(int a){
	int i,j,par=0,impar=0,pares[10],impares[10];//for antes que incie ya sabe que hacer.
	j=0;
	for(i=0;i<10;i++){
		j++;
			printf("Ingrese valores para llenar el vector [%d] y  Posicion[%d]: ",arre2[i],j);
			scanf("%d",&arre2[i]);
	if(arre2[i]%2==0){
		pares[par++]=arre2[i];
	}else{
		impares[impar++]=arre2[i];
	}
}
	printf("\nEl total de pares es: %d\n",par);
	printf("\nEl total de impares es: %d\n",impar);
	return 0;
}
