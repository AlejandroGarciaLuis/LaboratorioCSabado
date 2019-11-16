#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Alejandro García Luis
16/11/20219
Grupo 008
Sabados 9-11am
1846616 */
int main(){
	//******ACTIVIDAD 1******//
	setlocale(LC_ALL,"spanish");
	char ifilename[]="practica.txt";
	char ofilename[]="archivo_alreves.txt";
	char cadena[20];
	char nuevacad[20];
	char pro[10]="procesado";
	int i,j;
	
	FILE *ifp, *ofp;
	ifp=fopen(ifilename,"r");
	
	while (fgets(cadena, sizeof cadena, ifp) != NULL) {
    
	printf("\n %s \n",cadena);
}
    ofp=fopen(ofilename,"w");
    while(cadena[i]!='\0'){
        i++;
    }
    fprintf(ofp,"La cadena al revés es:\n\t");
    for (j=i-1; j>=0; j--){
        fprintf(ofp,"%c",cadena[j]);
    }
    fclose(ofp);
    fclose(ifp);
    
    ifp=fopen(ifilename,"w");
    fprintf(ifp,"%s",pro);
    fclose(ifp);
    
    //******ACTIVIDAD 2******//
    char afilename[]="numeros.txt";
    char efilename[]="suma.txt";
    int suma, a, b;
    
    FILE *afp, *efp;
    afp=fopen(afilename,"r");
    fscanf(afp,"%d %d",&a,&b);
    efp=fopen(efilename,"w");
    fprintf(efp,"la suma de los dos números es %d",a+b);
    fclose(efp);
    fclose(afp);
}
