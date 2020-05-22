#include<iostream>
#include<vector>

// whenever vectors are passed in a function a copy of it is sent to the function
void print_array(std::vector<int> array)
{
    for(int i = 0 ; i < array.size() ; i++)
    {
        std::cout << array[i] << "\t" ;
    }
    std::cout << std::endl;
}

// by making it as pass by reference any modification done here will be reflected in the main array
void print_array_reference(std::vector<int> &array)
{
    for(int i = 0 ; i < array.size() ; i++)
    {
        std::cout << array[i] << "\t" ;
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> numbers = {1,2,3,4};
    // add an element in the end and increases the size
    auto it = numbers.end();
    std::cout << "     " << *it << std::endl;

    std::cout << numbers[6] << "   " << numbers.capacity() << std::endl;
    print_array(numbers);
    print_array_reference(numbers);
    return 0;
}