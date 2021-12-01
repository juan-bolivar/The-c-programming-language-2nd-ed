#include <stdio.h>
#include <math.h>

#define MAX_LINE 1000

int htoi();

main(){

  int s;
  s = htoi();
  printf("%d \n",s);
  return 0;
}


int htoi(){

  int i=0;
  int output;
  int c ;
  char s[MAX_LINE];
  while( (c=getchar())!= '\0' && c != EOF){
    s[i++] = c;
  }
  /* } */

  /* printf("%d",i); */

  
  int valor = 0;
  int j;

  /* FALTA LA PARTE OPCIONAL */
  
  for(j = 0 ; j <= i ; j++){
    if( s[j] == 'A'  || s[j] == 'B' || s[j] == 'C' || s[j] == 'D' || s[j] == 'E' || s[j] == 'F'){
      valor = valor + (s[j]-'A'+10)*pow(16,i-j-1);
    }
    else if( s[j] == 'a' || s[j] == 'b' || s[j] == 'c' || s[j] == 'd'  || s[j]=='e'){
      valor = valor + (s[j]-'a'+10)*pow(16,i-j-1);;
    }else if (s[j] >= '0' && s[j] <= '9'){
      valor = valor + (s[j] -'0')*pow(16,i-j-1);;
    }
    else{
    }
  }

  return valor;
}



