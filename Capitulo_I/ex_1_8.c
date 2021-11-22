#include <stdio.h>

main()

{	
	int c;
	int number_tabs , number_blanks , number_newlines;
	
	number_tabs = 0;
	number_blanks = 0 ;
	number_newlines = 0;

	while((c = getchar()) != EOF){
	
		if (c == '\t'){
		
			number_tabs = number_tabs + 1;	

		
		}
		if (c == '\n'){
		
			number_newlines = number_newlines + 1;	

		
		}

		if (c == ' '){
		
			number_blanks = number_blanks + 1;	

		
		}
		
	
	}


	printf("Number of tabs %d \n" , number_tabs);	
	printf("Number of newlines %d \n" , number_newlines);	
	printf("Number of blanks %d \n" , number_blanks);	

}

