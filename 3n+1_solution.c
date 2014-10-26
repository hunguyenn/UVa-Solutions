//UVa Problem 100: 3n + 1

#include <stdio.h>

int main () {

  int n, n1, n2, temp, i, count, pastCount;

  while (scanf("%d %d", &n1, &n2) == 2)
  {
  printf( "%d %d", n1, n2 );
  
    if( n2 < n1 )
    {
      temp = n2;
      n2 = n1;
      n1 = temp;
    }
  
  pastCount = -1;
  
  for( i = n1; i<= n2; i++ )
  {
    n = i;
    count = 1;
    while ( n != 1 )
    {
      if ( n % 2 == 0 )
        n = n/2;
      else
        n = 3*n + 1;

      count++;
    }

  if( count > pastCount )
    pastCount = count;
  }

  printf( " %d\n", pastCount );
  pastCount = -1;
  
  }
  return 0;
}
