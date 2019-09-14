#include <stdio.h>
#include <locale.h>
/*  Alejandro García Luis
	14/09/2019
	Grupo 008
	Sábados 9am-11am
	1846616	*/

int main(){
	setlocale(LC_ALL, "spanish");
	// **************ACTIVIDAD 1***************** //
	printf("ACTIVIDAD 1 \n");
	int x,y,sum=0; //variable 'x' para el numero introducido, 'y' para el for y 'sum' para la suma de los numeros// 
	char l; //´l´ para el si o no//
	
	printf("Introduzca un número \n"); //el usuario ingresará el primer numero//
	scanf("%d",&x); //inmediatamente lo sumará a la variable 'sum'//
	sum=sum+x;
	
	for(y=0; y<1000; y++){ 
		printf("Desea introducir otro número? (s/n) \n"); //el usuario decidirá si desea agregar otro numero//
		scanf("%s",&l); //su respuesta se guardará en la variable tipo caracter 'l'//
		if(l=='s'){ //Este if evaluará si la variable 'l' es exactamente igual a 's'//
			printf("Introduzca otro número \n");
			scanf("%d",&x);
			sum=sum+x;
		}else if(l=='n') //Cuando la variable sea exactamente igual a 'n', el for se cerrará...//
		break; //para cerrar el for//
	}
	printf("La suma de los números es igual a %d \n\n\n",sum); //... y la suma de los numero introducidos se imprimirá//
	
	// **************ACTIVIDAD 2***************** //
	printf("ACTIVIDAD 2 \n");
	int a; //'a' es para el número introducido por el usuario//
	
	printf("Introducir un número");
		do
		{
			scanf("%d",&a);
			printf("%d \n",a);
		} while(a<100);
	printf("Número mayor a 100");
	
	return 0;
}

