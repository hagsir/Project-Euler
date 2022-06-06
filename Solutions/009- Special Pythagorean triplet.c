#include<stdio.h>
/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

int main(){
int i, j, k, n;

    for(i=0; i<1000; i++){
        for(j=0; j<1000; j++){
            for(k=0; k<1000; k++){
                if(k<j && k<i && j<i){
                    if( k*k + j*j == i*i ){
                        if(k+j+i==1000){
                            n = k*j*i;
                            printf("%d^2 + %d^2 = %d^2", k, j, i);
                            printf("\n%d + %d + %d = 1000", k, j, i);
                            printf("\n\nThe product of abc is:");
                            printf("\n(%d * %d * %d) = %d ", k, j, i, n);
                            break;
                        }
                    }
                }
            }
        }
    }
}
