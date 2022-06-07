#include<stdio.h>
#include <windows.h>
/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.
*/
int main(){
long long int i, dividers = 0, n, sum=0, prime;

printf("Calculating the sum of prime numbers up to 2,000,000...");
    for(n=1; n<2000000; n++){
        for(i = 1; i <= n; i++){
          if(n % i == 0)
            dividers++;
            if(dividers>2){
                i=n;
            }
        }
        if(dividers==2){
                prime;
                i=prime;
                sum+=n;
        }
        dividers=0;
    }
    printf("\nThe sum is %lld.", sum); //The program takes 32 minutes to give the answer
}
