#include <ctype.h>
template < typename T >
T maxValue (const T value1, const T value2){
    return value1>=value2?value1:value2;
}
template <>
char maxValue (char value1, char value2){
    return toupper(value1)>=toupper(value2)?value1:value2;
}