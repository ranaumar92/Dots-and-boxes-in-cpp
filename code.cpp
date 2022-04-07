#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
	cout << "|              Welcome to the the game!                             |" << endl;
	cout << "|                 ( Dot and Boxes )                                 |" << endl;
	cout << "|                Two Player's Game                                  |" << endl;
	cout << "|  Game Rule's:                                                     |" << endl;
	cout << "|    1.To start game enter any number.                              |" << endl;
	cout << "|    2.Players take turns and joined Two adjacent dots.The          |" << endl;
	cout << "|     players who completes fourth side,earns point and take        |" << endl;
	cout << "|     another turn.                                                 |" << endl;
	cout << "|    3. Player should enter the dots position to join the dots.     |" << endl;
	cout << "|    4.At the end,Player with more points win the game.             |" << endl;
	cout << "|   Player 1 name is Rana Umar . Player 2 name is Talha Bin Yousaf.               |" << endl;
	cout << "|               Let's start the game                                |" << endl;
	cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
	string array[25] = { ".","  ",".","  ",".","  ","  ","  ","  ","  ",
		".","  ",".","  ",".","  ","  ","  ","  ","  ",".","  ",".","  ","." };//string array of 25 elements.
	int dot1 = 0, dot2 = 0;              //for dot positions.
	string s;
	for (int b = 0; b <= 24; b++)             //using for loop to display the layout of game without boxes.
	{
		cout << array[b];
		if (b == 4 || b == 9 || b == 14 || b == 19)
			cout << endl;
	}
	cout << endl;
	int turn = 2;
	int box1 = 0, box2 = 0;
	int pl1 = 0, pl2 = 0;
	int boxx1 = 1, boxx2 = 1, boxx3 = 1, boxx4 = 1; //for printing name 
	string hor = "__";               //string for horizontal line
	int player1 = 0, player2 = 0;
	char p1 = 'K';
	char p2 = 'D';
	string ver = "|";
	cout << "To start game enter any number or character or string:";  //for starting game
	cin >> s;
	system("cls");

	while (!(array[1] == hor && array[3] == hor && array[11] == hor && array[13] == hor && array[21] == hor && array[23] == hor && array[5] == ver && array[7] == ver && array[9] == ver && array[15] == ver && array[17] == ver && array[19] == ver))

		//while loop to demand from the user dot position until game is not completed
	{
		cout << endl;
		if (turn % 2 == 0)  //for determining which player turn is it.
		{
			cout << "player 1 turn";
			pl1++;
		}
		else if (turn % 2 == 1)
		{
			cout << "player 2 turn";
			pl2++;
		}
		turn++;
		cout << endl << "enter first dot";
		cin >> dot1;
		cout << "enter second dot";
		cin >> dot2;

		cout << endl;

		if (dot1 == 1 && dot2 == 2 || dot1 == 2 && dot2 == 1)  //To print horizontal line between two dots dot1 and dot2
		{
			array[1] = "__";
			for (int b = 0; b <= 24; b++)
			{
				cout << array[b];
				if (b == 4 || b == 9 || b == 14 || b == 19)
					cout << endl;
			}
		}
		else if (dot1 == 2 && dot2 == 3 || dot1 == 3 && dot2 == 2)  //To print horizontal line between dot2 and dot3.
		{
			array[3] = hor;
			for (int b = 0; b <= 24; b++)
			{
				cout << array[b];
				if (b == 4 || b == 9 || b == 14 || b == 19)
					cout << endl;
			}
		}
		else if (dot1 == 4 && dot2 == 5 || dot1 == 5 && dot2 == 4)  //To print horizontal line between dot4 and dot5.
		{
			array[11] = hor;
			for (int b = 0; b <= 24; b++)
			{
				cout << array[b];
				if (b == 4 || b == 9 || b == 14 || b == 19)
					cout << endl;
			}
		}
		else if (dot1 == 5 && dot2 == 6 || dot1 == 6 && dot2 == 5)  //To print horizontal line between dot5 and dot6.
		{
			array[13] = hor;
			for (int b = 0; b <= 24; b++)
			{
				cout << array[b];
				if (b == 4 || b == 9 || b == 14 || b == 19)
					cout << endl;
			}
		}
		else if (dot1 == 7 && dot2 == 8 || dot1 == 8 && dot2 == 7)  //To print horizontal line between dot7 and dot8.
		{
			array[21] = hor;
			for (int b = 0; b <= 24; b++)
			{
				cout << array[b];
				if (b == 4 || b == 9 || b == 14 || b == 19)
					cout << endl;
			}
		}
		else if (dot1 == 8 && dot2 == 9 || dot1 == 9 && dot2 == 8)  //horizontal line dot8 dot9.
		{
			array[23] = hor;
			for (int b = 0; b <= 24; b++)
			{
				cout << array[b];
				if (b == 4 || b == 9 || b == 14 || b == 19)
					cout << endl;
			}
		}
		else if (dot1 == 1 && dot2 == 4 || dot1 == 4 && dot2 == 1)  //vertical line dot1 and dot4.
		{
			array[5] = ver;
			for (int b = 0; b <= 24; b++)
			{
				cout << array[b];
				if (b == 4 || b == 9 || b == 14 || b == 19)
					cout << endl;
			}
		}
		else if (dot1 == 2 && dot2 == 5 || dot1 == 5 && dot2 == 2)  //vertical line dot2 and dot5.
		{
			array[7] = ver;
			for (int b = 0; b <= 24; b++)
			{
				cout << array[b];
				if (b == 4 || b == 9 || b == 14 || b == 19)
					cout << endl;
			}
		}
		else if (dot1 == 3 && dot2 == 6 || dot1 == 6 && dot2 == 3)  //vertical line dot 3and dot6.
		{
			array[9] = ver;
			for (int b = 0; b <= 24; b++)
			{
				cout << array[b];
				if (b == 4 || b == 9 || b == 14 || b == 19)
					cout << endl;
			}
		}
		else if (dot1 == 4 && dot2 == 7 || dot1 == 7 && dot2 == 4)  //vertical line dot 4 dot7.
		{
			array[15] = ver;
			for (int b = 0; b <= 24; b++)
			{
				cout << array[b];
				if (b == 4 || b == 9 || b == 14 || b == 19)
					cout << endl;
			}
		}
		else if (dot1 == 5 && dot2 == 8 || dot1 == 8 && dot2 == 5)  //vertical line dot 5 dot8.
		{
			array[17] = ver;
			for (int b = 0; b <= 24; b++)
			{
				cout << array[b];
				if (b == 4 || b == 9 || b == 14 || b == 19)
					cout << endl;
			}
		}
		else if (dot1 == 6 && dot2 == 9 || dot1 == 9 && dot2 == 6)  //vertical line dot 6 dot9
		{
			array[19] = ver;
			for (int b = 0; b <= 24; b++)
			{
				cout << array[b];
				if (b == 4 || b == 9 || b == 14 || b == 19)
					cout << endl;
			}
		}
		else             //for wrong input by user
		{
			cout << "wrong input.\n Enter the dots again.";
		}

		do
		{
			if (array[1] == hor && array[5] == ver && array[7] == ver && array[11] == hor)  //to print name in the box
			{
				if (boxx1 == 2)
					break;
				else
				{
					boxx1++;
					cout << "\nenter your name to display in the box:";
					cin >> array[6];
					if (array[6] == "K")
						player1++;
					else
						player2++;
				}
			}
		} while (boxx1 <= 0);
		do
		{
			if (array[7] == ver && array[3] == hor && array[9] == ver && array[13] == hor)  //to print name in the box.
			{
				if (boxx2 == 2)
				{
					break;
				}
				else
				{
					cout << "\nenter nAme to display:";
					cin >> array[8];
					if (array[8] == "K")
						player1++;
					else
						player2++;
					boxx2++;
				}
			}
		} while (boxx2 <= 0);
		do
		{
			if (array[11] == hor && array[15] == ver && array[17] == ver && array[21] == hor)  //to print name in the box.
			{
				if (boxx3 == 2)
				{
					break;
				}
				else
				{
					cout << "\nenter Name to display:";
					cin >> array[16];
					if (array[11] == "K")
					{
						player1++;
					}
					else
					{
						{	player2++;
						}
						boxx3++;
					}
				}
			}
		} while (boxx3 <= 0);
		do
		{
			if (array[17] == ver && array[19] == ver && array[13] == hor && array[23] == hor)  //to print name in the box.
			{
				if (boxx4 == 2)
				{
					break;
				}
				else
				{
					cout << "\nenter naMe to display:";
					cin >> array[18];
					if (array[18] == "K")
					{
						player1++;
					}
					else
					{
						player2++;
						boxx4++;
					}
				}
			}
		} while (boxx4 <= 0);
		cout << "\nenter a number to confirm:";        //to confirm enter any character
		cin >> box1;
		system("cls");
	}
	system("cls");
	for (int b = 0; b <= 24; b++)
	{
		cout << array[b];
		if (b == 4 || b == 9 || b == 14 || b == 19)
			cout << endl;
	}
	cout << "\nplayer 1 score is:" << player1 << "\n player 2 score is:" << player2;
	cout << endl;
	if (player1 == player2)    //to decide the winner
	{
		cout << "\nscores are level\n";
	}
	if (player1 < player2)
	{
		cout << "\nplayer 2 win congrats player 2\n";
	}
	if (player2 < player1)
	{
		cout << "\nplayer 1 wins congrats player 1\n";
	}
	cout << "Thanks for Playing \n";
	system("pause");
	return 0;
}
