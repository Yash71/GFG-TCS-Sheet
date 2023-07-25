// problem link: https://practice.geeksforgeeks.org/problems/remove-all-duplicates-from-a-given-string4321/1
string removeDuplicates(string str) {
	    unordered_map<char,int>umpp;
	    string solution="";
	    for(int i=0;i<str.length();i++){
	        if(umpp[str[i]]<1){
	            solution+=str[i];
	            umpp[str[i]]++;
	        }
	    }
        return solution;
	}
