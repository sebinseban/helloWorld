#include<stdio.h>
#include<math.h>
int main(void)
{
int x1,x2,y1,y2;
float distance;

printf("\n enter the coordinates of the first point: ");
scanf("%d %d", &x1,&y1);

printf("\n enter the coordinates of the second point: ");
scanf("%d %d ", &x2,&y2);

distance = sqrt(pow((x2-x1),2) + pow((y2-y1),2)) ;

printf("\nthe distance between 2 points is : %f \n", distance);
return 0;
}
