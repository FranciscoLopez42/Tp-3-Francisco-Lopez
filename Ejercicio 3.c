#include <stdio.h>
#include <stdlib.h>
void porcentajes (int h, int m){
	float ph=h*100/(h+m);
	float pm=m*100/(h+m);
	printf("El porcentaje de hombres es: %f\n", ph);
	printf("El porcentaje de mujeres es: %f\n", pm);
}
		int main(){
			float h,m;
			printf("Ingrese la cantidad de hombres: \n");
			scanf("%f",&h);
			printf("Ingrese la cantidad de mujeres: \n");
			scanf("%f",&m);
			porcentajes(h,m);

			system("pause");
			return 0;
		}
