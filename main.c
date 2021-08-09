#include <stdio.h>
#include <conio.h>

int main ()
{
	int i, t, o;
	printf("\n\tTABLA DE MULTIPLCAR\n\n");
	printf("Ingresa el numero positivo: ");
	scanf("%d", &t);

	for (i=0; i<=10; i++){
		o=i*t;
		printf(" %d * %d = %d \n", t, i, o);

	}

	return 0;

}
