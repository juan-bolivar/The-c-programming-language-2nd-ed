#include <stdio.h>

main()
{

	float fahr , celsius;
	int i , lower, upper , step;

	lower = 0;
	upper = 300;
	step = 20;

	printf(" |  Celsius   | Fahrenheit |\n");
	printf("-------------------------|\n");
	for ( i= upper; i >= lower ; i = i-step){


	printf(" |      %3d    | %3.3f   | \n" , i , (9.0/5.0)*(i + 32));

	
	}

}

