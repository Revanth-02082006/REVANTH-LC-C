char ** fizzBuzz(int n, int* returnSize){
    *returnSize = n;
    char **T = (char**)malloc(sizeof(char*)*n);
    for(int i=0;i<n;i++){
        T[i]=(char*)malloc(9*sizeof(char));
        sprintf(T[i], "%d", i+1);  // Convert 'i' to char 
        if( (i+1) % 3 == 0 && (i+1) % 5 == 0){T[i] = "FizzBuzz";}
        else if((i+1)%3 == 0){T[i]= "Fizz";}
        else if((i+1)%5 == 0){T[i] = "Buzz";}
    }  
    return T;
}
