/* 12fr078 Ketaro Takeuchi */
#include <stdio.h>
int main(int argc, char const* argv[])
{
  int input,result;

  scanf("%d", &input);
  result = input % 3;

  switch (result) {
    case 0:
             printf("zero\n");
               break;
    case 1:
             printf("one\n");
               break;
    case 2:
             printf("two\n");
               break;
    default:
               break;
  }
  return 0;
}
