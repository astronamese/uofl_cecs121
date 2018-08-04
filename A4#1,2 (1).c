///********************/
///* Nicholas Duong */
///* CECS 121-01 */
///* Assignment 4 #1 and #2 p.126 */
///*********************/
//
//#include <stdio.h>
//
//int divideandremainder(int, int);
//
//int findlargernumber(int, int);
//
//void ATMmenu(void);
//
//int main()
//{
//    int a,b,c,d;
//    int result1,result2;
//    
//    result1=divideandremainder(a,b);
//    printf("The result for the first function is %d\n\n",result1);
//    
//    result2=findlargernumber(c,d);
//    printf("The largest number from the second function is %d\n\n",result2);
//    
//    printf("The following is a printed ATM menu.\n");
//    ATMmenu();
//}
//
//int divideandremainder(int a, int b)
//{
//    int result1;
//    printf("We will find the remainder of dividing a number 'a' by a number 'b'.\n");
//    printf("Please enter an integer number for 'a'.\n");
//    scanf("%d",&a);
//    printf("Please enter an integer number for 'b'.\n");
//    scanf("%d",&b);
//    result1=a%b;
//    
//    return (result1);
//}
//
//int findlargernumber(int c, int d)
//{
//    int result2;
//    printf("We will determine which number, 'c' or 'd', is larger.\n");
//    printf("Please enter an integer number for 'c'.\n");
//    scanf("%d",&c);
//    printf("Please enter an integer number for 'd'.\n");
//    scanf("%d",&d);
//    if (c!=d)
//    {
//        if (c>d)
//        {
//            result2=c;
//        }
//        else if (c<d)
//        {
//            result2=d;
//        }
//    }
//    else
//    {
//        printf("The two inputs are equal. One is not larger than the other.\n");
//        result2=c;
//    }
//    return (result2);
//}
//
//void ATMmenu(void)
//{
//    printf("\t\tATM Menu\n");
//    printf("\t1) Deposit\n");
//    printf("\t2) Withdrawal\n");
//    printf("\t3) Balance Inquiry\n");
//    printf("\t4) Quit\n");
//}