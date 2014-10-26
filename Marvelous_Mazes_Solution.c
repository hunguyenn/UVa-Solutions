//UVa Problem 445: Marvelous Mazes

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

 char current;
 int count = 0, i;

 while( scanf( "%c", &current ) == 1 )
 {
    if( isdigit(current) ) 
    {
      count += (current - '0');
    }
    else 
    {
      if( current == 'b' ) 
      {
        for( i = 0; i < count; i++ )
          printf(" ");
      }
      else if( ( current >= 'A' && current <= 'Z' ) || current == '*' ) 
      {
        for( i = 0; i < count; i++ )
          printf( "%c", current );
      }
      else 
      {
        printf("\n");
      }
     count = 0;
    }
 }
 return 0;
}
