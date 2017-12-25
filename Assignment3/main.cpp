#include"List.h"
#include<iostream>
using namespace std;


int main()
{

	List l;


	int menu = 0;//the menu selection
	int x = 0;
	cout << "Enter 1 to Insert " << "\n";
	cout << "Enter 2 to Delete  " << "\n";
	cout << "Enter 3 to display " << "\n";
	cout << "Enter 4 to Smallest " << "\n";
	cout << "Enter 5 to Largest " << "\n";
	cout << "Enter 6 to Range " << "\n";
	cout << "Enter 7 to Exit " << "\n";
	cin >> menu;
	while (menu != 7)
	{
		if (menu == 1)
		{
			cout << "Enter an Integer to Insert ";
			cin >> x;
			cout << "\n";
			l.InsertAtEnd(x);
		}
		if (menu == 2)
		{
			cout << "Enter an Integer to be deleted";
			cin >> x;
			cout << "\n";

			if (l.Empty() == false)
			{
				l.Delete(x);
			}
			else
			{
				cout << "List is Empty" << "\n";
			}
		}
		if (menu == 3)
		{
			if (l.Empty() == false)
			{
				l.Display();
			}
			else
			{
				cout << "List is Empty" << "\n";
			}
		}
		if (menu == 4)
		{
			cout << "Smallest " << l.Smallest() << "\n";
		}
		if (menu == 5)
		{
			cout << "largest " << l.Largest() << "\n";
		}
		if (menu == 6)
		{
			cout << "RANGE " << l.Range() << "\n";
		}


		cout << "Choose an option from 1 to 7 ";
		cin >> menu;
	}

//	system("pause");
	return 0;
}
