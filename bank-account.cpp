#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;


void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
  double balance = 0;
  int choice = 0;

  do{
    cout << "********************************\n";
    cout << "****** Enter Your Choice ******\n";
    cout << "********************************\n";
    cout << "1. Show Balance" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cin >> choice;

    cin.clear();
    fflush(stdin);

    switch (choice)
    {
      case 1: showBalance(balance);
        break;
      case 2: balance += deposit();
        showBalance(balance);
        break;
      case 3: balance -= withdraw(balance);
        showBalance(balance);
        break;
      case 4: cout << "Thanks for visiting\n";
        break;
      default: cout << "invalid balance\n";
    }
  }
  while (choice != 4);
  
  return 0;
}

void showBalance(double balance)
{
  cout << "Your amount is: " << setprecision(2)<< fixed << balance << endl;
}
double deposit()
{
  double amount = 0;

  cout << "Enter amout to  be deposited: ";
  cin >> amount;

  if(amount > 0)
  {
    return amount;
  }
  else
  {
    cout << "Amount is not a valid amount: ";
    return 0;
  }
 
}
double withdraw(double balance)
{
  double amount = 0;

  cout << "Enter amount to be withdraw: " << endl;
  cin >> amount;

  if (amount > balance)
  {
    cout << "insufficient funds\n";
    return 0;
  }
  else if (amount < 0)
  {
    cout << "This is not a valid amout\n";
    return 0;
  }
  else
  {
    return amount;
  }
}