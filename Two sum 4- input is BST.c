void loop(struct TreeNode* root, int* arr,int* count)
{
	if (root == NULL)
		return;
	loop(root->left, arr, count);
	arr[(*count)++] = root->val;
	loop(root->right, arr, count);
}

//2 3 4 5 6 7 k=9
bool findTarget(struct TreeNode* root, int k) {
	
	int* arr = (int*)malloc(sizeof(int) * 10000);
	int count = 0;
	loop(root, arr, &count);

	//arr = realloc(arr, count * sizeof(int));

	int front = 0, rear = count - 1;

	while (front < rear)
	{
		int sum = arr[front] + arr[rear];
		if (sum == k)
		{
			free(arr);
			return true;
		}
		if (sum > k)
		{
			rear--;
		}
		else
		{
			front++;
		}
	}
	free(arr);
	return false;
}
