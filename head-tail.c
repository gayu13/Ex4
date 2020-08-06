#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i,r[3];
    int Hcount = 0;
    int Tcount = 0;

    char user_name[10];

    srand(time(NULL));
    for(i=0; i<3;i++) r[i]  = (rand() % 10 + 1) % 2;

    printf("Who are you?\n>");
    scanf("%s",user_name);
    printf("Hello,%s!\n",user_name);

    printf("Tossing a coin....\n");

    for(i=1; i<=3; i++){
        if(r[i-1] == 0){
            printf("Round %d: Heads\n",i);
            Hcount++;
        }
        else{
            printf("Round %d: Tails\n",i);
            Tcount++;  
        }
    }
    printf("Heads:%d, Tails:%d\n",Hcount,Tcount);
    if(Hcount > Tcount) printf("You won!\n");
    else printf("You lost...\n");

}