// problem link: https://practice.geeksforgeeks.org/problems/implement-strstr/1
int strstr(string s, string x)
{
    int index=0;
    for(int i=0;i<s.length();i++){
         for(index=i;index<i+x.size();index++){
             if(s[index]!=x[index-i])break;
         }
         if((index-i)==x.size()) return i;
     }
     return -1;
}
