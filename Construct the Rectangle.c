/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* constructRectangle(int area, int* returnSize){
    * returnSize=2;
    int* a= (int*)malloc(* returnSize*sizeof(int));
    for(int i=sqrt(area);i>=1;i--)
        if(area%i==0){
            a[0]=i; break;
        }
    a[1]=area/a[0];
    if(a[0]<a[1]) {
        int t=a[0];
        a[0]=a[1];
        a[1]=t;
    }
    return a;
}
