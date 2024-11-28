/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int findMax(int* score,int len) {
    int max = INT_MIN;
    for (int i=0; i<len; i++)
        max = fmax(max,score[i]);
    return max;
}
char** findRelativeRanks(int* score, int scoreSize, int* returnSize) {
    (*returnSize) = scoreSize;
    char** answer = (char**)malloc(sizeof(char*)*scoreSize);
    
    int maxVal = findMax(score,scoreSize);
    // This indexMap stores orinal array index->val => val->index;
    // original value will be the new index, 
    // the value inside that index will be the index in the original array
    int indexMap[maxVal+1];
    memset(indexMap,-1,sizeof(indexMap));

    for (int i=0; i<scoreSize; i++) 
        indexMap[score[i]] = i;
    
    int rank = 1;
    int answerIndex = -1;
    for (int i=maxVal; i>=0; i--) {
        answerIndex = indexMap[i];
        if (answerIndex == -1) continue;

        answer[answerIndex] = (char*)malloc(sizeof(char)*20);
        if (rank == 1)
            sprintf(answer[answerIndex],"Gold Medal");
        else if (rank == 2)
            sprintf(answer[answerIndex],"Silver Medal");
        else if (rank == 3)
            sprintf(answer[answerIndex],"Bronze Medal");
        else 
            sprintf(answer[answerIndex],"%d",rank);
        rank++;
    }
    return answer;
}
