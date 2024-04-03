
//TASK1

#include <stdio.h>

static int j;
void st(int i);

void st(int x){
	j++;
	++x;
}


int main() {
    int k=10;
    int i;
    for(i=0;i<10;i++){
    	st(k);
	}
    printf("k = %d, j = %d",k,j);
    
    return 0;
}

/*
#include <stdio.h>

static int j;
void st(int *i);

void st(int *x){
	j++;
	++*x;
}


int main() {
    int k=10;
    int i;
    for(i=0;i<10;i++){
    	st(&k);
	}
    printf("k = %d, j = %d",k,j);
    
    return 0;
}
*/

/*
#include <stdio.h>

static int j;
void st(int *i);

void st(int *x){
	j++;
	++*x;
	printf("scope : k = %d, j = %d\n",*x,j);
}


int main() {
    int k=10;
    int i;
    for(i=0;i<10;i++){
    	st(&k);
    printf("main : k = %d, j = %d\n",k,j);}
    
    return 0;
}

*/

