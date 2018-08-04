///***********************/
///* Nicholas Duong */
///* CECS 121-01 */
///* Assignment 3 #1 */
///***********************/
//
//#include <stdio.h>
//#include <ctype.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//    printf("Are you able to guess an integer number between 1 and 10?\n");
//    int randnum = 0;
//    char input = '\0';
//    
//    srand((unsigned int)time(NULL));
//    randnum = (rand()%10) + 1;
//    
//    printf("At this time, please input your guess as an integer number between 1 and 10.\n");
//    scanf("%c",&input);
//    
//    if (isdigit(input))
//    {
//        input = input-'0';
//        if (input == randnum)
//        {
//          printf("Congratulations! You guessed correctly that the number was %d.\n",randnum);
//        }
//        
//        else
//        {
//          printf("Sorry, you guessed incorrectly. The correct number was %d.\n",randnum);
//        }
//    }
//    
//    else
//    {
//        printf("Your input was invalid. You did not enter an integer number.\n");
//        printf("This program has now been terminated. Please run it again to guess the number.\n");
//    }
//    return 0;
//}
