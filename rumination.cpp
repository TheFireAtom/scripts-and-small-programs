#include <iostream>
#include <random>
#include <stdlib.h>
#include <chrono>
#include <thread>

void createDelay(int delay_in_ms) {
    std::this_thread::sleep_for(std::chrono::milliseconds(delay_in_ms));
}

void rumination() {
    
    while(true) {
        std::cout << "Hello. Welcome to this simple rumination check program. \nIf you're feeling stuck, use it to get back on grind\n";
        char choice;
        std::cout << "So, ruminating again, huh?\n";
        std::cout << "Print y or n: (y/n)";
        std::cin >> choice;
        if (choice == 'y') {
            std::cout << "Go do some exercise, or you can code some small programms like that.\n";
        } else if (choice == 'n') {
            std::cout << "Good, have fun!\n"; 
        } else {
            std::cout << "Oops, wrong character. Try again by writing y or n (y/n).\n";
        }
        createDelay(2000);
        system("clear");
    }
    
}

int main() {

    rumination();
    return 0;
}