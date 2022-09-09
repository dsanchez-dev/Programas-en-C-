/*Aplicando lo visto debemos manipular otro dato, no se pueden modificar los 2 metodos principales */
#include <stdio.h>
void multiplicar(int *a, int *b, int *c);
void multiplicar2();
void sumar(int res);

main(){
	int x, y, res,c;
	
	printf("Ingrese 2 valores numericos de tipo entero: ");
	scanf("%d",&x);
	scanf("%d",&y);
	//x=10; y=20; /*Referencia*/
	
	res=(x*y);//operacion.
	multiplicar(&x,&y, &res);/*direccion de memoria*/
	printf("\nEl resultado de la multiplicacion de %d por %d es %d",x,y,res);
	printf("\n");
	printf("\n");
	/*multiplicar2();//llamamos a la funcion 2.*/
	sumar(res);
	return 0;
}

void multiplicar(int *a, int *b, int *c){ /* el asterisco para apuntar valores.*/
	printf("\n-----------Sub programa: Multiplicar------------\n");
	printf("\ncontenido de a: %d, contenido de b: %d, contenido de a: %d\n",a,b,c);/*para mostrar la direccion de memoria.*/
	printf("\ncontenido de a: %d, contenido de b: %d, contenido de a: %d\n",*a,*b,*c);/*para haacer refecia al contenido.*/
	*c = (*a)*(*b);/*aputador*/
}
void multiplicar2(){
	int x,y,res;
	printf("\n-----------Sub programa: Multiplicar2------------\n");
	printf("\nIngresa datos: ");
	scanf("%d",&x);
	scanf("%d",&y);
	res=(x*y);
	printf("\nEl resultado de la multiplicacion de %d por %d es %d\n",x,y,res);
}
void sumar(int res){
	printf("\n-----------Sub programa: sumar a res------------\n");
	int num1,total;
	printf("\nUn dato extra a sumar: ");
	scanf("%d",&num1);
	total = res + num1;
	printf("\nEl total al agregarle %d a %d es de: %d \n",res,num1,total);
}
