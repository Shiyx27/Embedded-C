#include <stdio.h>
#include <string.h>

void printstr(char*a){
	int i;
	for(i=0;a[i]!='\0';i++){
		printf("%c",a[i]);
	}
}

void main() {
    
    char str[] = "Shiyamala";
    printstr(str);

}
