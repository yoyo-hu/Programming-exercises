#ifndef EXCHANGE_H_
#define EXCHANGE_H_
#include <string>
#include <cstring>

std::string change1(const char* cstr) {
    return std::string(cstr);
}
 
void change2(std::string str, char* cstr) {
    strncpy(cstr, str.c_str(), 100);
}
 
#endif