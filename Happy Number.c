int digitsSquareSum(int num)
{
    int sum;
    for(sum=0;num>0;num=num/10) sum+=(num%10)*(num%10);
    return sum;
}

bool isHappy(int n)
{
    if(n<0) return false;
    int tmp=n;
    while(1)
    {
        if(tmp==89) return false;
        if(tmp==1) return true;
        tmp=digitsSquareSum(tmp);
    }
}
