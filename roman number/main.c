#include<stdio.h>
#include "stdlib.h"

//roman to Integer
int romanToInt(char s){
    switch(s){
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default :
            return -1;
    }
}

int main(){
    char romanNumber[10]; // gets upto 10 characters roman number

    printf("please enter the Roman number:\t");
    scanf("%s", romanNumber);

    int i=0,number=0;
    while(romanNumber[i]!='\0'){   //loop into the number
        if(romanToInt(romanNumber[i])==-1){
            printf("invalid Roman number !!!");
            return -1;
        }

        else {
            if(romanToInt(romanNumber[i])>=romanToInt(romanNumber[i+1]))
            number += romanToInt(romanNumber[i]);
            else
                number -= romanToInt(romanNumber[i]);
        }
        i++;
    }

    printf("%d\n", number);
    system("PAUSE");
    return 0;
}