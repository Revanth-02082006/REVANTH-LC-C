#define MAX(x, y) x > y? x : y

int findLUSlength(char * a, char * b){
    if(strlen(a) == strlen(b)){
        for(int i=0; i<strlen(a); i++){
            if(a[i] != b[i]){
                return strlen(a);
            }
        }
        return -1;
    }
    return MAX(strlen(a), strlen(b));
}
