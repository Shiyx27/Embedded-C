#include <stdio.h>


void main() {
   int num1, num2;
   printf("Enter the number :");
   scanf("%d",&num1);
   printf("Enter the number :");
   scanf("%d",&num2);
   int *a =&num1;
   int *b=&num2;
    
   *a=*a+*b;
   *b=*a-*b;
   *a=*a-*b;
   printf("\n the number after swap : %d",num1);
   printf("\n the number after swap : %d",num2);
}
