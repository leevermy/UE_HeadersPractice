#include "helpers.h"


void EnterData(int& f_multiplier, int& s_multiplier) {
    std::cout << "Enter the first multiplier: ";
    std:: cin >> f_multiplier;

    std::cout << "Enter the second multiplier: ";
    std:: cin >> s_multiplier;
}

double SumAndPow(const int& t1, const int& t2) {
    return pow(t1 + t2, 2);
}