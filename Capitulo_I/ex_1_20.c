#include <stdio.h>

#define n_cols 1 



main(){
  int c; 
  int i ;


  
  while (( c = getchar()) != EOF)
    if( c !='\t'){

      putchar(c);

    }

    else{

      for(i=0 ; i <= n_cols ; i++) {
	putchar(' ');
      } 

    }
    
  return 0;

}


