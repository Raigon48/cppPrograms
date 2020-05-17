#include<iostream>
using namespace std;

void rotate(int arr[],int size,int d) 
{
    int arr2[size] = {};
    for(int i = d, j=0; i < size + d ; i++, j++) {
        arr2[j] = arr[i%size];
    }
    for(int i=0; i<size ; i++){
        cout << arr2[i] << ", " ;
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    rotate(arr, 5, 4);
    return 0;
}

// time complexity : O(n)
// space complexity : O(n)