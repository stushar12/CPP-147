bool areIsomorphic(string s1, string s2)
{
    int n1=s1.length();
    int n2=s2.length();
    if(n1!=n2)
    return false;
    
    int m1[256]={0};
    int m2[256]={0};
    for(int i=0;i<n1;i++)
    {
        if(!m1[s1[i]] && !m2[s2[i]])                            //when value of that character in the map is 0 i.e it is the first variable
        {
            m1[s1[i]] = s2[i];
            m2[s2[i]] = s1[i];
        }
        else if(m1[s1[i]]!= s2[i])                              //It means that it's value is already present in the map just use the value
            return false;
    }
    return true;
}
