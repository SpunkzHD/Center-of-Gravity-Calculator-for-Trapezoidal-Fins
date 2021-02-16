#include <stdio.h>
#include <math.h>

//note that all units will be in inches

double obtain_x(double a, double b, double h, double c);
double obtain_y(double a, double b, double h, double c);

int main(void) {
  double a,b,c,h;
  double xc,yc;
  printf("Please enter the shorter side (tip chord)\n");
  scanf("%lf",&a);

  printf("Please enter the longer side (root chord)\n");
  scanf("%lf",&b);

  printf("Please enter the difference between the two sides (sweep)\n");
  scanf("%lf",&c);

  printf("Please enter the distance between the parallel sides (semi-span)\n");
  scanf("%lf",&h);

  xc = obtain_x(a,b,c,h);
  yc = obtain_y(a,b,c,h);

  printf("Your centroid is located at (%.4f, %.4f)\n", xc, yc);
  return 0;
}

double obtain_x(double a, double b, double c, double h) {
  double resultx = (2*a*c+a*a+c*b+a*b+b*b)/(3*(a+b));
  return resultx;
}

double obtain_y(double a, double b, double c, double h) {
  double resulty = h*(2*a+b)/(3*(a+b));
  return resulty;
}

/* Test Case 
a = 2.25
b = 12
c = 9.75
h = 4
expected value: (7.88, 1.544)
obtained value: (7.8816, 1.5439)
*/
