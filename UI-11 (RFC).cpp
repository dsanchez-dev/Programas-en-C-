//Prograna que crea tu rfc intento.
#include<stdio.h>//estandar
#include<string.h>//str
#include<stdlib.h>//para usar el char=get();3
#include<conio.h>//el getch()
//#include<locale.h>//libreria para cambiar de idioma

char app[11], apm[11], nom[11], rfc[15], ano[7];

main(){
	//setlocale(LC_CTYPE,"Spanish");
	
		//int limite=120101;
		int opc;
		char respuesta;
		respuesta = 'S';
		
		while (respuesta=='S' || respuesta=='s'){
		system("cls");
		
		printf("\n------------------Solicitar datos------------------\n");
		printf("Ingresa tu apellido Paterno: ");
		scanf("%s",&app);

		printf("Ingresa el apellido materno: ");
		scanf("%s",&apm);
        fflush(stdin);
        
        printf("Ingresa tu(s) nombre(s): ");
		scanf("%s",&nom);
		
		printf("Ingresa tu fecha de nacimiento solo 2 datos (aaaa/mm/dd), (ejemplo: 030201): ");
		scanf("%s",&ano);

		strupr(app); //strupr Cambia de minusculas a mayusculas.
		strupr(apm);
		strupr(nom);
	
		system("cls");
		printf("\n------------------Muestra de datos------------------\n");
		printf("\nSu nombre es: %s %s %s %s ",nom,nom,app,apm);
		printf("\nTu fecha de nacimiento es: %s ",ano);
		
		rfc[0] = app[0];
		rfc[1] = app[1];
		rfc[2] = apm[0];
		rfc[3] = nom[0];
	
		getch();//continua el programa hasta que reciba una pulsasion de space.
		
		system("cls");
		strcat(rfc, ano);//Esta permite añadir un bloque de memoria a otro.
		
		printf("\n\t------------------Salida de los datos------------------\n");
	 	printf("\n\t\t\tSu RFC es: %s.",rfc);
		getchar();
		getchar();
		printf("\n\t---------------------------------------------------------\n");
		
		printf("\n\tRepite el proceso, solo si te equivocaste (S/N): ");
		scanf("%s",&respuesta);
	}
	
	printf("\tDesarrollado por: Daniel Sanchez Gonzalez");
	//printf("Programa desarrollado por: %s %s %s",nom,app,apm);
	return 0;
}

