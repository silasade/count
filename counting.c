/*Program to count from 1 to any number*/
#include<stdio.h>
int main(){
    int count;
    printf("From 1 to which number do you want to count to: ");
    scanf("%d",&count);
    printf("Your numbers are: \n");
    for (int i=1; i<=count; i++){
        printf("%d\n",i);
    }
    return 0;
}