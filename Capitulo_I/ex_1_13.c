#include <stdio.h>

#define max_len 20


main(){

  int lenwords[max_len];
  int i,j,c,size;
  
  for (i=0 ; i <= max_len ; i++)
    lenwords[i] = 0;

  size = 0;
  
  while ((c = getchar()) != EOF){

    if (c != ' ' && c != '\n' && c!= '\t' ){
      
      ++size;
      
    }
    else {

      ++lenwords[size]; 
      size = 0;
      
    }
	

  }
  
  printf("---------------------------------\n");
  for (i = 0 ; i <=max_len ; i++){
    printf("size %d |",i);
    for(j = 1; j <= lenwords[i] ; j++){
      printf("#");
    }
    printf("\n");
    printf("---------------------------------\n");
  }
}
