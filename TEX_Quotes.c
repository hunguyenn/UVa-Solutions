//UVa Problem 272: Tex Quotes

#include <stdio.h>

int main () {
  
  char ch; int num = 1; 
  
  while( scanf( "%c", &ch ) == 1 ) {
   
    if( ch == '"' ) {
     
      if( num == 1 ) {
        printf( "``" );
        num++;
      }
      else {
        printf( "''" );
        num--;
      }    
    }
    else
      printf( "%c", ch );
  }
 return 0;
}
