#include <stdio.h>

void main() {
    int i = 10;
    float j = 11.5;
    long k = 12;
    double l = 13.5;

    printf("The value of i is %d\n", i);
    printf("The allocated space for i is %lu\n", sizeof(i));
    printf("Memory address of i is %p\n", (void*)&i);

    printf("The value of j is %f\n", j);
    printf("The allocated space for j is %lu\n", sizeof(j));
    printf("Memory address of j is %p\n", (void*)&j);

    printf("The value of k is %ld\n", k);
    printf("The allocated space for k is %lu\n", sizeof(k));
    printf("Memory address of k is %p\n", (void*)&k);

    printf("The value of l is %lf\n", l);
    printf("The allocated space for l is %lu\n", sizeof(l));
    printf("Memory address of l is %p\n", (void*)&l);
}

