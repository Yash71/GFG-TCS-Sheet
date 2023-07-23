// problem statement : https://practice.geeksforgeeks.org/problems/remove-all-characters-other-than-alphabets4923/1

string removeSpecialCharacter(string s) {
        string solutionString="";
        for(int i=0;i<s.length();i++){
            if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)){
                solutionString+=s[i];
            }
        }
        return (solutionString=="" ? "-1" : solutionString);
    }
