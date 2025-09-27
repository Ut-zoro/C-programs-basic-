#include <stdio.h>
int main(){
    int x,y;

    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    printf("-----------------\n");
    printf("This is a two player game\n");
    printf("let the game begin!!!\n");
    printf("1st person, choose one of the options by selecting corresponding no.: ");
    scanf("%d",&x);
    printf("2nd person, do the same: ");
    scanf("%d",&y);

    if((x==1&&y==2)||(x==2&&y==3)||(x==3&&y==1)){
        printf("2nd player won!!");
    }
    else if((x==1&&y==3)||(x==2&&y==1)||(x==3&&y==2)){
        printf("1st player won!!");
    }
    else if((x==1&&y==1)||(x==2&&y==2)||(x==3&&y==3)){
        printf("Its a tie");
    }
    else{
        printf("No such option exists :(");
    }

    return 0;
}