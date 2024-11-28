bool detectCapitalUse(char* word) {
    int f=0;
    int a=0;
    for(int i=0;word[i];i++){
        if(isupper(word[i]))
        a++;

    }
    if(isupper(word[0]))
    f++;
    int l =strlen(word);
    if(a==l||a==0||(f==1&&a==1))
    return true;
    return false;
}
