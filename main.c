#include <stdio.h>
#include <locale.h>
/*  Alejandro Garc�a Luis
	14/09/2019
	Grupo 008
	S�bados 9am-11am
	1846616	*/

int main(){
	setlocale(LC_ALL, "spanish");
	// **************ACTIVIDAD 1***************** //
	printf("ACTIVIDAD 1 \n");
	int x,y,sum=0; //variable 'x' para el numero introducido, 'y' para el for y 'sum' para la suma de los numeros// 
	char l; //�l� para el si o no//
	
	printf("Introduzca un n�mero \n"); //el usuario ingresar� el primer numero//
	scanf("%d",&x); //inmediatamente lo sumar� a la variable 'sum'//
	sum=sum+x;
	
	for(y=0; y<1000; y++){ 
		printf("Desea introducir otro n�mero? (s/n) \n"); //el usuario decidir� si desea agregar otro numero//
		scanf("%s",&l); //su respuesta se guardar� en la variable tipo caracter 'l'//
		if(l=='s'){ //Este if evaluar� si la variable 'l' es exactamente igual a 's'//
			printf("Introduzca otro n�mero \n");
			scanf("%d",&x);
			sum=sum+x;
		}else if(l=='n') //Cuando la variable sea exactamente igual a 'n', el for se cerrar�...//
		break; //para cerrar el for//
	}
	printf("La suma de los n�meros es igual a %d \n\n\n",sum); //... y la suma de los numero introducidos se imprimir�//
	
	// **************ACTIVIDAD 2***************** //
	printf("ACTIVIDAD 2 \n");
	int a; //'a' es para el n�mero introducido por el usuario//
	
	printf("Introducir un n�mero");
		do
		{
			scanf("%d",&a);
			printf("%d \n",a);
		} while(a<100);
	printf("N�mero mayor a 100");
	
	return 0;
}

