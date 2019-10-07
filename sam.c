#include<stdio.h>
int main()
{
int x = 5;
int *address_of_x = &x;
int value_stored = *address_of_x;
*address_of_x = 99;

}
