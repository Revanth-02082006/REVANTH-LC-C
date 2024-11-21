bool isPerfectSquare(int num) {
    if (num < 2) return true;

    long x = num;
    long y = x / 2;
    while (y * y > num) {
        y = (y + num / y) / 2;
    }
    return y * y == num;
}
