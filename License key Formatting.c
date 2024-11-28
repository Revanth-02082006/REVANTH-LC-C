char * licenseKeyFormatting(char * s, int k){
    int i, j, part_len, len, dash_num;
    char c;
    char *result;
    int resultSize;

    // generate new string without any char '-'.
    len = strlen(s);
    for ( i = 0, j = 0 ; j < len ; ++j )
        if ( s[j] != '-' )
            s[i++] = s[j];
    len = i;

    // calculate the lenght of final string and allocate it.
    // fill the result string in reverse way (right to left)
    dash_num = (len - 1) / k;
    result = (char *)malloc( (len + dash_num + 1) * sizeof (char) );
    result[len + dash_num] = '\0';
    resultSize = len + dash_num;

    // put the first char. to the final string to prevent tailed '-' problem.
    if ( len > 0 ) {
        c = s[len-1];
        if ( c >= 'a' && c <= 'z' )
            c &= ~32;
        result[--resultSize] = c;
        part_len = 1;
    }

    // iteration of each input char.
    for ( i = len-2 ; i >= 0 ; i-- ) {
        if ( part_len < k ) {
            if ( part_len == 0 ) {
                result[--resultSize] = '-';
            }
            c = s[i];
            part_len++;
            if ( c >= 'a' && c <= 'z' )
                c &= ~32;
            result[--resultSize] = c;
        }
        else {
            part_len = 0;
            i++;
        }
    }
    return result;
}
