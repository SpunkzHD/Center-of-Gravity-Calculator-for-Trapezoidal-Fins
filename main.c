#include <stdio.h>
#include <math.h>

double obtain_x(double a, double b, double h, double c);
double obtain_y(double a, double b, double h, double c);

int main(void) {
  double a,b,h,c;
  double xc,yc;
  printf("Please enter the shorter side (tip chord)\n");
  scanf("%lf",&a);

  printf("Please enter the longer side (root chord)\n");
  scanf("%lf",&b);

  printf("Please enter the difference between the two sides (sweep)\n");
  scanf("%lf",&h);

  printf("Please enter the distance between the parallel sides (semi-span)\n");
  scanf("%lf",&c);

  xc = obtain_x(a,b,h,c);
  yc = obtain_y(a,b,h,c);

  printf("Your centroid is located at (%.3f, %.3f)\n", xc, yc);

  return 0;
}

double obtain_x(double a, double b, double h, double c) {
  double resultx = (2*a*c+a*a+c*b+b*b)/(3*(a+b));
  return resultx;
}

double obtain_y(double a, double b, double h, double c) {
  double resulty = h*(2*a+b)/(3*(a+b));
  return resulty;
}
