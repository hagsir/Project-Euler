#include<stdio.h>
/*
The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)^2 = 55^2 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is,
3025 - 385 = 2640.
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/
int main(){
int i, n, sum=0, sum2=0, result;

    for(i=0; i<=100; i++){
        n=i*i;
        sum+=n;
    }
    for(i=0; i<=100; i++){
        sum2+=i;
    }
    sum2*=sum2;
    result = sum2 - sum;
    printf("The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is:\n");
    printf("%d - %d = %d.", sum2, sum, result);
}

