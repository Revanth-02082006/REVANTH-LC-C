bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n){
    int count=0,i=0;
    while (i < flowerbedSize) {
        if (flowerbed[i] == 0) {
            // Check if this position and its neighbors are all empty (0)
            int prev = (i == 0) ? 0 : flowerbed[i - 1];
            int next = (i == flowerbedSize - 1) ? 0 : flowerbed[i + 1];//very crucial

            if (prev == 0 && next == 0) {
                flowerbed[i] = 1;  // Plant a flower
                count++;
            }
        }

        i++;
    }

    return count >= n;
}
