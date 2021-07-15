// Problem#: 17756
// Submission#: 4643992
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
char * convertDecimalToHex(int value)
{
    char a[20];
    int i, j, x, size = 0;
    while(1){
        if(value != 0)
        {
            x = value % 16;
            value /= 16;
            switch(x){ 
                case 10: a[size] = 'A';  break;
                case 11: a[size] = 'B';  break;
                case 12: a[size] = 'C';  break;
                case 13: a[size] = 'D';  break;
                case 14: a[size] = 'E';  break;
                case 15: a[size] = 'F';  break;
                default: a[size] = '0' + x; 
            }
            size++;
        }
        if(value == 0) break;
    }
    char *p;
    p = new char [size];
    int b=0;
    for(i=size-1;i>=0;i--)
    {
       p[b++]=a[i];
    }
    return p;
}
void convertDecimalToHex(int value, char *s)
{
    char a[20];
    int i,j,x,size;
    for(size=0;;)
    {
        if(value != 0)
        {
            x = value % 16;
            value /= 16;
            if(x>=0&&x<10) a[size]='0'+ x;
            if(x==10) a[size] = 'A';
            if(x==11) a[size] = 'B';
            if(x==12) a[size] = 'C';
            if(x==13) a[size] = 'D';
            if(x==14) a[size] = 'E';
            if(x==15) a[size] = 'F';
            size++;
        }
        if(value == 0) break;
    }
    int b=0;
    for(i=size-1;i>=0;i--)
    {
       s[b++]=a[i];
    }
    s[b]='\0';
}                                 
