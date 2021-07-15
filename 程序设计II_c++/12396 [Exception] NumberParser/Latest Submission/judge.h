#include <cstring>
class NumberParseException{

};
bool isNumber(const char* str){
    int index=0;
    int len=strlen(str);
    if(len==0)return 0;
    while(index<len){
        if(str[index]>'9'||str[index]<'0'){
            return 0;
        }
        index++;
    }
    return 1;
}
int parseNumber(const char *str){
    if(str==NULL||isNumber(str)==0)
        throw NumberParseException();
    int result=0;
    int index=0;
    int len=strlen(str);
    while(index<len){
        result=(str[index]-'0'+result*10);
        index++;
    }
    return result;
}