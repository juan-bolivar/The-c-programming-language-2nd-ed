#include <stdio.h>


#define MAXLINE 1000000 


int getline(char line[] );

main(){
  
  int len;
  char line[MAXLINE];

  int line_n = 0;

  while (( len = getline(line)) != -1)
    if (len > 1){
    printf("%s" , line);
    }

   return 0;
  
} 


int getline(char s[]){

  int c,i;
  i = 0;

  while ((c=getchar())!=EOF && c!='\n'){
    if( (c==' ' || c=='\t') && i==0){
      i = i;
      s[i] = 'a';
    }
    
    else{
      
      s[i] = c;
      ++i;
      
    }
  }
  s[i] =  c;
  s[i+1] = '\0';

   if(c == EOF){

    return -1;
    
   }else{


  return i;
   }
}



