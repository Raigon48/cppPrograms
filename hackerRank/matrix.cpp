#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n , q;
    std::cin >> n >> q;  
    std::vector<std::vector<int>> arr(n);
    
    for(int i = 0 ; i< n ; i++){
        int len;
        int input;
        std::cin >> len;
        arr[i] = std::vector<int>(len);
        for(int j=0; j<len; j++){
            std::cin >> input;
            arr[i][j] = input;
        }
    }
    for(int i=0 ; i < q; i++)
    {
        int a,b;
        std::cin >> a >> b;
        std::cout << arr[a][b] << "\n";
    }
    return 0;
}
