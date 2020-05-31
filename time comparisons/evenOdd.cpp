#include <iostream> 
#include <chrono>

int main()
{
    int count = 0;

    auto start = std::chrono::high_resolution_clock::now();
    for(long long i=0 ; i<=1000000000 ; i++) {
        if(i&1) { count++;}
    } 
    auto stop = std::chrono::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << "bit AND operation duration : " << duration.count() << std::endl;

    start = std::chrono::high_resolution_clock::now();
    for(long long i = 0 ; i <= 1000000000 ; i++) {
        if(i%2==0)
            {count++;}
    }
    stop = std::chrono::high_resolution_clock::now();

    duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << "moodulo operation duration : " << duration.count() << std::endl;

    return 0;
}

// both method takes almost equal amount of time for computing