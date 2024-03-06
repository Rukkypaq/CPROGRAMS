#include <stdio.h>
int main(){

int numbers[10] = {2,5,18,4,8,9,90,16,3,43};
//                 0,1,2,3,4,5,6,7,8,9
int maxNumber = numbers[0];
int minNumber = numbers[0];
int arraysum =0;
for(int i = 0; i<10; i++){
 printf("value at index %d = %d\n",i,numbers[i]);
 arraysum+=numbers[1];

 if(numbers[i] > maxNumber){
maxNumber = numbers[i];
}
if(numbers[i] < minNumber){
minNumber = numbers[i];
}
}
printf("the max number in the array=%d\n", maxNumber);
printf("the min number in the array=%d\n", minNumber);
printf("Average = %d\n", arraysum/10);



    return 0;
}