#include <stdio.h>
int main()
{
char name[30];
int score;

printf("Software Engineering Grading System\n\n");

printf("kindly input your name: ");
scanf("%s",name);

printf("input socre:");
scanf("%d",&score);

printf("------------------------\nHello, %s your score is %d",name,score);






return 0;
}