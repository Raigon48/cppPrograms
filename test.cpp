#include<iostream>
#include<string>
#include<vector>
int getAbsSum(std::vector<int> arr) 
{
	int sum = 0;
	for(int i = 0 ; i < arr.size() ; i++)
	{
		if(arr[i] < 0) sum-= arr[i];
		else sum+=arr[i];
	}
	return sum;
}
int main()
{
    // int n = 1;
    // std::string word = "";
    // word = word + std::to_string(n);
    // std::cout << word << std::endl;

    // std::vector<int> arr = {1,-2,4,5};
    // std::cout << getAbsSum(arr) << std::endl;

    long long x = 5332; // 00000000000000000001010011010000
    std::cout << __builtin_clzll(x) << "\n"; // 19
    std::cout << __builtin_ctz(x) << "\n"; // 4
    std::cout << __builtin_popcount(x) << "\n"; // 5
    std::cout << __builtin_parity(x) << "\n"; // 1
    return 0;
}