/*
 * 661. Image Smoother
 *
 * An image smoother is a filter of the size 3 x 3 that can 
 * be applied to each cell of an image by rounding down the 
 * average of the cell and the eight surrounding cells (i.e., 
 * the average of the nine cells in the blue smoother). If one 
 * or more of the surrounding cells of a cell is not present, 
 * we do not consider it in the average (i.e., the average of 
 * the four cells in the red smoother).
 *
 * Given an m x n integer matrix img representing the grayscale 
 * of an image, return the image after applying the smoother on 
 * each cell of it.
 *
 * m == img.length
 * n == img[i].length
 * 1 <= m, n <= 200
 * 0 <= img[i][j] <= 255
 */

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** imageSmoother(int** img, int imgSize, int* imgColSize, int* returnSize, int** returnColumnSizes) {
    
    /*
     * Input:
     *  **img,
     *  imgSize,
     *  *imgColSize
     */

    int **ans = (int **)malloc(sizeof(int *) * imgSize);

    *returnSize = imgSize;
    *returnColumnSizes = (int *)malloc(sizeof(int) * imgSize);

    for (int i = 0; i < imgSize; i++) {
        ans[i] = (int *)malloc(sizeof(int) * imgColSize[i]);
        (*returnColumnSizes)[i] = imgColSize[i];
    }

    for (int i = 0; i < imgSize; i++) {
        for (int j = 0; j < imgColSize[i]; j++) {

            int sum = 0;
            int cnt = 0;

            for (int k = MAX(0, i - 1); k < MIN(imgSize, i + 2); k++) {
                for (int l = MAX(0, j - 1); l < MIN(imgColSize[i], j + 2); l++) {
                    sum += img[k][l];
                    cnt++;
                }
            }

            if (cnt != 0) {
                ans[i][j] = (int)floor(((float)sum) / ((float)cnt));
            }
            else {
                ans[i][j] = 0;
            }
        }
    }

    /*
     * Output:
     *  *returnSize
     *  **returnColumnSizes
     *  return the image after applying the smoother on 
     *  each cell of it.
     */

    return ans;
}
