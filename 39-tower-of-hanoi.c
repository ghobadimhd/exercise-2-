/*
39-tower-of-hanoi	2014-11-05 10:11
Program name : Tower of hanoi
Author : Mohammad Ghobadi
Email : ghobadi.mhd@outlook.com
describtion : This is program for solving tower of hanoi  .
*/
#include <stdio.h>
const int numberOfDisks=10 , pathLength=3000 ;
int endOfPath=-1, path[pathLength] , moves[6][2]={{0,1},{0,2},{1,0},{1,2},{2,0},{2,1}} , moveNumber=0;
struct Tower 
{
	int topIndex , disks[nummberOfDisks] ;
} tower[3];
void initialing();
int move(int);
void reverseMove();
void printPath();

int main(int argc, const char *argv[])
{
	int win=0 , haveAMove=1;
	initialing();
	do
	{
		
		if(haveAMove)
			moveNumber=0;
		//haveAMove=0;
		for (; moveNumber<6; moveNumber++) 
		{
			haveAMove=move(moveNumber);
			if(haveAMove)
				break;
		}
		if(moveNumber==6)
		{
			reverseMove();
			moveNumber=Path[endOfPath] + 1 ;
		}
		if(tower[2].topIndex==numberOfDisks-1)
			win=1;
	}while(!win);
	return 0;
}



