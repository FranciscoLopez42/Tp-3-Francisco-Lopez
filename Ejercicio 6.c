#include <stdio.h>
#include <stdlib.h>

void octava(int a){
	float oct=a/8;
	printf("La octava parte de su numero es: %f\n",oct);
}
	int main (){
		float a,oct;
		printf("Ingrese un numero: ");
		scanf("%f",&a);
		octava(a);
		
		system("pause");
		return 0;
	}
