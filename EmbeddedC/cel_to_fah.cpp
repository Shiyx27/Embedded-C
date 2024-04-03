#include <stdio.h>
void main(){
	float cel,fah,cel_to_fah,fah_cel;
	cel =38;
	cel_to_fah=(cel*9/5)+32;
	printf("The value of fahrenheit is :%f\n",cel_to_fah);
	fah=98.6;
	fah_to_cel=(fah-32)*5/9;
	printf("The value of celcius is :%f",fah_to_cel);
	
}
