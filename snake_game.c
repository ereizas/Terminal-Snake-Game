#include <stdio.h>
#include <stdlib.h>

#define GRID_LENGTH 20
#define GRID_WIDTH 20

void print_board(char board[GRID_LENGTH][GRID_WIDTH], int grid_length, int grid_width)
{
    for(int i = 0; i<grid_width; ++i){
        printf("%c",'_');
    }
    puts("");
}

int main(int argc, char const *argv[])
{
    print_board(NULL, GRID_LENGTH, GRID_WIDTH);
    return 0;
}
