#include <iostream>
using namespace std;

//Dimensions
#define M 8
#define N 8

void floodFill(int screen[][N],int x,int y,int newColor,int previousColor)
{
    if(x < 0 || y < 0 || x >= M || y >= N)
    {
      return;
    }

    if(screen[x][y] != previousColor)
    {
      return;
    }

    screen[x][y] = newColor;


    floodFill(screen,x+1,y,newColor,previousColor);
    floodFill(screen,x-1,y,newColor,previousColor);
    floodFill(screen,x,y+1,newColor,previousColor);
    floodFill(screen,x,y-1,newColor,previousColor);
}

int main()
{
    int screen[M][N] = {
        {1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 0, 0},
        {1, 0, 0, 1, 1, 0, 1, 1},
        {1, 2, 2, 2, 2, 0, 1, 0},
        {1, 1, 1, 2, 2, 0, 1, 0},
        {1, 1, 1, 2, 2, 2, 2, 0},
        {1, 1, 1, 1, 1, 2, 1, 1},
        {1, 1, 1, 1, 1, 2, 2, 1},
    };

    int newColor = 3;

    floodFill(screen,1,2,newColor,screen[1][2]);

    for (int i=0; i<M; i++) 
    { 
        for (int j=0; j<N; j++) 
           cout << screen[i][j] << " "; 
        cout << endl; 
    }
    return 0;
}