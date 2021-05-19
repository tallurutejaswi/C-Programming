#include <stdio.h>
#include <stdlib.h>
int subNum(int a, int b);//Function prototype
int main()
{
    int result,num1,num2;
    printf("Enter two numbers to subtract\n");
    scanf("%d%d",&num1,&num2);
//read the input given by user

    result=subNum(num1,num2);//call the function
     printf("subtraction of given two numbers:%d",result);
     getch();
    return 0;
}
int subNum(int x, int y)//function definition
{
    int c=x-y;
    return (c);
}
