///***********************/
///* Nicholas Duong */
///* CECS 121-01 */
///* Assignment 5 #1 p.177 */
///***********************/
//
//#include <stdio.h>
//
//int main()
//{
//    int *iPtr;
//    char *cPtr;
//    float *fFloat;
//    
//    int iNumber = 8;
//    char cCharacter = 'd';
//    float fNumber = 4;
//    
//    iPtr = &iNumber;
//    cPtr = &cCharacter;
//    fFloat = &fNumber;
//    
//    printf("The value of iNumber is %d\n",iNumber);
//    printf("The value of cCharacter is %c\n",cCharacter);
//    printf("The value of fNumber is %f\n\n",fNumber);
//    
//    printf("The value of *iPtr is %d\n",*iPtr);
//    printf("The value of *cPtr is %c\n",*cPtr);
//    printf("The value of *fFloat is %f\n\n",*fFloat);
//    
//    printf("The address of iNumber is %p\n",iPtr);
//    printf("The address of cCharacter is %p\n",cPtr);
//    printf("The address of fNumber is %p\n\n",fFloat);
//    
//    printf("The address of *iPtr is %p\n",&*iPtr);
//    printf("The address of *cPtr is %p\n",&*cPtr);
//    printf("The address of *fFloat is %p\n",&*fFloat);
//    
//    return 0;
//}