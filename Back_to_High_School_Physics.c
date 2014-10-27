//UVa Problem 10071: Back to High School Physics

#include <stdio.h>

int main() {

  int a, b;

  while( scanf( "%d %d", &a, &b ) == 2 ) {
    printf( "%d\n", a*(2*b) );
  }

  return 0;
}
