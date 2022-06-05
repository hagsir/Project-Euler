#include<stdio.h>
/*
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/
int main(){
int i, dividers = 0, n;

printf("The prime factors of 600851475143 are: ");
    for(n=1; n<600851475143; n++){
        for(i = 1; i <= n; i++){
          if(n % i == 0)
            dividers++;
        }
        if(dividers==2){
            if(600851475143%n==0){
                printf("%d ", n);
            }
        }
        dividers=0;
    }
}
