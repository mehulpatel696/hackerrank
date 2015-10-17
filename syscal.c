
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define NOSYSCALL
#ifdef NOSYSCALL
int getPid() {return 55;}
#endif 
 int main( int argc, char * argv[] ) {
 int i, a, limit = atoi(argv[1]);
 clock_t start, end;
 start = clock();
 for( i = 0; i < limit; ++i ){
	 a = getPid();
 }
 end = clock() - start;
 printf("Seconds: %f seconds.\n",(float)end/CLOCKS_PER_SEC);
}
