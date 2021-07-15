#include<stdexcept>
bool IsNumber(char c){
    if(c<='9'&&c>='0')
        return 1;
    return 0;
}
bool IsAddOrDiff(char c){
    if(c=='+'||c=='-')
        return 1;
    return 0;
}
class calculator{
    public:
    int calculate(std::string s){
        int len=s.size();
        if(len==0)
        throw EmptyExpressionException();
        int result=s[0]-'0';
        if((!IsNumber(s[0]))&&(!IsAddOrDiff(s[0])))
            throw IllegalSymbolException(0);
        if(!IsNumber(s[0]))
            throw MissingOperandException(0);
        int index=1;
        while(index<len){
            if((!IsNumber(s[index]))&&(!IsAddOrDiff(s[index])))
                throw IllegalSymbolException(index);
            if(index%2==0){
                if(!IsNumber(s[index]))
                    throw MissingOperandException(index);
                if(s[index-1]=='+')
                    result+=(s[index]-'0');
                if(s[index-1]=='-')
                    result-=(s[index]-'0');
            }
            if(index%2==1){
                if(!IsAddOrDiff(s[index]))
                    throw MissingOperatorException(index);
                else if(index==len-1)
                    throw MissingOperandException(index+1);
            }
            index++;
        }
        return result;
    }
};