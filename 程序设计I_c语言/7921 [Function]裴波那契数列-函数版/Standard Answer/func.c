int fibo(int a)
{
    if(a<=2)
        return 1;
    else
        return fibo(a-1)+fibo(a-2);
}