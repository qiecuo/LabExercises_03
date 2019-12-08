// Lab 1: SavingsAccount.cpp
// Member-function definitions for class SavingsAccount.

#include "SavingsAccount.h" // SavingsAccount class definition
#include "Account.h"
// constructor initializes balance and interest rate
/* Write the SavingsAccount constructor to call the Account constructor
   and validate and set the interest rate value */
SavingsAccount::SavingsAccount(const double & accountBalance,const double & rate)
: Account::Account(accountBalance)
{

    if(interestRate>=0)
        interestRate=rate;
    else
        interestRate=0;
}
// return the amount of interest earned
/* Write the calculateInterest member function to return the
   interest based on the current balance and interest rate */
double SavingsAccount::calculateInterest()
{
    Account::credit(Account::getBalance()*interestRate);
    return Account::getBalance()*interestRate;
}
