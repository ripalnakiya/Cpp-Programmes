#include<stdio.h>

int toBinary(int num){
    int con=0, digit;
    while(num){
        digit = num % 2;
        con = con * 10 + digit;
        num /= 2;
    }
    return con;
}

void main(){
    int num, bnum;
    printf("Enter a number: ");
    scanf("%d",&num);
    bnum = toBinary(num);
    printf("Binary representation is: %d", bnum);
}