#include <stdio.h>

#define MAXLINE 1000000 


int getline(char line[] );
void copy(char to[] , char from[]);
void reverse(char input[] , char output[] , int size_input);

main(){
  int len;
  int max;

  char line[MAXLINE];
  char line_reverse[MAXLINE];

  max=0;
  while (( len = getline(line)) != -1)
    reverse(line , line_reverse, len);


  return 0;

}


void reverse(char input[] , char output[] , int size_input){
  
  int i = 0;


  while(input[i] != '\n' && input[i] != '\0') {

    output[size_input - i - 1 ] = input[i];
    ++i;
  }
  
  output[i] = '\n';
  output[i+1] = '\0';
  
  printf("%s" ,  output);
}


int getline(char s[]){

  int c,i;
  i = 0;
  while ((c=getchar())!=EOF && c!='\n'){
       s[i] = c;
       ++i;
  }
  s[i] =  c;
  s[i+1] = '\0';
  if(c == EOF){
    return -1;
  }
  return i;

}
