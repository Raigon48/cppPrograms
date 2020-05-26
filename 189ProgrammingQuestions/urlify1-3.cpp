#include<iostream>
#include<string>
#include<limits>

int main()
{
    std::string replacer = "%20";
    std::string exp;
    std::getline(std::cin, exp);
    std::cout << exp << "\n";
    //identify the number of whitespaces in exp
    int count = 0 ;
    for(int i = 0 ; i < exp.length(); i++)
    {
        if(exp[i] == ' ')
        {
            count++;
        }
    }
    int newLength = exp.length() + count * (replacer.length() - 1);
    exp[newLength] = '\n';
    int index = newLength-1;
    for(int i = exp.length()-1; i >= 0 ; i--)
    {
        if(exp[i] == ' '){
            exp[index-1] = '0';
            exp[index-2] = '2';
            exp[index-3] = '%';
            index = index-3;
        }
        else{
            exp[index--] = exp[i];
        }
    }
    std::cout << exp ;
    return 0;
}