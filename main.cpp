#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstName;
    string lastName;
    int age;
    string address;
    string idNum;

    cout << "Enter your First Name: ";
    getline (cin, firstName);

    cout << "Enter your Last Name: ";
    getline (cin, lastName);

    cout << "Enter your age: ";
    cin >> age;
    cin.ignore();

    cout << "Enter your Address: ";
    getline (cin, address);

    cout << "Enter your ID Number: ";
    getline (cin, idNum);

    cout << "_____________________________________" << endl;

    int display;

    cout << "What do you want to display? Choose from the list below and type the number:" << endl;
    cout << "1. Full Name, ID number, Address, Age" << endl;
    cout << "2. Last name, First Name, Address, Age, ID Number" << endl;
    cout << "3. Last name, ID Number" << endl;
    cout << "4. First Name, Last Name, ID Number" << endl;
    cout << "Number: ";
    cin >> display;

    cout << "_____________________________________" << endl;

    if (display == 1){
        cout << "Full Name: " << firstName << " " << lastName << endl;
        cout << "ID Number: " << idNum << endl;
        cout << "Address: " << address << endl;
        cout << "Age: " << age << endl;
    }else if (display == 2){
        cout << "Last Name: " << lastName << endl;
        cout << "First Name: " << firstName << endl;
        cout << "Address: " << address << endl;
        cout << "Age: " << age << endl;
        cout << "ID Number: " << idNum << endl;
    }else if (display == 3){
        cout << "Last Name: " << lastName << endl;
        cout << "ID Number: " << idNum << endl;
    }else if (display == 4){
        cout << "First Name: " << firstName << endl;
        cout << "Last Name: " << lastName << endl;
        cout << "ID Number: " << idNum << endl;
    }


    return 0;
}
