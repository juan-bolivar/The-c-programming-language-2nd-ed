#include <stdio.h>
#include <limits.h>

#define MAXLINE 1000000 


int getline(char line[] );
void copy(char to[] , char from[]);

main(){
  int len;
  int max;

  char line[MAXLINE];
  char longest[MAXLINE];

  max=0;
  while (( len = getline(line)) != -1)
    if (len > max){
      max = len;
      copy(longest, line);

    }
  if( max > 0 )
    printf("%s \n" , longest);

  return 0;

}


int getline(char s[]){

  int c,i;
  i = 0;
  while ((c=getchar())!=EOF && c!='\n'){
       s[i] = c;
       ++i;
  }
  s[i+1] =  c;
  s[i+2] = '\0';
  if(c == EOF){

    return -1;
    
  }
  return i;

}



void copy(char to[] , char from[])
{

  int i;

  i=0;

  while((to[i] = from[i])!='\0')
    ++i;

}
