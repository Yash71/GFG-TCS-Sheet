// problem link: https://practice.geeksforgeeks.org/problems/remove-spaces0128/1
string modify (string s)
    {   
        string solutionString="";
        for(int i=0;i<s.length();i++){
            if(s[i]!=' ') solutionString+=s[i];
        }
        return solutionString;
    }
