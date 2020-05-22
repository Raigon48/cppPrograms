#include<fstream>
#include<vector>
//#include<string>

int main()
{
    std::ofstream file ;
    file.open("hello.txt");
    file << "Hello World" << std::endl;
    file.close();
    
    std::ofstream file2 ("names.txt") ;
    std::vector<std::string> names = {"Abhishek", "Alisha", "Anshul", "Anmol"};
    for(std::string name : names)
    {
        file2 << name << std::endl;
    }
    file2.close();
    return 0;
}