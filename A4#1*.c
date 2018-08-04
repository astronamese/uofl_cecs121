///********************/
///* Nicholas Duong */
///* CECS 121-01 */
///* Assignment 4 #1 p.146 */
///*********************/
//
//#include <stdio.h>
//
//int main()
//{
//    int a,b,i,j;
//    int input;
//    int sort;
//    int array[10]={0};
//    
//    printf("This program will prompt you to input 10 positive integer numbers, each one placed in a separate cell of the array.\n");
//    
//    for (i=0;i<10;i++)
//    {
//        printf("Please input an integer number.\n");
//        scanf("%d",&input);
//        array[i]=input;
//    }
//    
//    printf("From the following menu, please enter '1' or '2' if you'd like to sort the 10 numbers in the array in ascending or descending order, respectively.\n");
//    printf("\t\tSorting Options\n");
//    printf("\t1) Ascending Order\n");
//    printf("\t2) Descending Order\n");
//    scanf("%d",&sort);
//    
//    printf("These are your inputs sorted in the specified order.\n");
//    
//    if (sort==1)
//    {
//        for (i=0;i<10;++i)
//        {
//            for (j=i+1;j<10;++j)
//            {
//                if (array[i]>array[j])
//                {
//                    a=array[i];
//                    array[i]=array[j];
//                    array[j]=a;
//                }
//            }
//        }
//        for (i=0;i<10;++i)
//        {
//            printf("%d\n",array[i-1]);
//        }
//    }
//    
//    if (sort==2)
//    {
//        for (i=0;i<10;++i)
//        {
//            for (j=i+1;j<10;++j)
//            {
//                if (array[i]<array[j])
//                {
//                    b=array[i];
//                    array[i]=array[j];
//                    array[j]=b;
//                }
//            }
//        }
//        for (i=0;i<10;++i)
//        {
//            printf("%d\n",array[i]);
//        }
//    }
//    
//    return 0;
//}