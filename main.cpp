#include "helpers.h"
#include "test.h"


int main() {
    TestAll();

    int f_multiplier;
    int s_multiplier;
    char ch;

    do {
        EnterData(f_multiplier, s_multiplier);
        std::cout << "The answer is: " << SumAndPow(f_multiplier, s_multiplier) << std:: endl;

        std::cout << std::endl;
        std::cout << "Would you like to try again? (y/n)";
        std::cin >> ch;

    } while (toupper(ch) == 'Y');

    std::cout << "\nThx for using our programm. Send 50 rubles to this number +7 (928) 459-59-13" << std::endl;

    return 0;
}