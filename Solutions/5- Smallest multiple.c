#include<stdio.h>
/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/
int main(){
int i, j, con=0;

    printf("Calculating the smallest positive number that is evenly divisible by all of the numbers from 1 to 20...\n");
    for(i=1; i>0; i++){ //The program will only stop when it finds the number
        for(j=1; j<=20; j++){
            if(i%j!=0){
                con++;
            }
        }
        if(con==0){
            printf("%d.", i);
            break;
        }
        con=0;
    }
}
