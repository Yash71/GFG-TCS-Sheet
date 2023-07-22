Problem Link: https://practice.geeksforgeeks.org/problems/remove-vowels-from-string1446/1

string removeVowels(string S) 
	{   
	    string solutionString="";
	    for(int i=0;i<S.length();i++){
	        if(S[i]!='a' && S[i]!='e' && S[i]!='i'&& S[i]!='o'&& S[i]!='u' && S[i]!='A' && S[i]!='E' && S[i]!='I' && S[i]!='O' && S[i]!='U'){
	            solutionString+=S[i];
	        }        
	    }
	    return solutionString;
	}
