#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Alejandro García Luis
  26/10/2019
  Grupo 008
  Sabddos 9-11 am
  1846616 */
int primo(int n, int x){
	x=n%2;
	return primo;	
}

int potencia(b,e){
    int potencia=b,i;
    for(i=0;i<=e;i++){
    	potencia*=potencia;
    }
    return potencia;
}

int main(){
	setlocale(LC_ALL,"spanish");
	printf("\t******ACTIVIDAD 1******\n\n");
	int n,i,primo,x;
	
	printf("Ingrese un número \n");
	scanf("%d",&n);
	
	if(n>0){
		if(primo==1){
			printf("El número es primo \n\n\n");
		}else{
			printf("El número no es primo \n\n\n");
		}
	}else{
		printf("Número no válido \n\n\n");
	}
	
	
	printf("\t******ACTIVIDAD 2******\n");
	int b /*base*/, e/*exponente*/;

	printf("Ingrese el número a elevar \n");	
	scanf("%d",&b);
	printf("Ingrese a que número se va a elevar \n");
	scanf("%d",&e);
	
	
	printf("El resultado de elevar %d a su %d potencia es %d",b,e,potencia);
return 0;
}
