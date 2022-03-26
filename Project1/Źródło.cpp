#include <iostream>
#include <cstdlib>
#include <time.h>
#include <Windows.h>
using namespace std;
int AI_time, user_a, user_score;
int main()
{
	srand(time(NULL));
	AI_time = rand() % 50 + 1;
	cout << "Try to guess the number what i generate from 1 to 50";
	while (true)
	{
	cout << "\nSelect the number: ";
	cin >> user_a; 
		
		if (user_a > AI_time)
		{
			cout << "you guess higher number ";
			Sleep(600);
		}
		if (user_a < AI_time)
		{
			cout << "You guess lower number";
			Sleep(600);		
		}
		if (user_a == AI_time)
		{
			cout << "You win!!!!";
			Sleep(600);
			user_score++;
			cout << "\nYour points: " << user_score;
			Sleep(200);
			AI_time = rand() % 50 + 1;
			Sleep(1500);
			system("cls");
		}
		
	}
}