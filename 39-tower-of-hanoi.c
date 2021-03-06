/*
39-tower-of-hanoi	2014-11-05 10:11
Program name : Tower of hanoi
Author : Mohammad Ghobadi
Email : ghobadi.mhd@outlook.com
describtion : This is program for solving tower of hanoi  .
*/
#include <stdio.h>
const int numberOfDisks=9 , pathLength=3000 ;
//Compile error when using pathLength : error: variably modified ‘path’ at file scope
int endOfPath=-1, path[30000] , moves[6][2]={{0,2},{0,1},{1,0},{1,2},{2,0},{2,1}} , moveNumber=0;
struct Tower 
{
	int topIndex /*point to last disk*/, disks[9] ;
} tower[3];
void initialing();
int checkMove(int);
void move(int);
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
		
		for (; moveNumber<6; moveNumber++) 
		{
			haveAMove=checkMove(moveNumber);
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
	printPath();// success path 
	printf("%d\n",endOfPath);
	return 0;
}
/*
this is function initialing ... .
*/
void initialing()
{
	for (int i = 0; i <3; i++) 
	{
		tower[i].topIndex =-1;
	}
	for (int i = 0; i <numberOfDisks; i++) 
	{
		tower[0].disks[i]=numberOfDisks - i;
		tower[0].topIndex++;
	}
}

/*
this is function that is try to make a move and add it to the path , if it successfull return true .
additional rules :
	1-we can't put the bigger disk on smaller one 
	2-current destination can not be last move orgin , because it is unnessesery move and makes loop
*/
int checkMove(int moveNum)
{
	int lastMove[2]={moves[path[endOfPath]][0],moves[path[endOfPath]][1]} , currentMove[2]={moves[moveNum][0],moves[moveNum][1]}; 
	if(tower[currentMove[0]].topIndex > -1) // if orgin not empty
	{
		if(endOfPath < 0 ) // if nothing moved 
		{
			move(moveNum);
			return 1 ;
		}
		else if(lastMove[1]!=currentMove[0]) // rule number 2  ## if 
		{
			if (tower[currentMove[1]].topIndex <0) // if destinatoin is empty make move
			{
				move(moveNum);
				return 1 ;
			}
			//orgin disk should be smaller than destination 
			else if( tower[currentMove[0]].disks[tower[currentMove[0]].topIndex] < tower[currentMove[1]].disks[tower[currentMove[1]].topIndex])
			{
				move(moveNum);
				return 1 ;
			}
		}
	}
		return 0;
}
/*
this is function that move and write it to path .
*/
void move(int moveNum)
{
	int lastMove[2]={moves[path[endOfPath]][0],moves[path[endOfPath]][1]} , currentMove[2]={moves[moveNum][0],moves[moveNum][1]}; 
	tower[currentMove[1]].disks[++(tower[currentMove[1]].topIndex)] = tower[currentMove[0]].disks[tower[currentMove[0]].topIndex] ;
	tower[currentMove[0]].topIndex--;
	path[++endOfPath]=moveNum;
	
}
/*
this is function that revers a last move and remove it from path .
*/
void reverseMove()
{
	int lastMove[2]={moves[path[endOfPath]][0], moves[path[endOfPath]][1]}; 
	tower[lastMove[0]].disks[++(tower[lastMove[0]].topIndex)] = tower[lastMove[1]].disks[tower[lastMove[1]].topIndex] ;
	tower[lastMove[1]].topIndex--;
	endOfPath--;
}
/*
this is function that print path on screen  .
*/
void printPath()
{
	// this kind of print is for debuging  
	for (int i = 0; i <=endOfPath; i++) 
	{
		printf(" %d->%d ",moves[path[i]][0]+1,moves[path[i]][1]+1);
		
	}
	printf("\n");
}
