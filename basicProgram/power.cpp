#include<iostream>
using namespace std;

double power(double base, int exponent)
{
    double result = 1;
    for(int i=0 ; i<exponent ; i++)
    {
        result = result * base;
    }
    return result;
}

void print_pow(double base, int exponent) {
    double result = power(base, exponent);
    cout << "The result is : " << result << endl;
}

int main()
{
    print_pow(3, 6);
    return 0;
}

