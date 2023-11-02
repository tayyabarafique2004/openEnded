#include<iostream>
using namespace std;
/*int main()
{
	string book1 = "OHS";
	string book2 = "COMPUTER";
	string book3 = "ART";
	string borrow;
	int choice;
	int days;
	int fine;

	string return_book;
	cout << "enter you choice : Press 1 to borrow book or 2 to return book and 3 to calculate fine =";
	cin >> choice;
	if (choice == 1)
	{
		cout << "which book you want to borrow:\t OHS \t COMPUTER \t ART = ";
		cin >> borrow;
		if (borrow == book1 || borrow == book2 || borrow == book3)
		{
			cout << "you have borrowed " << borrow << " successfully";
		}
		else
		{
			cout << "this book is not available ";
		}
	}
	else if (choice == 2)
	{
		cout << "show data for how many days you had the book = ";
		cin >> days;
		if (days > 15)
		{
			fine = days - 15 * 1;
			cout << "pay " << fine << " $ and then return the book ";
		} 
		else
		{
			cout << "which book do you want to return : OHS \t COMPUTER \t ART=";
			cin >> return_book;

			if (return_book == book1 || return_book == book2 || return_book == book3)
			{
				cout << "thanks for returning book ";

			}
			else
			{
				cout << "invalid name entered";
			}
		}
	}
	else if (choice == 3)
	{
		cout << "show data for how many days you had the book = ";
		cin >> days;
		if (days > 15)
		{
			fine = days - 15 * 1;
			cout << "pay " << fine << " $";
			
		}
		else
		{
			cout << "you have clear dues Thank You !";
		}
	}
	else 
	{
		cout << "invalid choice";
	}
	return 0; 
}*/

int main()
{
	int  num, p = 1,choice,e;
	cout << "enter 1 to generate prime numbers and 2 to check prime number=";
	cin >> choice;
	if (choice == 1)
	{
		cout << "enter ending point="
			cin >> e;
		
		for (int i = 2; i <= num / 2; i++)
		{
			for (i = 2; i <= e; i++)
			{
				if (num % i == 0)
				{
					p = 0;
					break;

				}
				if (p == 1)
				{
					cout << i;
				}
			}
		}
	}



	if (choice == 2)
	{
		cout << "enter the number you want to check =";
		cin >> num;


		for (int i = 2; i <= num / 2; i++)
		{
			if (num % i == 0)
			{
				p = 0;
				break;

			}
			if (p == 1)
			{
				cout << num << "is a prime number";
			}
		}
	}

	return 0;
