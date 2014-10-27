//UVa Problem 458: The Decoder

#include <stdio.h>
#include <string.h>

int main() {
  
  char ch;

  while( scanf( "%c", &ch ) == 1 ) {
   
   if( ch == '\n' )
     printf( "\n" );
   else 
     printf( "%c", ch - 7 );
  
  }
  return 0;
}
