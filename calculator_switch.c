#include <stdio.h>
int main(){
    int a,b,c;
    char x;

    printf("Enter calculation you want to do:");
    scanf("%d%c%d", &a, &x, &b);

    switch(x){
        case '+':
        c=a+b; 
        printf("Your answer:%d",c);
        break;

        case '-':
        c=a-b;
        printf("Your answer:%d",c);
        break;

        case '*':
        c=a*b;
        printf("Your answer:%d",c);
        break;

        case '/':
        c=a/b;
        printf("Your answer:%d",c);
        break;

        default:
        printf("Operation you are trying to do is invalid");
    }
    return 0;
}



