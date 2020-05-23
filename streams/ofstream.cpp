#include<iostream>
#include<fstream>
#include<vector>
//#include<string>

int main()
{
    std::ofstream file ;
    file.open("hello.txt");
    if(file.is_open()){
        file << "Hello World" << std::endl;
        file.close();
    } else {
        std::cout << "Cannot open file" << std::endl;
    }
    

    std::ofstream file2 ("names.txt") ;
    std::vector<std::string> names = {"Abhishek", "Alisha", "Anshul", "Anmol"};
    for(std::string name : names)
    {
        file2 << name << std::endl;
    }
    file2.close();
    return 0;
}