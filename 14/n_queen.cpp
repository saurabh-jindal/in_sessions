#include <iostream>
using namespace std;

bool can_place(int board[][8],int m,int n)
{
	for (int i = 0; i < 8; ++i)
	{
		if(board[i][n] == 1)
			return false;
	}
	int arr[4][2] = {{1,1},
					 {1,-1},
					 {-1,1},
					 {-1,-1}};
	for(int i = 1;i<8;i++)
	{
		for(int j = 0;j<4;j++)
		{
			int next_x = m+i*arr[j][0];
			int next_y = n+i*arr[j][1];

			if(next_x<8 && next_x>=0 && next_y<8 &&
				next_y>=0 && board[next_x][next_y] == 1)
				return false;

		}
	}
	return true;
}

bool place_queen(int board[][8],int row)
{
	if(row >=8)
		return true;
	for(int i = 0;i<8;i++)
	{
		if(can_place(board,row,i))
		{
			board[row][i] = 1;
			if(place_queen(board,row+1))
				return true;
			else
				board[row][i] = 0;
		}
	}
	return false;
}

int main()
{
	int board[8][8] = {0};
	cout<<place_queen(board,0)<<endl;
	for (int i = 0; i < 8; ++i)
	{
		for(int j = 0;j<8;j++)
		{
			cout<<board[i][j]<<" ";
		}
		cout<<endl;
	}
}