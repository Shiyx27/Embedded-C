#include <stdio.h>
#include <string.h>

void swap(int*a,int*b){
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

void main() {
    
    int i = 20;
    int j = 10;
    
    swap(&i,&j);
    
    printf(" i = %d \n j = %d",i,j);
    
   
}
