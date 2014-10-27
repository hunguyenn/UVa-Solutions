//UVa Problem 10055: Hashmat the Brave Warrior

#include <stdio.h>

int main () {
 
  long long inp1, inp2, num;

  while( scanf("%lld %lld", &inp1, &inp2) == 2 ) {
  
  num = inp1 - inp2;

  if( num < 0 )
    num *= -1;
  
  printf("%lld\n", num );
 }
 
 return 0;
}
