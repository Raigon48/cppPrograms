#include<iostream>
using namespace std;

int gcd(int x, int y) {
    if (y == 0) {
        return x;
    }
    return gcd(y, x % y);
}

int main() 
{
    int num1, num2;
    cout << "Enter num 1 : ";
    cin >> num1;
    cout << "Enter num 2 : ";
    cin >> num2;
    cout << gcd(num1, num2) << endl;
    return 0;
}