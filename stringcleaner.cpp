#include "stringcleaner.hpp"

#include <cctype>

int clean_string(std::string& str) {
    std::string::size_type removed_count = 0;
    for (std::string::size_type i = 0; i < str.length(); ++i) {
        // Shift string characters to left by count of how many characters have
        // been already removed
        str.at(i - removed_count) = str.at(i);
        if (!isalpha(str.at(i))) {
            ++removed_count;
        }
    }
    // In the end truncate by count of removed characters
    str.resize(str.length() - removed_count);

    return removed_count;
}
