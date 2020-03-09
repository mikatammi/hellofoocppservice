#include "stringcleaner.hpp"

#include <iostream>
#include <string>
#include <tuple>
#include <vector>

// TODO: Convert to use proper test framework such as Catch2
int main(int /*argc*/, char** /*argv*/) {
    // List of test case tuples: tuple contains input string, expected value
    // and expected count of removed characters
    std::vector <std::tuple <std::string, std::string, int> > testcases {
        {"ab*c/", "abc", 2},
        {"ab*c/d", "abcd", 2},
        {"*#ab*c/d%*", "abcd", 6}
    };

    for (auto test_it : testcases) {
        std::string input = std::get<0> (test_it);
        const std::string& expected = std::get<1> (test_it);
        const int expected_count = std::get<2> (test_it);

        const int count = clean_string(input);

        if (input != expected) {
            std::cerr << input << " != " << expected << std::endl;
            return EXIT_FAILURE;
        }
        if (count != expected_count) {
            std::cerr << "Removed character count was " << count
                      << ". Expected " << expected_count << std::endl;
            return EXIT_FAILURE;
        }
    }

    return EXIT_SUCCESS;
}
