int compare(const int x1, const int y1, const int x2, const int y2) {

    double k1 = (double)x1, k2 = (double)x2;
    double t1 = (double)y1, t2 = (double)y2;
    if (k1/t1 < k2/t2)
        return -1;
    if (k1/t1 > k2/t2)
        return 1;
    return 0;
}