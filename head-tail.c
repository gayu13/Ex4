#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i,r[3];
    int Hcount = 0;
    int Tcount = 0;

    srand(time(NULL));
    for(i=0; i<3; i++){
        r[i]  = (rand() % 10 + 1) % 2;
    }
    printf("Tossing a coin....\n");

    for(i=1; i<=3; i++){
        if(r[i] == 0){
            printf("Round %d: Heads\n",i);
            Hcount++;
        }
        else{
            printf("Round %d: Tails\n",i);
            Tcount++;  
        }
    }
    printf("Heads:%d, Tails:%d\n",Hcount,Tcount);

}