#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int arr[10];
int i;
int main(void) {
  srand(time(NULL));
for(i=0;i<9;i++){
  arr[i]=rand();
}
printf("First array:\n\n");
for(i=0;i<10;i++){
  printf("%d\n",arr[i]);
}
int arr2[10];
int *p=arr;
for(i=9;i>-1;i--){
  arr2[i]=*p++;
}
printf("\nSecond array:\n\n");
for(i=0;i<10;i++){
  printf("%d\n",arr2[i]);
}
  return 0;
}
