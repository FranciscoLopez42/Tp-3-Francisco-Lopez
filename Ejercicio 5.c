#include <stdio.h>
#include <stdlib.h>

void resistencias (int r1, int r2, int r3, int r4, int r5){
	int rt=r1+r2+r3+r4+r5;
	printf("La resistencia total es: %d\n",rt);
}
	int main (){
		int r1,r2,r3,r4,r5,rt;
		printf("Ingrese las 5 resistencias: \n");
		scanf("%d",&r1);
		scanf("%d",&r2);
		scanf("%d",&r3);
		scanf("%d",&r4);
		scanf("%d",&r5);
		resistencias(r1,r2,r3,r4,r5);
		
		system("pause");
		return 0;
	}
