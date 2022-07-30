//  Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>
#include<math.h>
int power(int,int);
int main(){
    int num,p;
    printf("Enter the value of Number:>");
    scanf("%d",&num);
    printf("Give the power of %d:>",num);
    scanf("%d",&p);
    power(num,p);
    printf("The power \"%d\" of %d is %d",p,num,power(num,p));
    return 0;
}
int power(int x,int y){
    int z;
    if(y==1){
        return x;
    }
    z=x*power(x,(y-1));
}