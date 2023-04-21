#include <iostream>
using namespace std;

int getDigit(const int number);
int sumOddDigits(const string cardNumber);
int sumEvenDigits(const string cardNumber);

int main()
{
    string cardNumber;
    int result;

    cout << "Enter a card Number: \n";
    cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if(result % 10 == 0)
    {
        cout << cardNumber << " is valid";
    }
    else
    {
        cout << cardNumber << " is not valid";
    }

    return 0;
}


getDigit(const int number)
{
    return number %  10 + (number / 10 % 10);
}
sumOddDigits(const string cardNumber)
{
    int sum = 0;

    for(int i = cardNumber.size() - 1; i >= 0; i-=2)
    {
        sum += cardNumber[i] - 'o';
    }
    return 0;
}
sumEvenDigits(const string cardNumber)
{
    int sum = 0;

    for(int i = cardNumber.size() - 2; i >= 0; i-=2)
    {
        sum += getDigit((cardNumber[i] - 'o') * 2);
    }

    return sum;
}