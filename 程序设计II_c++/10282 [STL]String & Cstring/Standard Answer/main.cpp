#include <cstdio>
#include <iostream>
#include "exchange.h"

std::string str;
char cstr[100];
int main() {
    std::cin >> str;
    change2(str, cstr);
    puts(cstr);
    scanf("%s", cstr);
    std::cout << change1(cstr) << std::endl;
    return 0;
}

