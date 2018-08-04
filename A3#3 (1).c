///***********************/
///* Nicholas Duong */
///* CECS 121-01 */
///* Assignment 3 #3 */
///***********************/
//
//#include <stdio.h>
//
//int main()
//{
//    float x;
//    float y;
//    float z;
//    float i;
//    
//    printf("Please input a value x to count FROM.\n");
//    scanf("%f",&x);
//    
//    printf("Please input a value y to count TO.\n");
//    scanf("%f",&y);
//    
//    printf("Please input an increment z that you'd like to count from x to y with.\n");
//    scanf("%f",&z);
//    
//    if (x<y)
//    {
//        for (i=x; i<=y; i+=z)
//        {
//        printf("The value is now %f.\n",i);
//        }
//    }
//    else
//    {
//        for (i=x; i>=y; i-=z)
//            printf("The value is now %f.\n",i);
//    }
//    printf("\nThis program has finished counting from %f to %f in increments of %f.\n",x,y,z);
//    return 0;
//}