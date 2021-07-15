#include <stdlib.h>
#include <string.h>
#include <ctype.h>
class NumberParseException {};
bool isNumber(const char * str) {
    if (str == NULL) {
        return false;
    }
    int len = strlen(str);

    if (len == 0)
        return false;
    bool isNumber = false;
    char ch;
    for (int i = 0; i < len; i++) {
        if (i == 0 && (str[i] == '-' || str[i] == '+'))
            continue;
        if (isdigit(str[i])) {
            isNumber = true;
        } else {
            isNumber = false;
            break;
        }
    }
    return isNumber;
}

int parseNumber(const char * str){
    if (!isNumber(str))
        throw NumberParseException();
    return atoi(str);
}