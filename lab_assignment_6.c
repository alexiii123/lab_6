#include <stdio.h>

int search(int numbers[], int low, int high, int value)
{
if (high >= low)
{
int m = low + (high - low)/2;
if (numbers[m] == value)
return m;
if (numbers[m] > value)
return search(numbers, low, m-1, value);
return search(numbers, m+1, high, value);
}
return -1;
}

int main(void)
{
int numbers[] = {4,8,12,16,20,24,28};
int high= sizeof(numbers)/ sizeof(numbers[0]);
int low=0;
int value = 16;
int getRes = search(numbers, low, high-1, value);
if(getRes>0)
printf("The numbers is present in position: %d",getRes);
else
printf("The numbers is not present");
return 0;
}