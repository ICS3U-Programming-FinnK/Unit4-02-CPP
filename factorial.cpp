// Created by: Finn Kitor
// Date: November 6th, 2023
// # This program asks the user to enter a positive number and then uses a loop to calculate and display the factorial.
// and it will not accept worded responces.
#include <iostream>
#include <string>
// terminal initializations
int main() {
    int loop_counter = 0;
    int factorial_answer = 1;
    // user will input the number to the terminal
    std::string user_number_as_string;
    std::cout << "Enter a positive number: ";
    std::cin >> user_number_as_string;
    std::cout << std::endl;
    // terminal will process if the number is valid or not valid from the user.
    try {
        int user_number_as_int = std::stoi(user_number_as_string);

        if (user_number_as_int > 0) {
            while (true) {
                loop_counter = loop_counter + 1;
                factorial_answer = factorial_answer * loop_counter;
                std::cout << "Tracking " << loop_counter << " times through loop." << std::endl;
                if (loop_counter >= user_number_as_int) {
                    break;
                }
            }
         // terminal replicates a do..while loop
         // terminal calculates the factorial of the user number using a loop
            std::cout << std::endl;
            std::cout << user_number_as_int << "! = " << factorial_answer << std::endl;
        } else if (user_number_as_int == 0) {
            std::cout << "0! = 1" << std::endl;
        } else {
            std::cout << user_number_as_int << " is not a positive number." << std::endl;
        }  // terminal will display what the number is or if it is not a worded responce.
    } catch (std::invalid_argument& e) {
        std::cout << user_number_as_string << " is not a number." << std::endl;
    }

    std::cout << "Thanks for playing!" << std::endl;
    return 0;
}
