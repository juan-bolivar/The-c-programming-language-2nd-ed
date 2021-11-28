#include <stdio.h>


#define n_cols 5
#define MAXLINE 10000



int getline(char line[] );

main(){


  int inf , sup , pos , len;
  char line[MAXLINE];

  /* while there's line*/
  while( (len = getline(line)) != -1 ){
    inf = 0; /*starts at position 0*/

    while ( inf < len) {


      sup = inf + n_cols ;

      if ( sup > len) {
	sup = len;
      }

      while(line[sup]==' ' && sup > inf){
	sup = sup -1;
      }

      if(sup == inf ) {
	sup = inf + n_cols;
      }


      for( pos= inf ; pos < sup ; pos++) {
	if(line[pos]!='\n'){
	putchar(line[pos]);
	}
      }

      putchar('\n');
      
    inf = sup   ;
    }


  }
  
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
    
   }else{


  return i;
   }
}



