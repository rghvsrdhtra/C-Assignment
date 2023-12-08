#include<stdio.h>

int factorial(int n);
int main()
{
    int n;
    
    printf("Enter a number: ",n);
    scanf("%d",&n);
    
    int result=factorial(n);
    
    printf("The Factorial of %d is: %d\n",n,result);
    return 0;
}

int factorial(int n){
    if(n==0||n==1)
    {
        return 1;
    }else{
        return n*factorial(n-1);
    }
}