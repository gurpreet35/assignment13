// . Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int sum_of_digits(int );
int sum=0;
int main(){
    int x;
    printf("Enter x:");
    scanf("%d",&x);
    printf("sum of squares of first %d natural number is :%d",x,sum_of_digits(x));
    return 0;
}
int sum_of_digits(int n){

  if(n>=1){
  sum_of_digits(n/10);
  sum=sum+n%10;
  }
  return sum;
}

