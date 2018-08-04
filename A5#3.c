///***********************/
///* Nicholas Duong */
///* CECS 121-01 */
///* Assignment 5 #3 p.192 */
///***********************/
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    int i,j;
//    char *states[4],*temp[4];
//    
//    states[0] = "Florida";
//    states[1] = "Oregon";
//    states[2] = "California";
//    states[3] = "Georgia";
//    
//    for(i=0;i<4;i++)
//    {
//        printf("The state for array cell %d is %s.\n",i,states[i]);
//    }
//    
//    printf("Now we will alphabetize this list.\n");
//
//    for(i=0;i<4;i++)
//    {
//        for(j=1;j<4;j++)
//        {
//            if(strcmp(states[i],states[j])<0)
//            {
//                strcpy(temp[i],states[i]);
//                strcpy(states[i],states[j]);
//                strcpy(states[j],temp[i]);
//            }
//        }
//    }
//    for(i=0;i<4;i++)
//    {
//        printf("The state for array cell %d is %s.\n",i,states[i]);
//    }
//    
//    return 0;
//}