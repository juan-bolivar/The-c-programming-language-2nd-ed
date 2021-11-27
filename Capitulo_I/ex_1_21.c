#include <stdio.h>

#define n_cols 8



main(){
  int i , c; 
  int size_spaces , number_spaces , number_tabs ;

  
  while (( c = getchar()) != EOF){
    if( c !=' '){

      putchar(c);

    }

    else{
      size_spaces = 1; 
      while( ( c = getchar() )== ' ' && c!='\n' ){

	++size_spaces;

      }
      number_spaces = size_spaces % n_cols;
      number_tabs   = size_spaces / n_cols;

      /*     printf("espacios: %d , tabs: %d , size: %d" , number_spaces , number_tabs , size_spaces);*/ 
      for (i = 1 ; i <= number_tabs ; i++){
	  
	putchar('\t');
      }

      for ( i =1 ; i<= number_spaces ; i++) {
	putchar(' ');
      }
      putchar(c);
      
    }
  }
  return 0;
}


