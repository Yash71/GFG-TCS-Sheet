// problem link: https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1

string reverseWords(string S) 
    { 
        vector<string> v;
        string elements="";
        for(int i=0;i<S.length();i++){
            if(S[i]!='.'){
                elements+=S[i];
            }
            else{
                v.emplace_back(elements);
                elements="";
            }
        }
        v.emplace_back(elements);
        string solution="";
        for(auto it=v.end()-1;it>=v.begin();it--){
            solution+=*it;
            if(it!=v.begin()) solution+=".";
            
        }
        return solution;
    } 
