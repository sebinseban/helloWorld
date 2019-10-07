#include<stdio.h>
 
#include<math.h>

int main()
{
float a,b,c,s,area;

printf("enter the three sides of the triangle\n");
scanf("%f %f %f", &a, &b, &c);

s= (a + b + c)/2;
area = sqrt(s*(s-a)*(s-b)*(s-c));
printf("\nthe area of the triangle with sides %f,%f and %f are: %f \n", a,b,c,area);

return 0;

}


