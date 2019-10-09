#include <stdio.h>
#include <locale.h>
int main(){
	/* Alejandro García Luis
	   08/10/2019
	   Grupo 008
	   Sabados 9am-11am
	   1846616*/
	   
	setlocale(LC_ALL,"spanish");
	int ventasEmpleadoOficinaEdificio[6][10][2];
	int i,j,k,M;
	
	ventasEmpleadoOficinaEdificio[3][7][2]=4234;
	
	printf("ACTIVIDAD 1 \n");
	printf("El empleado número 3 de la oficina número 7 del edificio número 2 ha vendido %d unidades \n\n",ventasEmpleadoOficinaEdificio[3][7][2]);

	/* De cuántos elementos consiste el arreglo?
			Utilizando este codigo para imprimir un arreglo tridimensional, sabemos que consiste de 120 elementos
	
	for(i = 0; i < 6; i++)
        for(j = 0; j < 10; j++)
            for(k = 0; k < 2; k++)
                ventasEmpleadoOficinaEdificio[i][j][k] = i*4 + j*2 + k;
	
	 for(i = 0; i < 6; i++){
        printf("\nTabla %d:\n", i);
        for(j = 0; j < 10; j++){
            for(k = 0; k < 2; k++)
                printf("M[%d][%d] = %d  ", j, k, ventasEmpleadoOficinaEdificio[i][j][k]);
            printf("\n");
        }
    } */
    
    /* Que ocurre si intentamos mostrar por pantalla un valor con un índice que no está definido para ese array multidimensional?
    		Se imprime con un valor igual a 0
	*/
	
	printf("ACTIVIDAD 2 \n");
	printf("El empleado número 3 de la oficina número 7 del edificio número 2 ha vendido %d unidades \n\n",ventasEmpleadoOficinaEdificio[3][7][2]+10);
}
