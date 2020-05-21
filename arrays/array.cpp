#include<iostream>
#include<limits>

int create_array(int array[], int size)
{
    std::cout << "Enter your array elements :" << std::endl;
    int length = 0;
    for(int i = 0; i < size ; i++)
    {
        if(std::cin >> array[i])
        {
            length++;
        }
        else 
        {
            break;
        }
    }
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return length;
}

void print_array(int array[], int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        std::cout << array[i] << "\t" ;
    }
    std::cout << std::endl;
}

int main()
{
    int guesses[100];
    int size = sizeof(guesses)/sizeof(guesses[0]);

    int length = create_array(guesses, size);

    print_array(guesses, length);
    return 0;
}