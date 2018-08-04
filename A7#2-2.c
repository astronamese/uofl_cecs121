/***********************/
/* Nicholas Duong */
/* CECS 121-01 */
/* Assignment 7 #2 p.253 */
/***********************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pRead;
    char supername[20];
    char superpower[50];

    pRead=fopen("superheroes.dat","r");
    if(pRead==NULL)
    {
        goto ErrorHandler;
    }
    else
    {
        printf("*Superhero Name*\t*Superhero Power/Weapon*\n");
        fscanf(pRead,"%s%s",supername,superpower);
        printf("%s\t\t\t\t%s\n",supername,superpower);
        fscanf(pRead,"%s%s",supername,superpower);
        printf("%s\t\t%s\n",supername,superpower);
        fscanf(pRead,"%s%s",supername,superpower);
        printf("%s\t\t\t\t%s\n",supername,superpower);
        fscanf(pRead,"%s%s",supername,superpower);
        printf("%s\t\t\t\t%s\n",supername,superpower);
    }
    exit(EXIT_SUCCESS);
    
ErrorHandler:
    perror("The following error occurred");
    exit(EXIT_FAILURE);
}