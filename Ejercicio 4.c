#include <stdio.h>
#include <stdlib.h>

void presion (int f, int a){
	float p=f/a;
	printf("La presion es: %f\n",p);
}
	int main(){
		int pre,fue,are;
		printf("Ingrese la fuerza: ");
		scanf("%d",&fue);
		printf("Ingrese el area: ");
		scanf("%d",&are);
		presion(fue,are);
		
		system("pause");
		return 0;
	}
