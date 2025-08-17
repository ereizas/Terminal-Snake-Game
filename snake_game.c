#include <stdio.h>
#include <stdlib.h>

#define GRID_LENGTH 20
#define GRID_WIDTH 20

void print_horizontal_border(int grid_width){
    printf("%c",' ');
    for(int i = 0; i<grid_width; ++i)
    {
        printf("%s","- ");
    }
    puts("");
}

void print_board(char board[GRID_LENGTH][GRID_WIDTH], int grid_length, int grid_width){
    print_horizontal_border(grid_width);
    for(int i = 0; i<grid_length; ++i){
        printf("%c",'|');
        for(int j = 0; j<grid_width; ++j){
            printf("%c|",board[i][j]);
        }
        puts("");
        print_horizontal_border(grid_width);
    }
}

int main(int argc, char const *argv[]){
    char board[GRID_LENGTH][GRID_WIDTH];
    for(int i = 0; i<GRID_LENGTH; ++i){
        for(int j = 0; j<GRID_WIDTH; ++j){
            board[i][j] = ' ';
        }
    }
    print_board(board, GRID_LENGTH, GRID_WIDTH);
    return 0;
}
