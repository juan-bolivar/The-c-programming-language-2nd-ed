#include <stdio.h>

#define IN 1
#define OUT 0


main(){

	int c,state_old , state_new;

	state_old = OUT;
	state_new = OUT;


	while((c = getchar()) != EOF){
		
			

		if (c == ' ' || c == '\n' || c== '\t' ){
			
			state_old = state_new;			
			state_new = IN;
		
		}

		if (state_new == OUT & state_old==IN){
			putchar('\n');
			putchar(c);
			state_old = state_new;
			state_new = OUT;
		}

		if ( (state_old == OUT) & (state_new==OUT) ){ 
			
			putchar(c);
		}

	
	
	}

	return 0;




}
