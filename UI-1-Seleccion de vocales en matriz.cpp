//PROGRAMA #1- 06/SEPT/2022;
//NOMBRE DEL ALUMNO: DANIEL SANCHEZ GONZALEZ;
//GRUPO: 4-B;
/* PROGRAMA QUE ALAMACENA 5 NOMBRES IDENTIFICA EL NOMBRE MAS LARGO Y EL NOMBRE QUE TIENE VOCALES */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>//para contar la cadena de caracteres.
//definimos la variable global
char nombres[5][35];//cadena de caracter//string
int numVocal[5],i;
//definimos un procedimiento por que no devolvera valores.
void leerNom();
int tama();
int vocales();

int main(){
	//EN CASO DE UN ERROR COMO MUESTRA DE MAS NOMBRES ES POR QUE SE DESVORDA.
	//almacenara la variable que regresa tam;
	int aux,aux2;
	aux=tama();
	leerNom();//mandamos a llamar a la funcion//llamada a la funcion y su valor devuelto lo alamacena en auz
	printf("El nombre mas largo es: %s\n",nombres[aux]); //devuvele un valor que es la posicion y el nombre
	////////////////
	aux2=vocales();	
	printf("El nombre con mas vocales es: %s\n",nombres[aux2]); //devuvele un valor que es la posicion y el nombre	
	
	return 0;
}

void leerNom(){
	int i;//para los nombres
	for(i=0;i<5;i++){//para ir iterando los 5 nombres que se solicitan en la matriz
		printf("Igresar el nombre: [%d]\n",i+1);//mostramos la informacion
		//lemos el dato
		gets(nombres[i]);//aqui se almacenan los 5 nombres//para lectura de cadenas//lecutra de cadesna
	}
}
//para identificarlo se puede aplicar un procedimiento o una funcion

int tama(){
	int i,tama,mayor=0,pos;//para los nombres//tama variable auxiliar para actualizar los datos
	//para el recorrido de los datos//identificar en cada cadea su tamaño
	for(i=0;i<5;i++){
		tama=strlen(nombres[i]);//determina el tamaño de la cadena con strlen
		//actualizara el valor deacuerdo el valor mayor
		if(tama>mayor){// cuando sea mayor que el anterior numero de una cadena de caracter
			mayor=tama;
			//para identifcar en que posicion esta se usa la variable pos para almacenar la informacion que se tenga
			pos=i;//cada iteracion del ciclo cambia de su valor, solo cuando resulte mayor///va a tomar tomar el valor de lo que tiene///la posicion en la que esta
		}
	}
	//para devolver un valor y que siga iterando
	return pos;
}

int vocales(){
	int i,tama2,pos=0,cont,mayor=0,pot;
	for(int j=0;j<5;j++){//coluna
	cont=0;
	for(i=0;i<35;i++){
		tama2=nombres[j][i];//fil
	if(tama2=='A'||tama2=='a'||tama2=='E'||tama2=='e'||tama2=='I'||tama2=='i'||tama2=='O'||tama2=='o'||tama2=='U'||tama2=='u'){
	cont++;
	}
  }
  if(cont>mayor){
		mayor=cont;
		pot=j;///elije la cadena a evluar
	}
 }
  return pot;
}
//Daniel Sanchez Gonzalez
