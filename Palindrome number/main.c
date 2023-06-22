#include <stdio.h>
#include "math.h"
#include "stdlib.h"
#include "stdbool.h"

// Function checks for being palindrome
bool isPalindrome(int x){
    double degree = 0.1;
    int num[(int) pow(x, degree)+1];
    static int j=-1, check=0;
    int a;
    int i;
    if(x<0)
        return false;
    else{
        if( x/10==0 )
            return true;
        else
        {
            do {
                j++;
                num[j]=x%10;
                x = x/10;
            } while (x!=0);

            for (i = 0; i < j+1/2; ++i) {
                if(num[i]==num[j-i])
                    check = 1;
                else{
                    check =0;
                    break;
                }
            }

            if(check==1)
                return true;
            else
                return false;
        }
    }
}

//main
int main() {
    int num;
    printf("Enter your number:\t");
    scanf_s("%d", &num);

    printf(isPalindrome(num)==1 ? "The number is Palindrome.\n":"The number isn't a Palindrome.\n");

    system("PAUSE");
    return 0;
}
