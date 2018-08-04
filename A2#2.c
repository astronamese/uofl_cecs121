/***********************/
/* Nicholas Duong */
/* CECS 121-01 */
/* Assignment 2 #2 */
/***********************/

#include <stdio.h>

int main()
{
    int a,b,x,y,f;
    printf("Please input an integer value for a.\n");
    scanf("%d",&a);
    printf("Please input an integer value for b.\n");
    scanf("%d",&b);
    printf("Please input an integer value for x.\n");
    scanf("%d",&x);
    printf("Please input an integer value for y.\n");
    scanf("%d",&y);
    f=(a-b)*(x-y);
    printf("Given the inputs, the value of f is %d.\n",f);

    return 0;
}