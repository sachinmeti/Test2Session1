#include <stdio.h>
#include<math.h>
void input(float*x1,float*y1,float*x2,float*y2)
{
  printf("Enter the x coordinate of first point:");
  scanf("%f",x1);
  printf("Enter the y coordinate of first point:");
  scanf("%f",y1);
  printf("Enter the x coordinate of second point:");
  scanf("%f",x2);
  printf("Enter the y coordinate of second point");
  scanf("%f",y2);
}
void find_distance(float x1,float y1,float x2,float y2,float*area)
{
 float distance;
  *area = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
void output(float x1, float y1,float x2,float y2,float area)
{
  printf("The distance between point (%f,%f) and (%f,%f) is with %f",x1,y1,x2,y2,area);
}
int main()
{
  float x1,y1,x2,y2,area;
  input(&x1,&y1,&x2,&y2);
  find_distance(x1,y1,x2,y2,&area);
  output(x1,y1,x2,y2,area);
  return 0;
}