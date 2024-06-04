#include<iostream>
#include<vector>
using namespace std;

void printSol(vector<vector<char> > &board, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}
bool isSafe(int row,int col, vector<vector<char> > &board, int n){
    // checking current pe queen is present or not
    int i = row, j = col;
    //check row ->
    while(j >= 0){
        if(board[i][j] == 'Q'){
            return false;
        }
        j--; 
    }
    // check upper left diagonal 
    i = row;
    j = col;
    while (i>=0 && j>=0)
    {
        if(board[i][j] == 'Q'){
            return false;
        }
        i--;
        j--;
    }
    // check lower left diagonal
    i = row;
    j = col;
    while (i<n && j>=0)
    {
        if(board[i][j] == 'Q'){
            return false;
        }
        i++;
        j--;
    }
    // no Queen found -> return true
    return true;
}
void solve(vector<vector<char> > &board, int col,int n ){
    //base case
    if(col >= n){
        printSol(board, n);
        return;
    }

    // 1 case solve
    for(int row = 0;row<n;row++){
        if(isSafe(row,col,board,n)){
        // rakh do
            board[row][col] = 'Q'; // queen is placed
        // reqursion sol
            solve(board,col+1,n);
        //backtracking
            board[row][col] = '-';
        }
    }
}
int main()
{
    int n = 4;
    vector<vector<char> > board(n, vector<char>(n,'-')); // (n*n) board
    int col = 0;
    // 0 -> empty cell
    // 1 -> Queen at the cell
    solve(board, col, n);

return 0;
}