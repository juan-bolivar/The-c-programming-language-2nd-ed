#include <stdio.h>

#define IN 1
#define OUT 0


main(){

	int c, state;

	state = OUT;

	while((c = getchar()) != EOF){
		

		if (c != ' ' && c != '\n' && c!= '\t' ){
			
			putchar(c);
			state = IN;
		
		}
		else if (state == IN){
		
			putchar('\n');
			state = OUT;
		
		}
	
	
	}

	return 0;




}
