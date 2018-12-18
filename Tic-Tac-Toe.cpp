#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
void display(char array[3][3]);  //function used for display the boxes
struct tic
	{
		int q;
		char ch;
	}t;
int main()
{
	system("color F1");
	int d=1;
	int abc;
	//file handling used to display the instruction and detail
	FILE *p;
	p=fopen("tic.txt","r");
	while(!feof(p))
	{
		t.ch=getc(p);
		printf("%c",t.ch);
	}

	while(d==1)  //while loop run when player want to play again  
	{
	printf("\nPress 1 for Single Player:\nPress 2 for Two Player:\n");
	scanf("%d",&t.q);
	system("cls");  //clear the previous screen
    char arr[3][3];
	for(int i=0;i<3;i++)
	{                                    /* create the empy table for playing game*/
		system("color 37");
		for(int j=0;j<3;j++)
		{
			arr[i][j]='-';
		}
			}
	
		display(arr);     //function used for display the boxes
		
		printf("player 1 sign= X\nplayer 2 sign= O\n");
		int counter=0;
		//player 1 turn:::
		for(int i=0;i<5;i++)      //loop will run five times ,,in every loop 2 turns played
	     { 	
			counter++;
			int a;
			printf("player one turn!!!\n");
			scanf("%d",&a);
			printf("\a");
			int count=0;
			if(count==0)
			system("cls");     
			
		for(int x=0;x<3;x++)
   			{                          //specific box will be selected as  number enterd 
				for(int y=0;y<3;y++)
				{
					count++;
					if(a==count && arr[x][y]!='O' && arr[x][y]!='X')
					{	
		     			arr[x][y]='X';
						break;
					}
					
				}
			}

       display(arr);         // function used for display boxes
       
		printf("\n");
	//checks for win    ::rows::
		for(int z=0;z<3;z++)
		{
			int s=0;
			for(int z1=0;z1<3;z1++)
			{                       
				if(arr[z][z1]=='X')
				{
					s++;
				}
			}
			if(s==3)
			{
				printf("player 1 won\a!!!");
				
				goto abc;
			}
		}
		//column check:::for wins
		for(int z=0;z<3;z++)
		{
			int s=0;
			for(int z1=0;z1<3;z1++)
			{
				if(arr[z1][z]=='X')
				{
					s++;
				}		
			}
			if(s==3)
			{
				printf("player 1 won\a!!!");
				
				goto abc;
			}
		}
		//diagonal::: for wins
			int s=0;
			for(int z1=0;z1<3;z1++)
			{
				if(arr[z1][z1]=='X')
				{
					s++;
				}
			}
			if(s==3)
			{
				printf("player 1 won\a!!!");
				
				goto abc;
			}
			if(arr[0][2]=='X'&&arr[1][1]=='X'&&arr[2][0]=='X')
			{
				printf("player 2 won\a!!!");
				
				goto abc;       //goto abc mean program goes directly to below at abc:
			}
		if(counter==9)
		{
			printf("\nGame Over ..Match Draw\a\n");
			goto abc;                                //means 9 boxes filled so game over
		}
//////////////////////
		if(t.q==1)             //player 2 as computer:: computer give input
		{
		printf("compter turn!!!\n");
		Sleep(1000);   ///delay of 1 seccond
		int f=1;
				while(f==1)
		{
		srand(time(0));
				int b=rand();
				b=b%9+1;             //generate number between 1 and 9
		int countt=0;
		for(int x=0;x<3;x++)
			{                              //select box as input:::
				for(int y=0;y<3;y++)
				{
					countt++;
					if(b==countt && arr[x][y]!='X' && arr[x][y]!='O')
					{
						printf("\a");		
					arr[x][y]='O';
					f=0;
					system("cls");
					break;
				}
				}
			}
		}
}
		////	
		if(t.q==2)
		{                           //player 2 as human player
		printf("player 2 turn:::");
			int b;		
		scanf("%d",&b);
		printf("\a");
		system("cls");
		int countt=0;
		for(int x=0;x<3;x++)   //box selected according to player input
			{
				for(int y=0;y<3;y++)
				{
					countt++;
					if(b==countt && arr[x][y]!='X' && arr[x][y]!='O')
					{			
					arr[x][y]='O';
					break;
				}
				}
			}
		}
	
		display(arr);     //function used for display boxes

		printf("\n");
		//row checks for win
		for(int z=0;z<3;z++)
		{
			int s=0;
			for(int z1=0;z1<3;z1++)
			{
				if(arr[z][z1]=='O')
				{
					s++;
				}
			}
			if(s==3)
			{
				if(t.q==2)
				{
				printf("player 2 won\a!!!");
				
				goto abc;}
				else
				printf("computer won\a!!");
				
				goto abc;
			}
		}
		//column check for win:::
		for(int z=0;z<3;z++)
		{
			int s=0;
			for(int z1=0;z1<3;z1++)
			{
				if(arr[z1][z]=='O')
				{
					s++;
				}		
			}
			if(s==3)
			{
				if(t.q==2)
				{
				printf("player 2 won\a!!!");
				
				goto abc;}
				else
				printf("computer won\a!!");
				
				goto abc;;
			}
			}
		
		//diagonal checks for win::: 
			int s1=0;
			for(int z1=0;z1<3;z1++)
			{
				if(arr[z1][z1]=='O')
				{
					s1++;
				}
			}
			if(s1==3)
			{
				if(t.q==2)
				{
				printf("player 2 won\a!!!");
				
				goto abc;}
				else
				printf("computer won\a!!");
				
				goto abc;
			}	
			 if(arr[0][2]=='O'&&arr[1][1]=='O'&&arr[2][0]=='O')
			{
				if(t.q==2)
				{
				printf("player 2 won\a!!!");
				
				goto abc;}
				else
				printf("computer won\a!!");
				
				goto abc;
			}
			counter++;
		}		
printf("\n Game Draw\a");
system("pause");
abc:
{
printf("\nPress 1 to go back to main menu: \n ");
scanf("%d",&d);
system("cls");
}
}
printf("\n\n\n\t\tHave a Good Day!!!\n\n\t!!!!We hope you enjoy the Game!!!!\n\n");
return 0;
}
//////////
void display(char array[3][3])
{
	
	for(int i=0;i<3;i++)
	{
		
		printf("\n\n\n");
		for(char j=0;j<3;j++)      //display boxes
		{
			printf("\t\t   %c   ",array[i][j]);		
		}
		printf("\n\n\n");
		}	
}
