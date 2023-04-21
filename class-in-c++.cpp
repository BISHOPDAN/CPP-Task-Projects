#include <iostream>
using namespace std;
#include <string>


class Employee{
    public:
        string name;
        string company;
        int age;
    

    void pleaseIntroduceYourSelf(){
        cout << "My name is: " << name << '\n';
        cout << "The name of my company is: " << company << '\n';
        cout << "I am " << age << " years old" << '\n';
    }

    Employee(string name, string company, int age){
        this->name = name;
        this->company = company;
        this->age = age;
    }
};

int main(){

    Employee employee1 = Employee("Daniel Successful", "Eccless LDT", 25);
    employee1.pleaseIntroduceYourSelf();


    return 0;
}