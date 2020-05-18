#include<iostream>
#include<string>
using namespace std;

int main() {
    int age;
    string name;
    
    cout << "Enter your age : \n";
    cin >> age;
    cout << "Enter your name : \n";
    getline(cin, name);
   
    cout << "I am " << name <<". I am " << age << " old." << endl;
    return 0;
    
}