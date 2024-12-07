int countBinarySubstrings(char* s) {
    
int jvrc = 0;

for(int i = 0 ; i < strlen(s) ; i++)
{
    if(s[i] == '0')
    {
        int z = 0, c = 0, o = 0;
        while(s[z+i]!='\0' && s[z+i]!='1')
        {
            c++;
            z++;
        }
        
        while(s[i+z]!='\0' && s[i+z]!='0')
        {
            o++;
            z++;
        }
      
         jvrc += ((o<=c) ? o : c) ;

        if(c > 0)
        {
            i += (c-1);
        }
        
    }
    else
    {
        int z = 0, c = 0, o = 0;
        while(s[z+i]!='\0' && s[z+i]!='0')
        {
            o++;
            z++;
        }
        
        while(s[i+z]!='\0' && s[i+z]!='1')
        {
            c++;
            z++;
        }
      
         jvrc += ((o<=c) ? o : c) ;

        if(o > 0)
        {
            i += (o-1);
        }
    }
}


return jvrc;

}
