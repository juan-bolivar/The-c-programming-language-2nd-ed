#include <stdio.h>

main()
{

	float fahr , celsius;
	int i , lower, upper , step;

	lower = 0;
	upper = 300;
	step = 20;

	printf(" |  Fahrenheit | Celsius |\n");
	printf("-------------------------|\n");
	for ( i= lower; i <= upper ; i = i+step){


	printf(" |      %3d    | %3.3f   | \n" , i , (5.0/9.0)*(i - 32));

	
	}

}

