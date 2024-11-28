bool checkPerfectNumber(int num) {
    int sum = 0;
    int i;
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum = sum + i;
        }
    }
    return ( num == sum)? true : false;
}
