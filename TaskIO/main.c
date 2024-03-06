#include <stdio.h>
int main(){
    char firstname[30];
    char lastname[30];
    char phonenumber[30];
    int userAge=45;
    
    printf("input first name:");
    scanf("%s",firstname);
    
    printf("input last name:");
    scanf("%s",lastname);
    
    printf("input phone number:");
    scanf("%s",phonenumber);
    
    printf("Input your ge:");
    scanf("%d",&userAge);
    
    printf("\nGood afternoon %s,\n\nFirst Name:%s \nLast Name:%s \nPhone Number:%s \nAge:%d \n",firstname,firstname,lastname,phonenumber,userAge);

    return 0;
}
