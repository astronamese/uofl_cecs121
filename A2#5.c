///***********************/
///* Nicholas Duong */
///* CECS 121-01 */
///* Assignment 2 #5 */
///***********************/
//
//#include <stdio.h>
//
//int main()
//{
//    printf("This program will calculate your commission for this month.\n");
//    int rate;
//    float commission,salesprice,cost;
//    
//    printf("Please enter how many units of your product was sold in a month.\n");
//    scanf("%d",&rate);
//    
//    printf("Please enter the price you sold each copy of your product at in dollars.\n");
//    scanf("%f",&salesprice);
//    
//    printf("Please enter the price that you paid for each copy of your product in dollars.\n");
//    scanf("%f",&cost);
//    
//    commission=rate*(salesprice-cost);
//    
//    if (salesprice<cost)
//        printf("You gained a negative commission of -$%6.2f for this month. You are losing money.\n",-(commission));
//    else
//        printf("The commission you gained for this month is $%6.2f\n",commission);
//    
//    return 0;
//               
//}