#include<iostream>
using namespace std;

void sayHi(string name) {
    cout << "Hello "<< name <<", How are you?" << endl;
}

int cube(int num) {
    return num*num*num;
}

int main() {
    sayHi("Abhishek Rai");
    int resultOf3Cube = cube(3);
    cout << "cube of 3 is : " << resultOf3Cube << endl;
    return 0;
}