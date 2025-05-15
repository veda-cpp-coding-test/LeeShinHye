#include <iostream>
using namespace std;

int board[129][129];
int cnt_white = 0;
int cnt_blue = 0;

bool comp(int x, int y, int N){
    int check = board[x][y];

    for (int i=x; i<x+N; i++){
        for(int j=y; j<y+n; j++){
            if (check != board[i][j])
                return false;
        }
    }

    return true;
}

void func(int x, int y, int N) {
    if (comp(x, y, N)){
        if (board[x][y] == 0) cnt_white++;
        else cnt_blue++;
        return;
    }

    int half = N/2;
    func(x, y, half);
    func(x, y+half, half);
    func(x+half, y, half);
    func(x+half, y+half, half);

}



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for (int i=0; i < N; i++){
        for(int j=0; j<N; j++){
            cin >> board[i][j];
        }
    }

    func(0, 0, N);
    cout << cnt_white << '\n' << cnt_blue;

}