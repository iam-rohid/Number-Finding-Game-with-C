#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min, max, newMin, newMax, half;
    char ans;

    printf("Range(Example : 1-1000) : ");
    scanf("%d-%d",&min,&max);

    if(min>max){
        newMax = min;
        newMin = max;
    }

    else{
        newMax = max;
        newMin = min;
    }

    printf("Great!! now choose a number between %d-%d\n",newMin, newMax);
    printf("Did you choose your number?(y/n) ");
    scanf("%s", &ans);

    while(ans != 'y'){
        printf("What are you doing, choose a number!!\nDid you choose your number?(y/n) ");
        scanf("%s", &ans);
    }

    half = newMin + ((newMax-newMin)/2);
    printf("Great!! now tell me is your number bigger then(b) , smaller then(s) or equal to(e) %d? ",half);
    scanf("%s", &ans);


    while(ans != 'e'){
        if(ans == 'b' | ans == 'B'){
            newMin = half;
            half = newMin + ((newMax-newMin)/2);
            printf("Great!! Now tell me is your number bigger then(b) , smaller then(s) or equal to(e) %d? ",half);
            scanf("%s", &ans);
        }

        else if(ans == 's' | ans == 'S'){
            newMax = half;
            half = newMin + ((newMax-newMin)/2);
            printf("Great!! Now tell me is your number bigger then(b) , smaller then(s) or equal to(e) %d? ",half);
            scanf("%s", &ans);
        }
    }
    printf("\nYour chosen number is %d\n",half);
    return 0;

}
