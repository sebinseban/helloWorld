#include<stdio.h>
char c = 'a';
int main(void)
{
int num=0;
int numm = 5;
int seb = 4;
int peak= 7;
printf("num is stored at %d\n", &num);

printf("char is stored at %p\n", &c);
printf("numm is stored at %p\n", &numm);
printf("seb is stored at %p\n", &seb);
printf("peak is stored at %p\n", &peak);
return 0;


}
