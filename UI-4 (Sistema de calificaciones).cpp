#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(int argc, char*argv){
	
	char nombre[35],matricula[11],grupo;
	int edad, grado;
	float promedio;
	char resp;
	resp='S';
	
	while(resp=='S' || resp=='s'){
		system("cls");
	printf("\n");
	//parte 1
	printf("Nombre: ");
	gets(nombre);
	printf("Matricula: ");
	gets(matricula);
	printf("Grado: ");
	scanf("%d",&grado);
	fflush(stdin);
	printf("Grupo: ");
	grupo=getchar();
	printf("Edad :");
	scanf("%d",&edad);
	printf("Promedio: ");
	scanf("%f",&promedio);
	
	fflush(stdin);
	
	system("cls");
	//parte 2
	char nombre2[35],matricula2[11],grupo2;
	int edad2, grado2;
	float promedio2;
	
	printf("Nombre: ");
	gets(nombre2);
	printf("Matricula: ");
	gets(matricula2);
	printf("Grado: ");
	scanf("%d",&grado2);
	fflush(stdin);
	printf("Grupo: ");
	grupo2=getchar();
	printf("Edad :");
	scanf("%d",&edad2);
	printf("Promedio: ");
	scanf("%f",&promedio2);

	fflush(stdin);
	
	system("cls");
	
	printf("Nombre: \t\t\t\tMatricula: \t\tGrado: \t\tGrupo: \t\tEdad:  \t\tPromedio:\n");
	printf("-------------------------------------------------------------------------------------------------------------------\n");
	printf ("%s \t\t%s \t\t%d \t\t%c \t\t%d \t\t%f\n",nombre,matricula,grado,grupo,edad,promedio);
	printf("-------------------------------------------------------------------------------------------------------------------\n");
	printf ("%s \t%s \t\t%d \t\t%c \t\t%d \t\t%f\n",nombre2,matricula2,grado2,grupo2,edad2,promedio2);
	printf("-------------------------------------------------------------------------------------------------------------------\n");
	
		printf("\nDeseas volver a repetir el proceso? (S/N)");
		scanf("%s",&resp);
	}
	getch();
	return 0;
}
