/***********************/
/* Nicholas Duong */
/* CECS 121-01 */
/* Assignment 7 #1 p.253 */
/***********************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pWrite;
    char supername[20];
    char superpower[50];
    
    pWrite=fopen("superheroes.dat","w");
    
    if(pWrite==NULL)
    {
        printf("File could not be opened.\n");
    }
    else
    {
        printf("Enter first superhero name and corresponding power/weapon, with the two separated by a space.\n");
        scanf("%s%s",supername,superpower);
        fprintf(pWrite,"%s\t%s\n",supername,superpower);
        
        printf("Enter second superhero name and corresponding power/weapon, with the two separated by a space.\n");
        scanf("%s%s",supername,superpower);
        fprintf(pWrite,"%s\t%s\n",supername,superpower);
        
        printf("Enter third superhero name and corresponding power/weapon, with the two separated by a space.\n");
        scanf("%s%s",supername,superpower);
        fprintf(pWrite,"%s\t%s\n",supername,superpower);
        
        printf("Enter fourth superhero name and corresponding power/weapon, with the two separated by a space.\n");
        scanf("%s%s",supername,superpower);
        fprintf(pWrite,"%s\t%s\n",supername,superpower);
        
        fclose(pWrite);
    }
}