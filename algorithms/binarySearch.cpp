#include<iostream>
#include<vector>

int binary_search(std::vector<int> arr, int key)
{
    int low = 0;
    int high = arr.size() - 1 ;
    int mid ;
    while(high >= low)
    {
        mid = (low + high) / 2 ;
        if(key == arr[mid])
        {
            return mid;
        } 
        else if(key > arr[mid])
        {
            low = mid+1;
        }
        else if(key < arr[mid])
        {
            high = mid - 1 ; 
        }
    }
    return -1;
}

int main()
{
    std::vector<int> arr = {12,14,15,16,18,24,28,36,38,41,55,63,69,77,82,85,89,90,93,98};
    int key, result ;
    std::cout << "Enter search key : ";
    std::cin >> key ;
    
    result = binary_search(arr, key);
    std::cout << result << "\n" ;

    return 0;
}