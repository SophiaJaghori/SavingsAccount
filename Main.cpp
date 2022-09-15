// 
// Main.cpp
// Hameeda Jaghori
// CIS 554-M401 Object Oriented Programming in C++
// Homework #6
// 8/22/2022
//  (SavingsAccount Class) Create a SavingsAccount class.
//

#include "SavingsAccount.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>


using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<SavingsAccount>Acc; // holds all accounts 
	double interestRate; //
	char UserInput; // stores user input
	int accountSelect = 1; // selects between user 1 and user 2
	double amount; // for deposit and withrawals
	cout << " \t\t\t Welcome to your savings account tracker! \n";

	SavingsAccount saver1 = (2000);
	Acc.push_back(saver1);
	cout << "- saver1 with initial balance of: $"
		<< std::setprecision(2) << std::fixed << Acc[0].getBalance() << endl;

	SavingsAccount saver2 = (3000);
	Acc.push_back(saver2);
	cout << "- saver2 account generated with initial balance of: $"
		<< Acc[1].getBalance() << endl;

	// now calculating balance with 3% intereste rate
	cout << "\t\t calculating the interest rate with 3%\n";
	SavingsAccount::modifyInterestRate(0.03);

	Acc[0].calculatMonthlyInterest();
	cout << " \t\t saver 1 " << Acc[0];

	Acc[1].calculatMonthlyInterest();
	cout << " \t\t saver 2 " << Acc[1];

	// now calculating balance with 4% intereste rate

	cout << "\t\t calculating the interest rate with 4%\n";
	SavingsAccount::modifyInterestRate(0.04);

	Acc[0].calculatMonthlyInterest();
	cout << " \t\t saver 1 " << Acc[0];

	Acc[1].calculatMonthlyInterest();
	cout << " \t\t saver 2 " << Acc[1];

	// testing and asking the user to test each function's member
	cout << "entert your choice and use characters for entering you choice!";
	cin >> UserInput;
	while (UserInput != 'Q')
	{
		cout << "\n\t\tSelect an option for saver" << accountSelect;
		cout << "\n\n\t\t\ choose (c) for new account (v) for View Balance, (m) modify interest rate."
			<< " \n\t\t(d) for Deposit , (w) for withraw money and (g) for generate monthly Balance (e) to Exit !";
		cin >> UserInput;
		//system("clr");
		switch (UserInput)
		{
		case 'C':
			while (1 == 1)
			{
				cout << "\n\t\t\Which account would you like to choose: saver(1) or saver(2): ";
				cin >> accountSelect;
				if (accountSelect == 1 || accountSelect == 2)
				{
					cout << "\n\t\t switched to saver" << accountSelect << endl;
					break;
				}
				else
				{
					cout << "\t\tinvalid input try again\n";

				}
			}
			break;
		case 'D': //Deposits funds to account
			cout << "\t\tEnter dollar amount to deposit: $";
			cin >> amount;
			Acc[accountSelect - 1].setDepositAmount(amount);
			break;
		case 'G': // Generates new monthly balance with applied interest rate
			cout << "\t\tGenerating new Monthly balance for saver" << accountSelect << endl;
			Acc[accountSelect - 1].calculatMonthlyInterest();
			cout << "- saver" << accountSelect << " " << Acc[accountSelect - 1];
			break;
		case 'W':   //withdraws funds from account
			cout << "\t\tEnter dollar amount to withdraw: $";
			cin >> amount;
			Acc[accountSelect - 1].setWithdrawalAmount(amount);
			break;
		case 'M': // Modifies interest rate
			cout << "\t\tEnter a new annual interest rate as a decimal percentage (example .05 for 5%): ";
			cin >> interestRate;
			SavingsAccount::modifyInterestRate(interestRate);
			break;
		case 'V':
			cout << "\t\tHere's saver" << accountSelect << " account balance: $"
				<< Acc[accountSelect - 1].getBalance() << endl;
			break;
		case 'Q':
			cout << "\t\tThank you for playing, Have a nice day";
			break;


		default:
			cout << "\t\tPlease choose the option from the obove!";
			break;
		}

	}





}