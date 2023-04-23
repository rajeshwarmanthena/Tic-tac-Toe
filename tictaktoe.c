#include <stdio.h>
#include <stdlib.h>


char square[10]= { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int choice, player;
int checkForWin();
void displayBoard();
void markBoard(char mark);

int main()
{
    int gameStatus;
    char mark;
    player = 1;
    do
    {
       displayBoard();
       player = (player % 2) ? 1 : 2;
       printf("Player %d, Enter a number ", player);
       scanf("%d", &choice);
       mark = (player == 1) ? 'X' : 'O';

       markBoard(mark);
       gameStatus = checkForWin();
       player++;
    } while (gameStatus == -1);

    if(gameStatus ==1)
    printf("==> \a Player %d win", --player);
    else
    printf("==> \a Game Draw");
    
    return 0;
}


/*  
     Function to return game status
     1 for game is over with result.
     0 For game is over without result.
     -1 For game is in progress.
*/


int checkForWin()
{
    int returnValue= 0;

    if(square[1]==square[2] && square[2]==square[3])
    returnValue= 1;

   else if(square[4]==square[5] && square[5]==square[6])
    returnValue= 1;

    else if(square[7]==square[8] && square[8]==square[9])
    returnValue= 1;

    else if(square[1]==square[4] && square[4]==square[7])
    returnValue= 1;

    else if(square[2]==square[5] && square[5]==square[8])
    returnValue= 1;

    else if(square[3]==square[6] && square[6]==square[9])
    returnValue= 1;

    else if(square[3]==square[5] && square[5]==square[7])
    returnValue= 1;

    else if(square[1]==square[5] && square[5]==square[9])
    returnValue= 1;

    else if(square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
    returnValue=0;

    else
    returnValue= -1;

    return returnValue;
}

/*  Function to draw tic tak toe board  */

void displayBoard()
{
    //system("cls");  /*  function to clear screen   */
    printf("\n\n Tic Tak Toe \n\n");
    
    printf("PLAYER1(X) -- Palayer2(O) \n\n\n");

    printf("     |      |      \n");
    printf("  %c  |   %c  |   %c \n", square[1], square[2], square[3]);
    printf("____ | ____ | ____ \n");
    printf("     |      |      \n");
    printf("  %c  |   %c  |   %c \n", square[4], square[5], square[6]);
    printf("____ | ____ | ____ \n");
    printf("     |      |      \n");
    printf("  %c  |   %c  |   %c \n", square[7], square[8], square[9]);
    printf("     |      |      \n");
}

void markBoard(char mark)
{
    if(choice == 1 && square[1] == '1')
    square[1] =mark;
    
    else if(choice == 2 && square[2] == '2')
    square[2] =mark;

    else if(choice == 3 && square[3] == '3')
    square[3] =mark;

    else if(choice == 4 && square[4] == '4')
    square[4] =mark;

    else if(choice == 5 && square[5] == '5')
    square[5] =mark;

    else if(choice == 6 && square[6] == '6')
    square[6] =mark;

    else if(choice == 7 && square[7] == '7')
    square[7] =mark;

    else if(choice == 8 && square[8] == '8')
    square[8] =mark;

    else if(choice == 9 && square[9] == '9')
    square[9] =mark;

    else
    {
        printf("Invalid Move");

      
    }

}