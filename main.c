/*Alejandro García Luis
  Grupo 008
  Sábados 9-11 am
  Noviembre 2, 2019
  1846616 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
/*ACTIVIDAD 1*/
void vocales(char *);

int main(){
	setlocale(LC_ALL,"spanish");
	printf("******ACTIVIDAD 1******\n\n");
	char cad[200];
	printf("Ingrese una cadena para contar sus vocales: "); 
	fflush(stdin);
	gets(cad); /*Se guarda la cadena */
	
	vocales(cad); /* se llama a la función que contará las vocales de la cadena*/
	
	printf("******ACTIVIDAD 2******\n\n");
	int x, y, z;
	int *p1, *p2, *p3; /*declaración de los punteros */
	printf("Ingrese el primer numero \n");
	scanf("%d",&x);
	printf("Ingrese el segundo numero \n");
	scanf("%d",&y);
	z=x+y;
	
	p1=&x;
	p2=&y;
	p3=&z;
	printf("La suma de los numeros %p y %p es igual a %p",*p1,*p2,*p3);
	getch();
return 0;
}

void vocales(char *s){
	int cont=0,a=0,e=0,i=0,o=0,u=0;
	int *pa,*pe,*pi,*po,*pu,*pcont;
	while(*s){
	switch(toupper(*s)){
	case 'A':
	a++;
	cont++;
	break;
	case 'E':
	e++;
	cont++;
	break;
	case 'I':
	i++;
	cont++;
	break;
	case 'O':
	o++;
	cont++;
	break;
	case 'U':
	u++;
	cont++;
	break;
	}
	s++;
	}
	pa=&a;
	pe=&e;
	pi=&i;
	po=&o;
	pu=&u;
	pcont=&cont;
	printf("\n");
	printf("La cadena tiene %i vocales\n",*pcont);
	printf("A: %i\n",*pa);
	printf("E: %i\n",*pe);
	printf("I: %i\n",*pi);
	printf("O: %i\n",*po);
	printf("U: %i\n",*pu);
}


