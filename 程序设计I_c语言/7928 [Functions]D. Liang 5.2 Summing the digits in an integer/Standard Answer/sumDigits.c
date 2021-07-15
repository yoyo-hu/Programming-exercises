int sumDigits(long n) {
    if (n < 0) {
        n *= -1;
    }
    int result = 0;
    while (n) {
        result += n % 10;
        n /= 10;
    }
    return result;
}
