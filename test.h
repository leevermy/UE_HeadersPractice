#pragma once
#include "helpers.h"
#include <sstream>
#include <exception>


template <class T, class U>
void Assert(const T& t, const U& u) {
    if (t != u) {
        std::ostringstream os;
        os << "Assertion failed: " << t << " != " << u << std::endl;
        throw std::runtime_error(os.str());
    }
}

void TestSumAndPow();

class TestRunner {
    private:
        uint32_t fail_count = 0;
    public:
        template <class TestFunc>
        void RunTest(TestFunc func, const std::string& test_name) {
            try {
                func();
                std::cerr << test_name << " is OK\n\n";
            } catch(const std::exception& e) {
                ++fail_count;
                std::cerr << test_name << " failed: " << e.what() << std::endl;
            }
        }
        ~TestRunner() {
            if (fail_count > 0) {
                std::cerr << fail_count << " unit tests failed. Terminate..." << std::endl;
                exit(1);
            }
        }
};

void TestAll();