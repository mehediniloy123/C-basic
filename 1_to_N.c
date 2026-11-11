#include<stdio.h>
int main(){
    long long int n;
    scanf("%lld",&n);
    long long sum = (n * (n + 1))/2;
    printf("Sum is : %lld", sum);

    return 0;
}