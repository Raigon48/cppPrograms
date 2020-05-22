#include<iostream>
#include<string>
// generating random number
#include<cstdlib>
#include<ctime>

void play_game()
{
    int random = rand() % 100 + 1;
    int count = 0;
    std::cout << "Guess a number between 1 to 100" << std::endl;
    int guess;
    while(true) {
        std::cin >> guess;
        count++;
        if(guess == random) 
        {
            std::cout << "You guessed it right in " << count << std::endl;  
            return;
        }
        else if (guess > random)
        {
            std::cout << "Guess little bit lower" << std::endl;
        }
        else
        {
            std::cout << "Guess little bit higher" << std :: endl;
        }
    }
}

int main()
{   
    srand(time(NULL)); // seed random number;
    std::cout << "WELCOME TO GUESSING GAME" << std::endl;
    int choice ;
    do
    {
        std::cout << "0. Quit \n" << "1. Play Game" << std::endl;
        std::cout << "Enter your choice : " ;
        std::cin >> choice ;

        switch(choice)
        {
            case 0 :
                std::cout << "See you Later!" << std::endl;
                return 0;
            case 1 : 
                std::cout << "Yo, let's play" << std::endl;
                play_game();
                break;
        }
    } while(choice != 0);
    
}