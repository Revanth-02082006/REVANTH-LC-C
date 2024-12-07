double* averageOfLevels(struct TreeNode* root, int* returnSize){
    double *result = calloc(10000,  sizeof(double));
    struct TreeNode* queue[10010];
    int front = 0, back = 0;
    *returnSize = 0;
    queue[back++] = root;
    while(front < back) {
        double sum = 0.0;
        int len = back - front;
        int cur_back = back;
        while(front < cur_back) {
            struct TreeNode* node = queue[front++];
            if(node->left)
                queue[back++] = node->left;
            if(node->right)
                queue[back++] = node->right;
            sum += node->val;
        }
        result[(*returnSize)++] = sum / len;
        // *returnSize += 1;
    }
    return result;
}
