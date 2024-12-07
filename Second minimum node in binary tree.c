/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int sol(struct TreeNode* root, int min)
{
    int r, l;
    if(root->left == NULL && root->right == NULL) return abs(root->val - min);              // return its current distance from min if its a leaf
    if(root->left != NULL)                                                                  // check if left node its nnot a leaf
        l = sol(root->left, min);                                                           // interate thru the left node
    if(root->right != NULL)                                                                 // check if the right is not a leaf
        r = sol(root->right, min);                                                          // iterate thru the right node to find the min distance from min
    if((l < r && l != 0 && l < (root->val - min)) || r == 0 && l != 0)                      // check fo left condition to be min distance
        return l;                                                                           // return left node distance
    if((r < l && r != 0 && l < (root->val - min)) || l == 0 && r != 0)                      // check for the right node min dist ance
        return r;                                                                           // return current node distance if left n right are the same distance
    return root->val - min;
}
int findSecondMinimumValue(struct TreeNode* root) {
    if(root->left == NULL && root->right == NULL) return -1;                                // check if the root is a leaf, return -1 if it is
    int min = root->val;                                                                    // set min to current node val
    int left = sol(root->left, min);                                                        // iterate thru the left node to find shortest distance
    int right = sol(root->right, min);                                                      // interate thru the right node to find the shortest distance
    if((left < right) && (left != 0)|| (left != 0 && right == 0)) return left + min;        // check for left min distance cmp to right node. Return left distance + min to find the second min
    if((right < left) && (right != 0) ||(right != 0 && left == 0)) return right + min;      // check for right min dist cmp to left node. return right dist + min to find sec min
    if( right == left && right + min != min) return right + min;                            // check if left n right are the same and its dist isnt min, return one of the node
    return -1;                                                                              // return -1 if left n right node dist is the same as min
}
