#include<stdio.h>
#include<string.h>
/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/
int main(){
int n, palindrome=0, con=0;
char stringnumber[100];

    for(int i=100; i<1000; i++){
        for(int j=100; j<1000; j++){
            n=0;
            n=i*j;
            itoa(n,stringnumber,10);
                for(int k=0; k<strlen(stringnumber)-1; k++){
                    if(stringnumber[k]!=stringnumber[strlen(stringnumber)-(k+1)]){
                        con++;
                    }

                }
                if(con==0 && n>palindrome){
                    palindrome=n;
                }
                con=0;
        }
    }
    printf("\nThe largest palindrome made from the product of two 3-digit numbers is: %d\n", palindrome);
    return 0;
}
