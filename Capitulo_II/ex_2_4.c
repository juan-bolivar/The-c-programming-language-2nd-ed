#include <stdio.h>

#define MAX_LINE 1000

void squeeze(char s1[], char s2[]);

main(){

  char s1[] = "asdfg";
  char s2[] = "estoes una prueba sdf";

  squeeze(s1 , s2);
  printf("%s \n",s1);
  return 0;
}


void squeeze(char s1[], char s2[]){
  
  int i,j,k;
  i=j=k=0;
  int content=0;
  
  for( i=0 ; s1[i]!='\0' ; i++){
    j=0;
    while((s2[j]!= '\0')){
	if(s1[i]==s2[j]){
	  content=1;
	}
	j++;
      }

    if(content==0){
      s1[k++]=s1[i];
    }
    content=0;
  }
  s1[k]='\0';
}
  

