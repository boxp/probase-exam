#include <stdio.h>
#include <math.h>
int main(int argc, char const* argv[])
{
  double x,y;
  scanf("%lf%lf", &x,&y);
  
  printf("%lf\n", sqrt(pow(x,2)+pow(x,2)));
  return 0;
}
