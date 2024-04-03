#include <stdio.h>

void main(){
	int num[6],sum,i;
	float avg;
	for(i=0;i<6;i++){
		scanf("%d",&num[i]);
		sum+=num[i];
	}
	avg=(float)sum/6;
	printf("The average of 6 numbers is : %f\n",avg);
	
	char ch[]={'S','h','i','y','a','m','a','l','a'};
	printf(ch);
}
