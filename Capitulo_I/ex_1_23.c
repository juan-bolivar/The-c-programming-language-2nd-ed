#include <stdio.h>


#define n_cols 5
#define MAXLINE 10000


main(){

  int c,i;
  i = 0;
  char ant = ' ';
  int  comment = 0;
  int  in_comment = 0;
  
  while ((c=getchar())!=EOF){

    if( (c == '*') && ( ant == '/')){
	comment = 1;
	in_comment = 1;
      }

    if (comment==1) {

      if( (c == '/') && (ant == '*')){

	comment = 0 ;
	  
      }
    }
    else{

      if(in_comment == 0) {
	putchar(ant);
      }
      else{
	in_comment = 0;
      }

    }
    ant = c;
  }
  putchar('\n');
  return 0;
}


