#include<iostream>
#include"CheckingAccount.cpp"
#include"Account.cpp"
#include"SavingAccount.cpp"
using namespace std;
bool CheckingToSaving(CheckingAccount& c, SavingAccount& s, const double a)
//transfer an amount of money from a checking account to a saving account. The checking account
//should pay a transaction fee for withdrawing. Return true when
//the transaction is successful.
{
    if ( c.balance >= a + c.transactFeeW )
    {
        c.balance = c.balance - a - c.transactFeeW;
        s.balance = s.balance + a;
        cout << endl;
        return true;
    }
    else
    {
        cout << "Transfer transaction fail" << endl;
        return false;
    }
    return true;
}
bool SavingToChecking(SavingAccount& c, CheckingAccount& s, const double a)
{
    if ( c.balance >= a + c.transactFee )
    {
        c.balance = c.balance - a - c.transactFee;
        s.balance = s.balance + a;
        return true;
    }
    else
    {
        cout << "Transfer transaction fail" << endl;
        return false;
    }
    return true;
}
int main ()
{
    Account bAcnt(100.0);
    SavingAccount sAcnt(110.0, 0.05);
    bAcnt = sAcnt;
    /* cout << "create a saving account" << endl;
    SavingAccount sAcnt(300.0,0.05);
    sAcnt.print();
    sAcnt.debit(50.0);
    cout << "new balance after withdrawing $50 from the saving account: " << sAcnt.getBalance() << endl;
    sAcnt.credit(150.0);
    cout <<"New balance after depositing $150 to the saving account: " << sAcnt.getBalance()<< endl;
    sAcnt.print();
    cout <<" Interest of the saving account: " << sAcnt.calculateInterest() << endl;
    cout <<"New balance after adding interest: " << sAcnt.getBalance() << endl;
    cout << "Withdrawing 80 from the saving account:" << endl;
    sAcnt.debit(800);

    cout << "\nCreate a checking account." << endl;
    CheckingAccount cAcnt(400.0, 0.02);
    cAcnt.print();
    cAcnt.debit(200.0);
    cout <<" New balance after withdrawing S200 from the checking account: " << cAcnt.getBalance() << endl;
    cAcnt.credit(150.0);
    cout <<"New balance after depositing $150 to the checking account: " << cAcnt.getBalance() << endl;
    cout << endl;

    cAcnt. print();
    sAcnt.print();
    cout << "\nAfter transfer $600 from cAcut to sAcnt:" << endl;
    CheckingToSaving(cAcnt, sAcnt, 600.0);
    cout << "New balance of cAcnt " << cAcnt.getBalance() <<"New balance of sAcat: " << sAcnt.getBalance() <<endl;
    cout << "\nAfter transfer S800 from sAcnt to sAcnt " << endl;
    SavingToChecking(sAcnt, cAcnt, 800.0);
    cout << "New balance of cAcnt " << cAcnt.getBalance() <<"New balance of sAcnt " << sAcnt.getBalance() <<endl;
    CheckingToSaving(cAcnt, sAcnt, 50.0);
    cout << "\nAfter transfer $50 from cAcnt to sAcnt" << endl;
    cout << "New balance of cAcnt " << cAcnt.getBalance() <<"New balance of sAcnt " << sAcnt.getBalance() <<endl;
    SavingToChecking(sAcnt, cAcnt, 50.0);
    cout << "\nAfter transfer $50 from sAcnt to cAcnt: " << endl;
    cout << "New balance of c.Acnt: " <<cAcnt.getBalance()<< "New balance of sAcnt: "<< sAcnt.getBalance() <<endl; */
}