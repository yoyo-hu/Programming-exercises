std::string change1(const char* cstr){
    return (std::string)cstr;
}
void change2(std::string str, char* cstr){
    int len=str.size();
    for(int i=0;i<len;i++)
        cstr[i]=str[i];
     cstr[len]='\0';
}