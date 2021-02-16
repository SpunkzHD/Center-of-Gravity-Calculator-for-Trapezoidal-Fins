#include <stdio.h>
#include <math.h>

double obtain_x(double a, double b, double h, double d);
double obtain_y(double a, double b, double h, double d);

int main(void) {
  double a,b,h,d;
  double xc,yc;
  printf("Please enter the shorter side (tip chord)\n");
  scanf("%lf",&a);

  printf("Please enter the longer side (root chord)\n");
  scanf("%lf",&b);

  printf("Please enter the difference between the two sides (sweep)\n");
  scanf("%lf",&h);

  printf("Please enter the distance between the parallel sides (semi-span)\n");
  scanf("%lf",&d);

  xc = obtain_x(a,b,h,d);
  yc = obtain_y(a,b,h,d);

  printf("Your centroid is located at (%.3f, %.3f)\n", xc, yc);

  return 0;
}

double obtain_x(double a, double b, double h, double d) {
  int resultx;
  return 1;
}

double obtain_y(double a, double b, double h, double d) {
  int resulty;
  return 0;
}
