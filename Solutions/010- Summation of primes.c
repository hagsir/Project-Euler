#include<stdio.h>
#include<windows.h>
/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.
*/
int main(){
long long int i, dividers = 0, n, sum=1;

printf("Calculating the sum of all the prime numbers below 2,000,000...");
    for(n=0; n<2000000; n++){
    n++;
        for(i = 0; i <= n/2; i++){
        i++;
          if(n % i == 0)
            dividers++;
            if(dividers>1){
                i=n;
            }
        }
        if(dividers==1){
                sum+=n;
        }
        dividers=0;
    }
    printf("\nThe sum is %lld.", sum); //The program takes 5 minutes to give the answer
}
