// shOOP.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "stdafx.h"
#include "Shop.h"
using namespace std;

int main()
{

	Shop *shop = new Shop();
	string command;
	cout << "please enter command: ";
	do
	{
		char temp[50];
		cin.getline(temp, 50);
		command = string(temp);
		string command1, command2, command3, command4;
		string *currentlyWritingTo = &command1;
		for (unsigned int i = 0; i<command.length(); i++)
		{
			if (command[i] == ' ')
			{
				// hande up to 4 options
				if (currentlyWritingTo == &command1) currentlyWritingTo = &command2;
				else if (currentlyWritingTo == &command2) currentlyWritingTo = &command3;
				else if (currentlyWritingTo == &command3) currentlyWritingTo = &command4;
				else *currentlyWritingTo += command[i];
			}
			else *currentlyWritingTo += command[i];
		}
		if (command1 == "login")
		{
			//TO DO
			char username[50], password[50];
			cout << "Please enter username: ";
			cin >> username;
			cout << "Please enter password: ";
			cin >> password;
			int status = mainLibrary->Login(userna/*me, password);
			if (status == 0) cout << "logged in successfully";
			if (status == -1) cout << "wrong user name or password";*/
		}
		else if (command1 == "logout")
		{
			/*TO DO
			mainLibrary->Logout();*/
		}
		else if (command1 == "books")
		{
			if (command2 == "add")
			{
				//TO DO

			}
			else if (command2 == "remove")
			{
				//TO DO
				char* tempEnter = new char[50];

			}
			else if (command2 == "all")
			{
				//TO DO
			}
			else if (command2 == "info")
			{
				//TO DO
				char temp[50];
				strncpy(temp, command3.c_str(), 50);
				try
				{
					// print 
				}
				catch (int e)
				{
					if (e == -1) cout << "No book was found with ISBN " << temp;
					else cout << "An error occurred";
				}
			}
			else if (command2 == "find")
			{
				//TO DO
				/*int booksFound = 0;
				Book *books = new Book[50];
				char temp[50];
				char temp2[50];
				books = mainLibrary->FindBookBy(strncpy(temp, command3.c_str(), 50), strncpy(temp2, command4.c_str(), 50), &booksFound);
				cout << "amount of books found: " << booksFound << endl;
				for (int i = 0; i<booksFound; i++)
				{
					books[i].PrintBook();
					if (i != 0) cout << endl << "----" << endl;
				}*/
			}
			else cout << "unknown command. ";
		}
		else if (command1 == "exit")
		{
			cout << "see you soon :)";
			break;
		}
		else cout << "unknown command. ";

		cout << endl << endl << "please enter command: ";
	} while (true);
	return 0;
}

