#include <stdio.h>
#include <locale.h>
	/* Alejandro Garc�a Luis
	   08/10/2019
	   Grupo 008
	   Sabados 9am-11am
	   1846616*/
	   
int primo(int n) {
	if(n<1)
	return 0;

	int i,x,ban;
	ban=1;
	x=n/2;
	
	for(i=2; i<=x; i++){
		if(n%i==0) {
			ban= 0;
			break;
		}
	}

	return ban;
}

int potencia(int a,int exp){
	int i, e;
	e=a;
	for(i=1; i<exp; i++){
		e=e*a;
	}
	return e;
}

int main(){
	setlocale(LC_ALL,"spanish");
	printf("******ACTIVIDAD 1******\n\n");

	int n,a,exp;

	printf("Ingrese el numero:\n");
	scanf("%d",&n);
	if(n>0){
		if (primo(n)){
			printf("El n�mero es primo \n\n");
		}else{
			printf("El n�mero no es primo \n\n");
		}
	}else{
		printf("N�mero no v�lido \n");
	}
	printf("******ACTIVIDAD 2******\n\n");
	printf("Ingrese el n�mero a elevar:\n");
	scanf("%d", &a);
	printf("Ingrese el n�mero al que se elevar� el valor anterior \n");
	scanf("%d", &exp);

	printf("%d^%d=%d \n",a,exp,potencia(a,exp));
	
return 0;
}

