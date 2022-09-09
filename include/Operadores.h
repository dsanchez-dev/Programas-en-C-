//LIBRERIAS.
int suma(int n1, int n2){
	return n1+n2;
}
int resta(int n1, int n2){
	return n1-n2;
}

int factores(int n1, int n2){
	printf("\n-------------------------------------------");
	printf("\n\tLos numeros divisores de %d y %d.\n",n1,n2);
	printf("\n-------------------------------------------\n");
	printf("\n");
    printf("factores primos de: %d\n",n1);
    printf("\n");
for (int a=2;n1>1;a++){ 
  while (n1%a==0){
    printf("%d | %d N.Primo\n",n1,a);
    n1/=a;
	}
 }
    printf("%d |\n",n1);
    printf("\n");
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
//Suma dvisores.
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
//numeros amigos
int compara(int a, int b){//comparar numeros.
	if(sumaDiv(a)==b && sumaDiv(b)==a){
		printf("El Numero 1: %d y Numero 2: %d ->|Son Amigos|(Panas)|<-",a,b);
	}else{
		printf("El Numero 1: %d y Numero 2: %d ->|No Son Amigos|(No Panas)|<-",a,b);
	}
}
//perfectos.
int numPerf(int a){ 
	if(a%2==0){
	 	printf("\n%d = Numero perfecto\n",a);
		 }else
	if(a%2==1){
	printf("\n%d = Numero no perfecto\n",a);
	 }
}
int numPerf2(int b){ 
	if(b%2==0){
	 	printf("\n%d = Numero perfecto\n",b);
		 }else
	if(b%2==1){
	printf("\n%d = Numero no perfecto\n",b);
	 }
}
//Numero par.
int numPar(int a){//metodo 3 Si es un numero par.
	if(a%2==0){
	printf("\nEs numero par: %d\n",a);
	}
}
int numPar2(int b){//metodo 3 Si es un numero par.
	if(b%2==0){
	printf("\nEs numero par: %d\n",b);
	}
}
//Numero impar
int numImpar(int a){//metodo 4 si es un numero impar
	if(a%2==1){
	printf("\n%d = Numero impar.\n",a);
	}
}

int numImpar2(int b){//metodo 4 si es un numero impar
	if(b%2==1){
	printf("\n%d = Numero impar.\n",b);
	}
}
//primos.
int primo(int a){//metodo 1 Identifica si un numero es primo
	if(a%2!=0 && a%3!=0 && a%5!=0 && a%7!=0 || a==2 || a==3 || a==5 || a==7){
	printf("\n%d = El numero ingresado es primo.\n",a);
	}else{
		printf("\n%d = El numero ingresado no es primo.\n",a);
	}
}
int primo2(int b){//metodo 1 Identifica si un numero es primo
	if(b%2!=0 && b%3!=0 && b%5!=0 && b%7!=0 || b==2 || b==3 || b==5 || b==7){
	printf("\n%d = El numero ingresado es primo.\n",b);
	}else{
		printf("\n%d = El numero ingresado no es primo.\n",b);
	}
}
/*Si un numero dado es capicua.*/
int capicua(int a){
	int aux,ninv,b;
	ninv=0;
	aux=a;
	while(a>0){
		b=a%10;
		ninv=b+ninv*10;
		a=a/10;
	}
	if(ninv==aux){
		printf("El numero : %d ->|Es capicua|<-",aux);
	}else{
		printf("El numero : %d ->|No Es capicua|<-",aux);
	}
	return 0;
}

int capicua2(int b){
	int aux,ninv,c;
	ninv=0;
	aux=b;
	while(b>0){
		c=b%10;
		ninv=c+ninv*10;
		b=b/10;
	}
	if(ninv==aux){
		printf("El numero : %d ->|Es capicua|<-",aux);
	}else{
		printf("El numero : %d ->|No Es capicua|<-",aux);
	}
	return 0;
}
