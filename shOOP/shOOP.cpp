// shOOP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Shop.h"

const std::string ukstr = "Unknown command!\n";
using std::cin;
using std::cout;

int main()
{

	Shop *shop = new Shop();
	std::string command;
	cout << "please enter command: ";
	do
	{
		char temp[50];
		cin.getline(temp, 50);
		command = std::string(temp);
		std::string command1, command2, command3, command4;
		std::string *currentlyWritingTo = &command1;
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
		if (command1 == "product")
		{
			if (command2 == "add")
			{
				//TODO
			}
			else cout << ukstr;
		}
		else if (command1 == "client")
		{
			if (command2 == "add")
			{
				//TODO
			}
			else cout << ukstr;
		}
		else if (command1 == "shop")
		{
			if (command2 == "change")
			{
				if (command3 == "name")
				{
					//TODO
				}
				else if (command3 == "worktime")
				{
					//TODO
				}
				else if (command3 == "capital")
				{
					//TODO
				}
				else if (command3 == "workers")
				{
					//TODO
				}
				else cout << ukstr;
			}
			else if (command2 == "boot")
			{
				//TO DO

			}
			// Try/catch example! 
			//else if (command2 == "info")
			//{
			//	//TO DO
			//	char temp[50];
			//	strncpy_s(temp, command3.c_str(), 50);
			//	try
			//	{
			//		// print 
			//	}
			//	catch (int e)
			//	{
			//		if (e == -1) cout << "No book was found with ISBN " << temp;
			//		else cout << "An error occurred";
			//	}
			//}
			else cout << ukstr;
		}
		else if (command1 == "sell")
		{
			if (command2 == "normal")
			{
				//TODO
			}
			else if (command2 == "proform")
			{
				//TODO
			}
			else if (command2 == "invoice")
			{
				//TODO
			}
			else cout << ukstr;
		}
		else if (command1 == "proform")
		{
			if (command2 == "disband")
			{
				//TODO
			}
			else cout << ukstr;
		}
		else if (command1 == "exit")
		{
			return 0;
		}
		else cout << "unknown command. ";

		cout << std::endl << std::endl << "please enter command: ";
	} while (true);
	return 0;
}

