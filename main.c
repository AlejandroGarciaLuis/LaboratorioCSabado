#include <stdio.h>
/*
	Alejandro Garcia Luis
	31/08/2019
	Grupo 08
	Sábados 9-11 am
	1846616
*/
int main(){
	//******ACTIVIDAD 1******//
	//Programa que pida dos numeros e imprima cual es mas grande//
	int a;
	int b;
	
	printf("Ingrese un numero \n");
	scanf("%d",&a);
	printf("Ingrese otro numero \n");
	scanf("%d",&b);
	
	//Este if analizara si el numero ´a´ es mayor al ´b´, en caso de ser correcto, imrpimirá que el número mayor es ´a´ y si no, ´b´//
	if(a>b){
		printf("El numero mas grande es %d \n\n\n",a);
	}else
		printf("El numero mas grande es %d \n\n\n",b);
	
	
	//******ACTIVIDAD 2******//
	printf("ACTIVIDAD 2 \n");
	int A=5;
	int B=3;
	int C=-12;
	
	printf("Para los valores A=5, B=3 y C=-12 \n");
	//Este if analizará si el valor de A es menor a 3//
	if(A<3){
		printf("A<3=Verdadero \n");
	}else{
		printf("A<3=Falso \n");}
	
	//Este if analizará si el valor de A es menor al valor de C//
	if(A<C){
		printf("A<C es Verdadero \n");
	}else{
		printf("A<C es Falso \n");}
	
	//Este if analizará si el valor de B es diferente al valor de C//
	if(B != C){
		printf("B!<C es Verdadero \n");
	}else{
		printf("B!<C es Falso \n");}
	
	//Este if analizará si el Valor de A es exactamente igual a 3// 
	if(A==3){
		printf("A==3 es Verdadero \n");
	}else{
		printf("A==3 es Falso \n");}
	
	//Este if analizará si el valor de A multiplicado por el valor de B es exactamente igual a 15//
	if(A*B==15){
		printf("A*B==15 es Verdadero \n");
	}else{
		printf("A*B==15 es Falso \n");}
	
	//Este if analizará si el valor de C dividido entre el valor de B es menor a el valor de A//
	if(C/B<A){
		printf("C/B<A es Verdadero \n");
	}else{
		printf("C/B<A es Falso \n");}
		
	//Este if analizará si el valor de C dividido entre el valor de B es exactamente igual a -10//
	if(C/B==-10){
		printf("C/B==-10 es Verdadero \n");
	}else{
		printf("C/B==-10 es Falso \n");}
		
	//Este if analizará si la suma de todos los valores es exactamente igual a 5//
	if(A+B+C==5){
		printf("A+B+C==5 es Verdadero \n");
	}else{
		printf("A+B+C==5 es Falso \n");}
		
	/*Este if analizará si el valor de A sumado con el valor de B es exactamente igual a 8 y que de A restado 
	con el valor de B es exactamente igual a -2*/
	if(A+B==8 && A-B==-2){
		printf("A+B==8 && A-B==-2 es Verdadero \n");
	}else{
		printf("A+B==8 && A-B==-2 es Falso \n");}
		
	/*Este if analizará si el valor de A sumado con el valor de B es exactamente a 8 o que el valor de A restado 
	con el valor de B es exactamente igual a 6*/
	if(A+B==8 || A-B==6){
		printf("A+B==8 || A-B==6 es Verdadero \n");
	}else{
		printf("A+B==8 || A-B==6 es Falso \n");}
	
	//Este if analizará si los tres valores son menores a 3//
	if(A<3 && B<3 && C<3){
		printf("A<3 && B<3 && C<3 es Verdadero \n");
	}else{
		printf("A<3 && B<3 && C<3 es Falso \n\n\n");}
	
	//******ACTIVIDAD EXTRA******//
	int x;
	int y;
	int z;
	
	printf("ACTVIVIDAD EXTRA \n");
	//Este mensaje pedirá al usuario que introduzca los tres valores con los que el programa trabajará//
	printf("Ingrese tres numeros \n");
	scanf("%d%d%d",&x,&y,&z);
	
	printf("Para los valores x=%d, y=%d y z=%d \n",x,y,z);
	//Este if analizará si el valor de x es menor a 3//
	if(x<3){
		printf("A<3=Verdadero \n");
	}else{
		printf("A<3=Falso \n");}
	
	//Este if analizará si el valor de x es menor al valor de z//
	if(x<z){
		printf("A<C es Verdadero \n");
	}else{
		printf("A<C es Falso \n");}
	
	//Este if analizará si el valor de y es diferente al valor de z//
	if(y != z){
		printf("B!<C es Verdadero \n");
	}else{
		printf("B!<C es Falso \n");}
	
	//Este if analizará si el Valor de x es exactamente igual a 3// 
	if(x==3){
		printf("A==3 es Verdadero \n");
	}else{
		printf("A==3 es Falso \n");}
	
	//Este if analizará si el valor de x multiplicado por el valor de y es exactamente igual a 15//
	if(x*y==15){
		printf("A*B==15 es Verdadero \n");
	}else{
		printf("A*B==15 es Falso \n");}
	
	//Este if analizará si el valor de z dividido entre el valor de y es menor a el valor de x//
	if(z/y<x){
		printf("C/B<A es Verdadero \n");
	}else{
		printf("C/B<A es Falso \n");}
		
	//Este if analizará si el valor de z dividido entre el valor de y es exactamente igual a -10//
	if(z/y==-10){
		printf("C/B==-10 es Verdadero \n");
	}else{
		printf("C/B==-10 es Falso \n");}
		
	//Este if analizará si la suma de todos los valores es exactamente igual a 5//
	if(x+y+z==5){
		printf("A+B+C==5 es Verdadero \n");
	}else{
		printf("A+B+C==5 es Falso \n");}
		
	/*Este if analizará si el valor de x sumado con el valor de y es exactamente igual a 8 y que de x restado 
	con el valor de y es exactamente igual a -2*/
	if(x+y==8 && x-y==-2){
		printf("A+B==8 && A-B==-2 es Verdadero \n");
	}else{
		printf("A+B==8 && A-B==-2 es Falso \n");}
		
	/*Este if analizará si el valor de x sumado con el valor de y es exactamente a 8 o que el valor de x restado 
	con el valor de y es exactamente igual a 6*/
	if(x+y==8 || x-y==6){
		printf("A+B==8 || A-B==6 es Verdadero \n");
	}else{
		printf("A+B==8 || A-B==6 es Falso \n");}
	
	//Este if analizará si los tres valores son menores a 3//
	if(x<3 && y<3 && z<3){
		printf("A<3 && B<3 && C<3 es Verdadero \n");
	}else{
		printf("A<3 && B<3 && C<3 es Falso \n");}
	
	return 0;
}
