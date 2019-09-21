#include <stdio.h>

/* Alejandro García Luis
	21/09/2019
	Grupo 008
	Sabados 9am-11am
	1846616 */
	
int main(){
	
	//******ACTIVIDAD 1******//
	int x; //para el for//
	float cal; //para cada calificación//
	float calTotal=0; //suma de calificaciones//
	float p; //Promedio//
	printf("ACTIVIDAD 1 \n\n");
	
	for(x=0; x<10; x++){
		printf("Ingrese la calificacion del alumno \n"); //Aquí se le pide al usaurio que ingrese las 10 calificaciones//
		scanf("%f",&cal); //Aquí se almacenarán las calificaciones que el usario vaya ingresando, en una variable flotantes//
		calTotal=(float)calTotal+cal; //Aqui se irá haciendo la suma de dichas calificaciones ...//
	}
	
	p=(float)calTotal/10; //... Para posterioremente calcular el promedio de las mismas//
	if(p>=7.0) //Por último, el programa analizará si el promedio obtenido es mayor o menor a 7, para que el usuario sepa si APROBO O REPROBO//
		printf("Ya que su calificacion final es %.2f, el alumno esta APROBADO \n\n",p);
	else
		printf("Ya que su calificacion final es %.2f, el alumno esta REPROBADO \n\n",p);


	//******ACTIVIDAD 2******//
	int base; //variable base//
	int exp; //variable exponente//
	int y; //para el for//
	int tot; //variable para almacenar el resultado obtenido//
	printf("ACTIVIDAD 2 \n\n");
	
	printf("Ingrese el numero base \n");
	scanf("%d",&base);
	
	printf("Ingrese el numero exponente \n");
	scanf("%d",&exp);
	
	for(y=0; y<exp; y++) //el for solo se bucleará hasta que exp sea mayor a y//
	{
		tot=pow(base,exp); //para calcular el resultado de la potencia//
		printf("%d",base); 
		if(y<exp-1)  //esto es para que al momento de imprimir no aparezca un '*' extra en la operacion//
			printf("*");
	}
	
	printf("=%d",tot); //imprime el resultado//
}








