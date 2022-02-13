
#include <stdio.h>


// How Fibonacci Sequence Works. Every Number In The Sequence Is The Sum Of The Previous 2 Numbers.


void fibonacci() {

    int preNum = 0;

    int prePreNum = 1;

    for(int i = 0; i < 20; i++) {

        int num = preNum + prePreNum;

        prePreNum = preNum;

        preNum = num;

        printf("%d\n", num);


    }



}


int main(int argc, char *argv[]) {

    fibonacci();



}