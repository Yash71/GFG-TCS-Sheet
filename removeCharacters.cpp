// problem link: https://practice.geeksforgeeks.org/problems/remove-character3815/1

// approach 1
string removeChars(string string1, string string2) {
        for(int i=0;i<string1.length();i++){
            for(int j=0;j<string2.length();j++){
                if(string1[i]==string2[j]){
                    string1[i]=' ';
                }
            }
        }
        string solutionString="";
        for(int i=0;i<string1.length();i++){
            if(string1[i]!=' ') solutionString+=string1[i];
        }
        return solutionString;
    }
