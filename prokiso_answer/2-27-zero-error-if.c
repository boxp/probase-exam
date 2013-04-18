/* 12fr078 Ketaro Takeuchi */
#include <stdio.h>
int main(int argc, char const* argv[])
{
  int input;
  scanf("%d", &input);

  if (input%3==0) {
    printf("zero\n");
  }
  else if (input%3==1) {
    printf("one\n");
  }
  else if (input%3==2) {
    printf("two\n");
  }
  else {
    printf("error\n");
  }
  return 0;
}
