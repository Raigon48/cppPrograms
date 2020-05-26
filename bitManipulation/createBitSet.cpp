#include <iostream>
#include <string>

int createBitSet(int arr[], int n)
{
    unsigned int res = 0;
    for(int i = 0 ; i < n ; i++)
    {
        res |= (1<<arr[i]);
    }
    return res;
}

std::string showBitSet(unsigned int num)
{
    std::string result = "";
    for(int i=31 ; i >= 0 ; i--)
    {
        result += std::to_string(num&(1<<i) ? 1 : 0);
    }
    return result;
}

int main()
{
    int arr[] = { 2,3,5,7,8,10,11,14,15,16,18,19,20,21,22,23,24,25,26,27,28,29,30};
    int size = (sizeof arr )/(sizeof arr[0]);
    unsigned int resultSet = createBitSet(arr, size);
    std::string bitSet = showBitSet(resultSet);
    std::cout << resultSet << '\t' << size << '\n' ;
    std::cout << bitSet << '\n' ;
    
    // int result = 6&(1<<0);
    // std::cout << result << "\n" ;
    // result = 6&(1<<1);
    // std::cout << result << "\n" ;
    // result = 6&(1<<4);
    // std::cout << result << "\n" ;
    return 0 ;
}