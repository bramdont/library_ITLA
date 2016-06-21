/*
 * Menu.cpp
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#include "Menu.h"
#include "Stack.h"
#include <iostream>

using namespace std;

void Menu::show()
{
	int option;
	do
	{
		cout << "1- List of books." << endl;
		cout << "2- Push book." << endl;
		cout << "3- Get the last book of the stack." << endl;
		cout << "4- Find book by category." << endl;
		cout << "5- Exit." << endl;
		cout << "Select an option => ";
		cin >> option;
		if(validate(option))
		{
					action(option);
		}
	} while (option != 5);
}

void Menu::pushBook()
{
	string name;
	string author;
	string editorial;
	string pDate;
	string category;

	Element* book;
	Stack* stack;

	cout << "Type the book's name: ";
	cin >> name;
	cout << "\nType the book's author: ";
	cin >> author;
	cout << "\nType the book's editorial: ";
	cin >> editorial;
	cout << "\nType the book's publication date: ";
	cin >> pDate;
	cout << "Type the book's category: ";
	cin >> category;

	book ->_name = name;
	book ->_author = author;
	book->_editorial = editorial;
	book ->_pDate = pDate;
	book ->_category = category;

	stack->push(book);
	cout << "New book added successfully." << endl;

}

void Menu::popBook()
{
	Stack* stack;

	stack->pop();
	cout << "The book has been taken successfully." << endl;

}

void Menu::action(int option)
{
	switch (option)
	{
		case 1:
		{
			//listBook();
		}
		case 2:
		{
			pushBook();
		}
		case 3:
		{
			popBook();
		}
		case 4:
		{
			//findBook();
		}
		case 5:
		{
			cout << "Thanks for using our software, good bye!" << endl;
		}
	}
}

bool Menu::validate(int option)
{
	if(option >= 1 && option <= 5)
	{
		return true;
	}else
	{
		cout << "Please pick an option between 1 and 5"<< endl;
		return false;
	}
}

Menu::Menu()
{

}

