#include<iostream>
//#include<cmath>
int main()
{   
    double degrees = 45;
    double radians = degrees * 3.14159/180;
    double result1 = cos(radians);
    double result2 = 1/sqrt(2);
    std::cout << "result 1 : " << result1 << "\nresult 2 : " << result2 << std::endl;
    return 0; 
}