/*
39-tower-of-hanoi	2014-11-05 10:11
Program name : Tower of hanoi
Author : Mohammad Ghobadi
Email : ghobadi.mhd@outlook.com
describtion : This is program for solving tower of hanoi  .
*/
#include <stdio.h>
const int numberOfDisks=10 , pathLength=3000 ;
//Compile error when using pathLength : error: variably modified ‘path’ at file scope
int endOfPath=-1, path[3000] , moves[6][2]={{0,1},{0,2},{1,0},{1,2},{2,0},{2,1}} , moveNumber=0;
struct Tower 
{
	int topIndex /*point to last disk*/, disks[10] ;
} tower[3];
void initialing();
int move(int);
void reverseMove();
void printPath();
/*
this is main function that check the moves and looking for path to succeed , it try moves until find a deadlock path or succeed 
if it find a deadlock , revese last move and try a next availble move until it find path to succeed  
succeed means that tower number filled up ...
*/
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
			moveNumber=path[endOfPath] + 1 ;
		}
		if(tower[2].topIndex==numberOfDisks-1)
			win=1;
	}while(!win);
	return 0;
}
/*
this is function initialing ... .
*/
void initialing()
{
	for (int i = 1; i <3; i++) 
	{
		tower[i].topIndex =-1;
	}
	for (int i = 1; i <=numberOfDisks; i++) 
	{
		tower[1].disks[i-1]=i;
		tower[1].topIndex++;
	}
}

/*
this is function that is try to make a move and add it to the path , if it successfull return true .
rules : 1-we can't put the bigger disk on smaller one 
	2-current destination can not be last move orgin , because it is unnessesery move and makes loop
*/
int move(int moveNum)
{
	int lastMove[2]=moves[path[endOfPath]] , currentMove[2]=moves[moveNum];
	if(lastMove[0]!=currnetMove[1] 
	&& tower[currentMove[0]].disks[tower[currentMove[0]].topIndex] < tower[currentMove[1]].disks[tower[currentMove[1]].topIndex])
	{
		tower[currentMove[1]].disks[++(tower[currentMove[1]].topIndex)] = tower[currentMove[0]].disks[tower[currentMove[0]].topIndex] ;
		tower[currentMove[0]].topIndex--;
		path[++endOfPath]=moveNum;
		return 1 ;
	}
	return 0
}
