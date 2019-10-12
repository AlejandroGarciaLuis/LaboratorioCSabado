#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	/* Alejandro García Luis
	   12/10/2019
	   Grupo 008
	   Sábados 9am-11am
	   1846616 */
	setlocale(LC_ALL,"spanish");
	char pal[40], pal2[40];
	int n,i,x,a=0,p=0,e=0;
	char b=' ';
	printf("******ACTIVIDAD 1******\n\n");
	printf("Ingrese una frase: \n");
	gets(pal);
	n=strlen(pal); //cuenta el numero de caracteres//
	for(i=0;i<=n;i++)
	{
					if(pal[i]==b)
					i++;
					pal2[e]=pal[i];
					e++;
					}
					for(x=n-1;x>=0;x--){
						printf("\n %c \t",pal[x]);
						x=0;
						n=strlen(pal2);
						for(x=n-1;x>=0;x--){
							if(pal2[x]==pal2[a])
							p++;
							a++;
						}
					}
	if(p==n){
		printf("La frase es palíndromo \n");
	}else{
		printf("La frase no es palíndromo \n");
}

	printf("******ACTIVIDAD 2******\n\n");
	

return 0;
}
