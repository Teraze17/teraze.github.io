#include <stdio.h>

int main () {
    int d1, d2, d3, d4, d5, d6;
    int sum1, p1, p2;
    scanf ("%d %d %d %d %d %d", &d1,&d2,&d3,&d4,&d5,&d6);
    sum1 = d1 + d2 + d3;
    p1 = 100; //dragon healthpoint
    p2 = 100; //player healthpoint
    while (1) {
        sum1 = d1 + d2 + d3;
        //printf("%d", sum1); //check: correct
        if (sum1%2 != 0) { //the player attacks
           // printf("%d", sum1); //check: correct
            if (p1 > 0) {
                if (d6 > d5 && d5 > d4) {
                    //printf("Player attacks: Critical Hit");
                    p1 = p1 - 25;
                    if (p1 <=0){
                        printf("Player wins");
                        break;
                    }
                        //printf("p1 is %d\n", p1);
                        scanf ("%d %d %d %d %d %d", &d1,&d2,&d3,&d4,&d5,&d6);
                } else if (((d4  % 2) == (d5 % 2)) || ((d5 % 2) == (d6 % 2))) {
                    //printf("Player attacks: Normal Hit");
                    p1 = p1 - 5;
                    if (p1 <=0){
                        printf("Player wins");
                        break;
                    }
                        //printf("p1 is %d\n", p1);
                        scanf ("%d %d %d %d %d %d", &d1,&d2,&d3,&d4,&d5,&d6);

                } else {
                    //printf("Player attacks: Miss");
                    //printf("p1 is %d", p1);
                    scanf ("%d %d %d %d %d %d", &d1,&d2,&d3,&d4,&d5,&d6);

                }
            } /*else {
                printf("Player wins");
                break;
            }*/
        } else { //Dragon attack
            if (p2 > 0) {
                if ((d5 - d4 > d6) || (d4 - d5 > d6)) {
                    //printf("Dragon attacks: Critical Hit");
                    p2 = p2 - 15;
                    if (p2 <=0){
                        printf("Dragon wins");
                        break;
                    }
                        //printf("p2 is %d\n", p2);
                        scanf("%d %d %d %d %d %d", &d1, &d2, &d3, &d4, &d5, &d6);

                } else if ((d4 + d5) != (d6)) {
                    //printf("Dragon attacks: Normal Hit");
                    p2 = p2 - 5;
                    if (p2 <=0){
                        printf("Dragon wins");
                        break;
                    }
                    //printf("p2 is %d\n", p2);
                    scanf("%d %d %d %d %d %d", &d1, &d2, &d3, &d4, &d5, &d6);
                } else {
                    //printf("Dragon attacks: Miss");
                    //printf("p2 is %d\n", p2);
                    scanf("%d %d %d %d %d %d", &d1, &d2, &d3, &d4, &d5, &d6);
                }
            } /*else {
                printf("Dragon wins");
                break;
            }*/
        }
    }
}


//
// Created by ddes2 on 10/11/2022.
//
