#include <iostream>
#include <algorithm>

using namespace std;

int evaluate (char b[3][3]) {

    for(int row = 0 ; row < 3 ; row++) {
     if(b[row][0] == b[row][1] && b[row][1] == b[row][2]) {
        if(b[row][0] == 'X') return +10;
        else if (b[row][0] =='O') return -10;
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
        else if(b[0][0] == 'O') return -10; 
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

int minimax(char b[3][3] , int depth , bool isMax) {
    int score = evaluate(b);
    if(score == 10)  return score - depth;
    if(score == -10) return score + depth;
    if(!isMovesLeft(b)) return 0;

    if(isMax) {
        int best = -1000;
        for(int i = 0 ; i<3 ; i++) {
            for(int j = 0 ; j<3 ; j++){
                if(b[i][j] == ' ') {
                    b[i][j] = 'X';
                    best = max(best , minimax(b,depth+1,false));
                    b[i][j] = ' ';
                }
            }
        }
        return best;
    } else {
        int best = 1000;
         for(int i = 0 ; i<3 ; i++) {
            for(int j = 0 ; j<3 ; j++){
                if(b[i][j] == ' ') {
                    b[i][j] = 'O';
                    best = min(best , minimax(b,depth+1,true));
                    b[i][j] = ' ';
                }
            }
        }
        return best;
    }
}

struct Move {
    int row,col;
};

Move findBestMove (char b[3][3]) {
    int bestVal = -1000;
    Move bestMove = { -1 , -1};
    for (int i = 0 ; i < 3 ; i++) {
        for ( int j = 0 ; j<3 ;j++) {
            if(b[i][j] == ' '){
                b[i][j] = 'X';
                int moveVal = minimax(b,0,false);
                b[i][j] = ' ';

                if(moveVal > bestVal) {
                    bestMove.row = i;
                    bestMove.col = j;
                    bestVal = moveVal;
                }
            }
        }
    }
    return bestMove;
}

void printBoard(char b[3][3]){
  cout << "\n";
  for(int i = 0 ; i < 3; i++) {
    for(int j = 0 ; j <3 ; j++) {
        cout<< (b[i][j] == ' ' ? '.' : b[i][j]) << " ";
    }
    cout << "\n";
  }
  cout <<"\n";
}

int main () {
    char board[3][3] = {
        {' ',' ',' '},
        {' ',' ',' '},
        {' ',' ',' '},
    };

    cout<<"Welcome to Tic-Tac-Toe optimized with the minimax algorithm \n";
    cout<<"You are playing the minimizing player(O) the computer maximizing(X)";

    printBoard(board);

    while(true) {
        int r , c;
        cout <<"Enter a move (row and col eg: 0 2): ";
        cin>>r>>c;

        if(r<0 || r>2 || c<0 || c>2 || board[r][c] != ' '){
            cout<<"Invalid Move. Try Again \n";
            continue;
        }
        board[r][c] = 'O';
        printBoard(board);

        if(evaluate(board) == -10) {
            cout<<"You win \n";
            break;
        }

        if(!isMovesLeft(board)) {
            cout<<"It's a draw \n";
            break;
        }

        Move bestMove = findBestMove(board);
        board[bestMove.row][bestMove.col] = 'X';

        cout << "Computer played : (" <<bestMove.row << "," <<bestMove.col << ") \n";
        printBoard(board);

        if(evaluate(board) == 10) {
            cout<<"Computer wins \n";
            break;
        }

        if(!isMovesLeft(board)) {
            cout<<"It's a draw \n";
            break;
        }
    }
   return 0;
}