#include <stdio.h>


int main()
{
	int a[6] = {};
	int b[6] = {};
	int pass;
	int i;
	int temp;
	

	printf("Input Data : otems in original order\n");

	for (i = 0; i < 6; i++) {
		scanf_s("%d", &a[i]);
		
     }
	
	for (i = 0; i < 6; i++) {

		b[i] = a[i];
	}
	for (pass = 1; pass < 6; pass++)
	{
		
		
		for (i = 0; i < 6 - 1; i++)
		{
			if (a[i] > a[i + 1])
			{
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;

			}
			
		}
	}
    printf("Data otems in original order\n");
	for (i = 0; i < 6; i++) {

		printf("\t%4d", b[i]);
	}
	printf("\n\nData items in ascending order \n");

		for (i = 0; i < 6; i++)
			printf("\t%4d", a[i]);

		printf("\n\n");

		return(0);

}   