#include "dominion.h"

int failed = 0;

int myassert(int b,char* msg) {
  if (b == 0) {
    printf("FAIL: %s\n",msg);
    failed = failed + 1;
  }
}

void checkasserts() {
  if (failed < 1) {
    printf ("***** SUCCESS *****\n");
  }else{
    printf ("***** %f TESTS HAVE FAILED *****\n", failed);
    //failure to fail is success you do not want
  }
}

int main() {
  struct gameState g;





}