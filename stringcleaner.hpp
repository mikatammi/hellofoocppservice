#ifndef STRINGCLEANER_HPP
#define STRINGCLEANER_HPP

#include <string>

/// Remove non-alpha characters from string in-place
/// @param str Reference to string to be modified
/// @return Count of characters removed from string
int clean_string(std::string& str);

#endif /* STRINGCLEANER_HPP */
