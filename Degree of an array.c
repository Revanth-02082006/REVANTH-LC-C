int findShortestSubArray(int* nums, int numsSize) {
int** arr = malloc(50000*sizeof(int*));
for (int i = 0; i < 50000; ++i){
arr[i] = calloc(3,sizeof(int));
}    
for (int i = 0; i < 50000; ++i){
arr[i][1] = 0;
arr[i][2] = 0;
}
for (int i = 0; i < numsSize; ++i){
arr[nums[i]][0]++;
if (arr[nums[i]][0] > 1){
arr[nums[i]][2] = i;
}
else {
arr[nums[i]][1] = i;
}
}
int m = 0;
int idxMin = INT_MAX;
for (int i = 0; i < 50000; ++i){
m = fmax(m,arr[i][0]);
}
if (m == 1){
return 1;
}
for (int i = 0 ; i < 50000; ++i){
if (arr[i][0] == m){
idxMin = fmin(idxMin,1+arr[i][2]-arr[i][1]);
}
}
if (numsSize == 2 && nums[0] != nums[1]){
return 1;
}
return idxMin;
}
