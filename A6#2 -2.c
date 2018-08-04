/***********************/
/* Nicholas Duong */
/* CECS 121-01 */
/* Assignment 6 #2 p.232 */
/***********************/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char *name;
    name = (char *)calloc(15,sizeof(name));
    
    printf("Please enter your first name.\n");
    scanf("%s",name);
    
    int i=0; int count=0;
    while(name[i]!='\0' && i!=15)
    {
        count++;
        i++;
    }
    
    printf("The number of characters in your first name is: %d\n", count);
    return 0;
}