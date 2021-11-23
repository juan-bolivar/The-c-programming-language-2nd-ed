#include <stdio.h>
#include <ctype.h>

#define max_len 25


main(){

  int feq_letters[max_len];
  int i,j,c,size;
  
  for (i=0 ; i <= max_len ; i++)
    feq_letters[i] = 0;

  size = 0;
  
  while ((c = tolower(getchar())) != EOF){

    if (c != ' ' && c != '\n' && c!= '\t' ){
      
      ++feq_letters[c-'a'];
      
    }
	

  }
  
  printf("---------------------------------\n");
  for (i = 0 ; i <=max_len ; i++){
    printf("letter %c |",i+'a');
    for(j = 1; j <= feq_letters[i] ; j++){
      printf("*");
    }
    printf("\n");
    printf("---------------------------------\n");
  }
}
