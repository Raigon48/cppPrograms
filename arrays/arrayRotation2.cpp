#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for(int i = 0 ; i < size ; i++) 
    {
        cout << arr[i] << ", " ;
    }
    cout <<  endl;
}

void rotate(int arr[], int size, int d)
{
    int arr2[d] = {};
    
    for(int i=0; i<d; i++){
        arr2[i] = arr[i];
    }
    for(int i=d; i < size; i++) {
        arr[i-d] = arr[i];
    }
    for(int i=size-1, j = d-1 ; j >= 0 ; i--, j--) {
        arr[i] = arr2[j];
    }
}

int main() {
    int arr[6] = {1,2,3,4,5,6};
    rotate(arr, 6, 3);
    printArray(arr, 6);
    return 0;
}

//time complexity : O(n)
// space complexity : O(d)