/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

int guessNumber(int n){
	int l = 0;
    int r = n;
    while (l <= r) {
        int m = l + ((r - l) / 2);
        int g = guess(m);
        if (1 == g)
            l = m + 1;
        else if (-1 == g)
            r = m - 1;
        else
            return m;
    }
    return -1;
}
