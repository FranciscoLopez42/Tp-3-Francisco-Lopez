#include <stdio.h>
#include <stdlib.h>

void pya (int n1, int n2){
	int p=2*n1+2*n2;
	int a=n1*n2;
	printf("El perimetro es: %d\n", p);
	printf("El area es: %d\n", a);
	}
		int main(){
			int n1,n2;
			printf("Ingrese el primer valor: \n");
			scanf("%d",&n1);
			printf("Ingrese el segundo valor: \n");
			scanf("%d",&n2);
			pya(n1,n2);
			
			
			system("pause");
			return 0;
		}
