#include <iostream>
using namespace std;


int main()
{
    char op;
    double num1;
    double num2;
    double result;


    do{
        cout << "************CALCULATOR*************\n";

        cout << "Enter either (+ - /): ";
        cin >> op;

        cout << "Enter number 1: ";
        cin >> num1;

        cout << "Enter number 2: ";
        cin >> num2; 

        switch(op){
            case '+':
                result = num1 + num2;
                cout << " The result of this is "<< result << '\n';
                    break;
            case '-':
                result = num1 - num2;
                cout << " The result of this is "<< result << '\n';
                    break;
            case '/':
                result = num1 / num2;
                cout << " The result of this is "<< result << '\n';
                    break;
            default: 
                cout << "Not valid input\n";
                    break;
        }
    }
    while (true);


    return 0;
}