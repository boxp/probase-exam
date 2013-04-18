/* 12fr078 Ketaro Takeuchi */
#include <stdio.h>
int main(int argc, char const* argv[])
{
  int a;
  scanf("%d", &a);
  if (a%2==0) {
    printf("OK\n");
  } 

  else if(a%3==0) {
    printf("OK\n");
  } else {
    printf("NG\n");
  }
  return 0;
}
