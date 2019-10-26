#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct estudiante{
	char nombre[40];
	char sexo;
	int edad;
	int cal[5];
	float pro; 
};

struct panda{
	char nombre[15];
	float peso;
	int anio;
	int edad;
	char sexo;
};

int main(){
	setlocale(LC_ALL,"spanish");
	struct estudiante est[' '];
	struct panda pan[' '];
	int n,i,j,sumcal,x,y,mayor;
	
	printf("******ACTIVIDAD 1******\n\n");
	printf("Ingrese el número de alúmnos \n");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("Ingrese el nombre del alumno \n");
		scanf("%s",&est[i].nombre);
		fflush(stdin);
		printf("Ingrese el sexo del estudiante \n");
		scanf("%s",&est[i].sexo);
		fflush(stdin);
		printf("Ingrese la edad del alumno \n");
		scanf("%d",&est[i].edad);
		fflush(stdin);
		for(j=0;j<5;j++){
			printf("Ingrese la calificación %d del alumno \n",j+1);
			fflush(stdin);
			scanf("%d",&est[i].cal[j]);
			sumcal=sumcal+est[i].cal[j];
		}
		est[i].pro=sumcal/5;//suma de calificaciones entre numero de calificaciones//
		printf("El promedio del alumno es de %.2f \n",est[i].pro);
	}
	
	for(x=0;x<n;x++){
		for(y=0;y<n;y++){
			if(est[i].pro>est[x].pro){
				mayor=est[y].pro;
			}
		}
	}
	for(x=0;x<n;x++){
		if(est[i].pro==mayor){
			printf("El estudiante con mayor promedio es %s con un promedio de %.2f",est[x].nombre,est[x].pro);
		}
	}
	
	printf("******ACTIVIDAD 2******\n\n");
	int p, dc;
	
	printf("Ingrese el número de pandas \n");
	scanf("%d",&p);
	
	for(j=0;j<p;j++){
		do{
			printf("Ingrese el nombre del panda \n");
			scanf("%s",&pan[j].nombre);
			fflush(stdin);
			do{
				printf("Ingrese la edad del panda \n");
				scanf("%d",&pan[j].edad);
			}while(pan[j].edad<0);//que no sea edad negativa//
			do{
				printf("Ingrese el peso del panda \n");
				scanf("%f",&pan[j].peso);
			}while(pan[j].peso<0);
			pan[j].anio=2019-pan[j].edad;
			do{
				printf("Ingrese el sexo del panda (m=masculino, f=femenino)");
				scanf("%c",&pan[j].sexo);
				fflush(stdin);
			}while(pan[j].sexo!='m' && pan[j].sexo!='f');
			do{
				printf("Son correctos estos datos? 1-si. 2.no");
				scanf("%d",&dc);
			}while(dc!=1 && dc!=2);
		}while(dc==2);
	}
	for(j=0;j<p;j++){
		if(pan[j].edad>5 && pan[j].sexo=='f'){
			printf("La panda %s, de %d años de edad puede tener bebés",pan[j].nombre,pan[j].edad);
		}
	}
	
return 0;
}
