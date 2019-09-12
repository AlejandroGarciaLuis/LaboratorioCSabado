#include <stdio.h>
int main(){
	/* *Alejandro García Luis
	*10/09/2019
	*Grupo 008
	*Sábados 9am-11am
	*1846616
	*/
	
	//*********ACTIVIDAD 1*********//
	int nota; 
	printf("ACTVIDAD 1 \n");
	
	printf("Ingrese la nota de la materia \n");
	scanf("%d",&nota);
	
	//Este if evaluará si la nota ingresada es menor que cero o mayor que 10
	if(nota<0 || nota>10)
		printf("ERROR: Nota Incorrecta \n\n\n");
	else
		if(nota<=0 || nota<5) //Este if evaluará si la nota esta entre el rango de valores 0 y 4( ya que la nota es 5, es apto)//
			printf("NO APTO \n\n\n");
		else //Si la nota es mayor o igual a 5 y menor igual a 10, es apto)//
			printf("APTO \n\n\n");
			
	printf("ACTIVIDAD 2 \n");
	
	//*********ACTIVIDAD 2*********//
	int d; //dia//
	
	printf("Ingrese un dia de la semana representado con un numero \n");
	scanf("%d",&d);
	
	//Estos if evaluarán si el valor de ´d´ es exactamente igual a los numeros del 1-7, para saber si se trata de un dia de la semana//
	if(d==1)
		printf("El dia es lunes \n\n");
	else
		if(d==2)
			printf("El dia es martes \n\n");
		else
			if(d==3)
				printf("El dia es miercoles \n\n");
			else 
				if(d==4)
					printf("El dia es jueves \n\n");
				else
					if(d==5)
						printf("El dia es viernes \n\n");
					else 
						if(d==6)
							printf("El dia es sabado \n\n");
						else  
							if(d==7)
								printf("EL dia es domingo \n\n");
							else
								printf("ERROR: Dia Incorrecto \n\n");
		
	//*********ACTIVIDAD EXTRA*********//
	printf("ACTIVIDAD EXTRA \n");
	
	int o; //opción//
	
	printf("Escoga una opcion \n");
	scanf("%d",&o);
	
	if(o==1)
		printf("Usted escogio la opcion %d",o);
	else
		if(d==2)
			printf("Usted escogio la opcion %d \n\n",o);
		else
			if(d==3)
				printf("Usted escogio la opcion %d \n\n",o);
			else 
				if(d==4)
					printf("Usted escogio la opcion %d \n\n",o);
				else
					if(d==5)
						printf("Usted escogio la opcion %d \n\n",o);
					else 
						if(d==6)
							printf("Usted escogio la opcion %d \n\n",o);
						else  
							if(d==7)
								printf("Usted escogio la opcion %d \n\n",o);
							else
								if(d>8)
									printf("Usted escogio la opcion %d \n\n",o);
									

	return 0;
		
}			
	
