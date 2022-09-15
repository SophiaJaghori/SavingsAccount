
// 
// SavingsAccount.h
// Hameeda Jaghori
// CIS 554-M401 Object Oriented Programming in C++
// Homework #6
//  (SavingsAccount Class) Create a SavingsAccount class.
//


#define SavingsAccount_h
#define SavingsAccount_h
#include <string>
using std::string;
class SavingsAccount
{
private:
	double savingsBalance; //shows the savings amount that the user has in his account
public:
	friend std::ostream& operator<<(std::ostream&, SavingsAccount);  // returns output stream to print statement

	//construct default
	SavingsAccount();
	~SavingsAccount(); // destructors default
	SavingsAccount(double neBal);// constrauct wiht an argument as new blanace
	void calculatMonthlyInterest(); // gets the monthly interest
	double getBalance(); // returns the amount which is currently in the account
	std::ostream printStatement(); //prints monthly summary based on the current interest rates
	void setDepositAmount(double deposit); // adds to saving
	void setWithdrawalAmount(double withdraw);// removes from saving
	static void modifyInterestRate(double newRate); //sets the static annual interest rate to a new balance
	static double annualInterestRate;  // saves the annual interest rate for each of he savers;





};

