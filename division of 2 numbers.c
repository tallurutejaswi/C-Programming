#include <stdio.h>
#include <stdlib.h>

int division(int,int);   //function prototype or declaration with parameter
int main()
{
    int num1=1000,num2=20,result;
    result=division(num1,num2);//assign the output to variable result
    //function call
     printf("Division of %d and %d is %d: ", num1,num2, result);
     //Display result on the screen
    getch();
    return 0;
}

int division(int a, int b)//function definition
{

        return a/b;
    }
