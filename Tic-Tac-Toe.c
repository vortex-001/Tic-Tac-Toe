#include <stdio.h>
#include <stdlib.h>

int board[3][3] = {{' ', ' ', ' '},
                   {' ', ' ', ' '},
                   {' ', ' ', ' '}};


void ttt()
{
    printf("%c%c%c%c%c%c%c%c%c%c       %c%c       %c%c%c%c%c%c%c%c%c%c", 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176);
    printf("\n");
    printf("    %c%c           %c%c       %c%c", 176, 176, 176 ,176, 176 ,176);
    printf("\n");
    printf("    %c%c           %c%c       %c%c", 176, 176, 176 ,176, 176 ,176);
    printf("\n");
    printf("    %c%c           %c%c       %c%c", 176, 176, 176 ,176, 176 ,176);
    printf("\n");
    printf("    %c%c           %c%c       %c%c%c%c%c%c%c%c%c%c", 176, 176, 176 ,176, 176 ,176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
        printf("%c%c%c%c%c%c%c%c%c%c   %c%c%c%c%c%c%c%c%c%c   %c%c%c%c%c%c%c%c%c%c", 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176);
    printf("\n");
    printf("    %c%c       %c%c      %c%c   %c%c", 176, 176, 176 ,176, 176 ,176);
    printf("\n");
    printf("    %c%c       %c%c%c%c%c%c%c%c%c%c   %c%c", 176, 176, 176 ,176, 176 ,176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176);
    printf("\n");
    printf("    %c%c       %c%c      %c%c   %c%c", 176, 176, 176 ,176, 176 ,176);
    printf("\n");
    printf("    %c%c       %c%c      %c%c   %c%c%c%c%c%c%c%c%c%c", 176, 176, 176 ,176, 176 ,176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("%c%c%c%c%c%c%c%c%c%c   %c%c%c%c%c%c%c%c%c%c   %c%c%c%c%c%c%c%c%c%c", 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176    );
    printf("\n");
    printf("    %c%c       %c%c      %c%c   %c%c", 176, 176, 176 ,176, 176 ,176, 176, 176);
    printf("\n");
    printf("    %c%c       %c%c      %c%c   %c%c%c%c%c%c%c", 176, 176, 176 ,176, 176 ,176, 176,176 ,176,176);
    printf("\n");
    printf("    %c%c       %c%c      %c%c   %c%c", 176, 176, 176 ,176, 176 ,176);
    printf("\n");
    printf("    %c%c       %c%c%c%c%c%c%c%c%c%c   %c%c%c%c%c%c%c%c%c%c", 176, 176, 176 ,176, 176 ,176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176);
        printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
 
}

//, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176    

void draw()
{
    printf(" %c %c %c %c %c \n", board[0][0], 186, board[0][1], 186, board[0][2]);
    printf("%c%c%c%c%c%c%c%c%c%c%c\n", 205, 205, 205, 206, 205, 205, 205, 206, 205, 205, 205);
    printf(" %c %c %c %c %c \n", board[1][0], 186, board[1][1], 186, board[1][2]);
    printf("%c%c%c%c%c%c%c%c%c%c%c\n", 205, 205, 205, 206, 205, 205, 205, 206, 205, 205, 205);
    printf(" %c %c %c %c %c \n", board[2][0], 186, board[2][1], 186, board[2][2]);
}

int check()
{
    if ((board[0][0] == 'X') && (board[0][1] == 'X') && (board[0][2] == 'X'))
    {
        return 1;
    }
    else if ((board[1][0] == 'X') && (board[1][1] == 'X') && (board[1][2] == 'X'))
    {
        return 1;
    }
    else if ((board[2][0] == 'X') && (board[2][1] == 'X') && (board[2][2] == 'X'))
    {
        return 1;
    }
    // vertical
    else if ((board[0][0] == 'X') && (board[1][0] == 'X') && (board[2][0] == 'X'))
    {
        return 1;
    }
    else if ((board[0][1] == 'X') && (board[1][1] == 'X') && (board[2][1] == 'X'))
    {
        return 1;
    }
    else if ((board[0][2] == 'X') && (board[1][2] == 'X') && (board[2][2] == 'X'))
    {
        return 1;
    }


    else if ((board[0][0] == 'X') && (board[1][1] == 'X') && (board[2][2] == 'X'))
    {
        return 1;
    }
    else if ((board[0][2] == 'X') && (board[1][1] == 'X') && (board[2][0] == 'X'))
    {
        return 1;
    }

    if ((board[0][0] == 'O') && (board[0][1] == 'O') && (board[0][2] == 'O'))
    {
        return 1;
    }
    else if ((board[1][0] == 'O') && (board[1][1] == 'O') && (board[1][2] == 'O'))
    {
        return 1;
    }
    else if ((board[2][0] == 'O') && (board[2][1] == 'O') && (board[2][2] == 'O'))
    {
        return 1;
    }

    else if ((board[0][0] == 'X') && (board[1][0] == 'X') && (board[2][0] == 'X'))
    {
        return 1;
    }
    else if ((board[0][1] == 'O') && (board[1][1] == 'O') && (board[2][1] == 'O'))
    {
        return 1;
    }
    else if ((board[0][2] == 'O') && (board[1][2] == 'O') && (board[2][2] == 'O'))
    {
        return 1;
    }

    else if ((board[0][0] == 'O') && (board[1][1] == 'O') && (board[2][2] == 'O'))
    {
        return 1;
    }
    else if ((board[0][2] == 'O') && (board[1][1] == 'O') && (board[2][0] == 'O'))
    {
        return 1;
    }
    return 0;
}


void move(int num, int player)
{
    char ch = (player == 1) ? 'X' : 'O';

    if (num == 1)
    {
        board[0][0] = ch;
    }
    else if (num == 2)
    {
        board[0][1] = ch;
    }
    else if (num == 3)
    {
        board[0][2] = ch;
    }
    else if (num == 4)
    {
        board[1][0] = ch;
    }
    else if (num == 5)
    {
        board[1][1] = ch;
    }
    else if (num == 6)
    {
        board[1][2] = ch;
    }
    else if (num == 7)
    {
        board[2][0] = ch;
    }
    else if (num == 8)
    {
        board[2][1] = ch;
    }
    else if (num == 9)
    {
        board[2][2] = ch;
    }
}

int isValidMove(int input)
{
    int row = (input - 1) / 3;
    int col = (input - 1) % 3;
    return (input >= 1 && input <= 9 && board[row][col] == ' ');
}


int main() {
    int player = 1; 
    int input;

    ttt();
    printf("Press Enter to Start The Game ");
    getchar();
    system("cls");
    for (int i = 0; i < 9; i++) {
        draw(); 
        printf("Player %d's Turn (Enter 1-9): ", player);

        
        while (scanf("%d", &input) != 1 || !isValidMove(input)) {
            printf("Invalid move! Enter a valid number (1-9): ");
            while (getchar() != '\n'); 
        }
        move(input, player);

        
        if (check()) {
            draw();
            printf("Player %d wins!! ^_^\n", player);
            return 0;
        }

    
        player = (player == 1) ? 2 : 1;
    }

    draw();
    printf("It's a draw!\n");
    return 0;
}