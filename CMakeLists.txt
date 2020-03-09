cmake_minimum_required (VERSION 2.8.11)
project (hellofoocppservice)

add_executable(hellofoocppservice hellofoocppservice.cpp stringcleaner.cpp)

enable_testing()
add_executable(test_stringcleaner test_stringcleaner.cpp stringcleaner.cpp)
add_test(NAME test_stringcleaner COMMAND test_stringcleaner)
