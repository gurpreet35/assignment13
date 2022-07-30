// Write a program in C to count the digits of a given number using recursion
#include<stdio.h>
void Digi_counter(int );
int main(){
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);
    Digi_counter(n);
    return 0;
}
void Digi_counter(int x){
    static int c=1;
    int q,p;
    if (x>=1)
    {
       p=x%10;
       x=x/10;
       c++;
       if(x==1){
       printf("%d",c);
       }
    }
    Digi_counter(x);
    
}