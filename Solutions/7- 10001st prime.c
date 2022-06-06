#include<stdio.h>
/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?
*/
int main(){
int i, dividers = 0, n, prime=0;

printf("Calculating the 10.001st prime number...\n");
    for(n=1; n>0; n++){
        for(i = 1; i <= n; i++){
          if(n % i == 0)
            dividers++;
        }
        if(dividers==2){
                prime++;
                if(prime==10001){
                    printf("%d.", n);
                    break;
                }
        }
        dividers=0;
    }
}
