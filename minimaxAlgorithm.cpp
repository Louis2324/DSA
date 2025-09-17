#include <iostream>

int evaluate (char b[3][3]) {

    for(int row = 0 ; row < 3 ; row++) {
     if(b[row][0] == b[row][1] && b[row][1] == b[row][2]) {
        if(b[row][0] == 'X') return +10;
        else if (b[row][0] =='Y') return -10;
     }
    }

    for(int col = 0 ; col < 3 ; col++) {
      if(b[0][col] == b[1][col] && b[1][col] == b[2][col]) {
        if(b[0][col] =='X') return +10;
        else if (b[0][col] == 'O') return -10;
      }
    }

    if(b[0][0] == b[1][1] && b[1][1] == b[2][2]) {
        if(b[0][0] == 'X')  return +10;
        else if(b[0][0] == 'Y') return -10; 
    }

    if(b[0][2] == b[1][1] && b[1][1] == b[2][0]){
        if(b[0][2] == 'X') return +10;
        else if(b[0][2] == 'O') return -10;
    }
    return 0;
}

bool isMovesLeft(char b[3][3]) {
    for(int i = 0 ; i<3 ; i++) {
        for(int j = 0; j<3 ; j++) {
            if(b[i][j] == ' ') 
               return true;
        }
    }
    return false;
}

struct Move {
    int row,col;
};


int main () {
    char board[3][3] = {
        {' ',' ',' '},
        {' ',' ',' '},
        {' ',' ',' '},
    };
}