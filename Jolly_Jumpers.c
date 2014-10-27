//UVa Problem 10038: Jolly Jumpers

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
  
  int num, i, nums[3000], diff[3000];
  int jolly = 1;
  
  while( scanf( "%d", &num ) == 1 ) {
    
    for( i = 0; i < num; i++ ) {
      scanf( "%d", &nums[i] );
      diff[i] = 0;
    }
    
    for( i = 0; i < (num -1); i++ ) {
      diff[ abs( nums[i] - nums[i+1] ) ] = 1;
    }
    
    for( i = 1; i < num; i++ ) {
      if( !diff[i] ) {
        jolly = 0;
        break;
      }
    }
    
    if( jolly ) {
      printf( "Jolly\n" );
    }
    else {
      printf( "Not jolly\n" );
    }
  }
  return 0;
}
