#include <stdio.h>

#define MAX_LINE 1000

int any(char s1[], char s2[]);

main(){

  char s1[] = "wwasdfg";
  char s2[] = "estoes una prueba sdf";

  int first = any(s1 , s2);
  printf("%d \n",first);
  return 0;
}


int any(char s1[], char s2[]){
  
  int i,j,k;
  i=j=k=0;
  int min=-1;
  
  for( i=0 ; s1[i]!='\0' ; i++){
    j=0;
    while((s2[j]!= '\0')){
      if((s1[i]==s2[j]) && (min==-1)){
	  min=i;
	}
	j++;
      }
  }
  return min;
}
  

