#include<stdio.h>
int main(void)
{
printf("hello world");
printf("\n result: %d%c%f", 23,'q',2.33);
printf("\n result: %d      %c %f", 12, 'a',2.3);
printf("\n result: %d\t%c\t%f", 12, 'q', 2.3);
printf("\n result: %d\t%c\t%6.2f", 12,'q', 234.37154);
printf("\n result: %d\t%c\t%10.5f",12,'q', 2345346.345);
printf("\n result: %10.1f", 21334243.234);
printf("\n result: %5d \t %x \t %#x\n", 234,234,234);
printf("\n result: %5d \t %x \t %#x\n", 2345632, 170, 170);
printf("\n the number is %6d\n",12);
printf("\n the number is %20d\n",1234);
printf("\n the number is %-6d", 1234);
printf("\n the number is %06d\n",1234);
printf("\n the number is %010d\n",1234);
printf("\n The price of this item is %09.2f rupees",123.456);
printf("\n This is \' so \' beautiful");
printf("\n This is \" so \" beautiful");
printf("\n This is \\ so beautiful"); 	
//printf("\n a= |%-+7.2f| b = %0+7.2f c= %-0+8.2f", 1.2,1.2,1.2);

char ch = 'A';
printf("\n %c \n %3c \n %5c \n %7c\n", ch,ch,ch,ch);


char str[] = "good morning";
printf("\n %s ", str);
printf("\n %20s",str);
printf("\n %20.10s",str);
printf("\n %.7s",str);







return 0;
}
