// THIS PROGRAM PRINT THE RANDOM NUMBERS
// TO PRINT THIS RANDOM NUMBER , WE MUST HAVE TO ADD (#include<stdlib.h>)HADER FILE
// AND (#include<time.h>);
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){//WE USE (int main(){}) FUNCTION FROM (#include<stdio.h>) HADERFILE
    int number,guess,n_guess=1;
    srand(time(0));// THIS IS PICKED UP FROM (#include<time.h>)HADERFILE
    number = rand()%100+1;// THIS IS PICKED FROM(#include<stdlib.h>)HADERFILE
    // THIS PRINT THE RANDOM NUMBER BETWEEM 1 TO 100 
    //printf("%d",number);
    // KEEP RUNNING THE LOOP UNTIL NUMBER IS GUESSED
    do{
     // while(n_guess != 1){ printf("HEY! LETS PLAY A WONDERFULL NUMBER GUSSING GAME \n");}
      printf("GUESS A RADOM NUMBER BETWEEN 1 TO 100  = ");
        scanf("%d",&guess);
        if(guess>number){
            printf("LOWER NUMBER,PLEASE!\n");

        }
        else if(guess<number){
            printf("HIGHER NUMBER,PLEASE!\n");
        }
        else{
            printf("CONGRATULATIONS! YOU GUESSED THE RIGHT NUMBER IN %d ATTEMPTS",n_guess);
        }
        n_guess++;

    }while(guess!=number);
    return 0;

}