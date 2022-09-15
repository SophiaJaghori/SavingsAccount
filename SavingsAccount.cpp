// 
// SavingsAccount.cpp
// Hameeda Jaghori
// CIS 554-M401 Object Oriented Programming in C++
// Homework #6
//  (SavingsAccount Class) Create a SavingsAccount class.
//

#include "SavingsAccount.h"
#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;


SavingsAccount::SavingsAccount()
{
	savingsBalance = 0; // default constructor with zero balance in it

}
SavingsAccount::SavingsAccount(double newBal) { // consturctor with new balance
	savingsBalance = newBal;
}
SavingsAccount:: ~SavingsAccount() { // destructor for savings account

}
void SavingsAccount::calculatMonthlyInterest()
{
	savingsBalance = savingsBalance + (savingsBalance * annualInterestRate) / 12;  // adds monthly interest in the savings account.

}
double SavingsAccount::annualInterestRate{ 0 };



void SavingsAccount::modifyInterestRate(double newRate)
{
	SavingsAccount::annualInterestRate = newRate;
}
double SavingsAccount::getBalance()
{
	return savingsBalance;
}
std::ostream& operator<<(std::ostream& output, SavingsAccount saver)
{
	output << "new balance with " << std::setprecision(1) << SavingsAccount::annualInterestRate * 100
		<< "% annual interest applied: $" << std::setprecision(2) << std::fixed
		<< std::showpoint << saver.getBalance() << endl;

	return output; // enables cout << saver
}
void SavingsAccount::setDepositAmount(double deposit)
{
	savingsBalance += deposit;
   
}
void SavingsAccount::setWithdrawalAmount(double withdraw)
{
	savingsBalance -= withdraw;
}