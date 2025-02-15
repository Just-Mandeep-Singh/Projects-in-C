/*In this program,I make a project of
snake ,water and gun game */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int guess(char you, char com)
{
    // for game draw
    if (you == com)
    {
        return 0;
    }
    // non-draw condition
    
    if (you == 'S' && com == 'W')
    {
        return 1;
    }// we can do this with else ,also.
    else if (you == 'W' && com == 'S')
    {
        return -1;
    }
    if (you == 'G' && com == 'S')
    {
        return 1;
    }
    else if (you == 'S' && com == 'G')
    {
        return -1;
    }
    if (you == 'W' && com == 'G')
    {
        return 1;
    }
    else if (you == 'G' && com == 'W')
    {
        return -1;
    }
}
int main()
{

    srand(time(0));
    int number = rand() % 100 + 1;
    char comp, me;
    if (number <= 33)
    {
        comp = 'S';
    }
    if (number > 33 && number <= 66)
    {
        comp = 'W';
    }
    else
    {
        comp = 'G';
    }
    printf("S for snake ,W for water , G for gun\n");
    printf("Computer has chosen it's and Now it's your turn = ");
    scanf("%c", &me);

    int result = guess(me, comp);
    if (result == 0)
    {
        printf("!! GAME IS DRAW !!");
    }
    else if (result == 1)
    {
        printf("!! CONGRULATIONS! YOU WON THE GAME!! ");
    }
    else
    {
        printf("!! SORRY! YOU LOSE THE GAME!!");
    }
    printf("\nBECAUSE THE YOU CHOSE %c AND COMPUTER CHOSE %c", me, comp);
    return 0;
}