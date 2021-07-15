long long getStepNum(int n) {
    int i;
    long long ans = 1;
    for (i = 0; i < n; ++i) {
        ans = ans % 10007;
        ans *= 2;
    }
    ans = 3*(ans-1);
    ans = ans % 10007;
    return ans;
}
