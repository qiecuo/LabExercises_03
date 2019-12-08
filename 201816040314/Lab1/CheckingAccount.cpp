// Lab 1: CheckingAccount.cpp
// Member-function definitions for class CheckingAccount.
#include <iostream>
using namespace std;

#include "CheckingAccount.h" // CheckingAccount class definition

// constructor initializes balance and transaction fee
/* Write the CheckingAccount constructor to call the Account constructor
   and validate and set the transaction fee value */
 CheckingAccount::CheckingAccount(const double & accountBalance,const double &chargeFee )
 :Account::Account(accountBalance)
 {

     if(chargeFee>=0)
        transactionFee=chargeFee;
     else
        transactionFee=0;
 }
// credit (add) an amount to the account balance and charge fee
/* Write the credit member function to call Account's credit function
   and then charge a fee */
void CheckingAccount::credit(const double & amount)
{
    Account::credit(amount);
    chargeFee();
}
// debit (subtract) an amount from the account balance and charge fee
/* Write the debit member function to call Account's debit function
   and then charge a fee if it returned true*/
bool CheckingAccount::debit(const double & amount)
{
     if(Account::debit(amount)==true)
     {
         CheckingAccount::chargeFee();
         return true;
     }

     return false;
}
// subtract transaction fee
/* Write the chargeFee member function to subtract transactionFee
   from the current balance and display a message */
void  CheckingAccount::chargeFee()
{
    Account::debit(transactionFee);
}
void CheckingAccount::setTransactionFee(const double & chargeFee)
{
    if(chargeFee>=0)
        transactionFee=chargeFee;
     else
        transactionFee=0;
}
double CheckingAccount::getTransactionFee()const
{
      return transactionFee;
}
