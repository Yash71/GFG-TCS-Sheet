// problem link: https://practice.geeksforgeeks.org/problems/count-alphabets3649/1
int Count(string S){
    //complete the function here
    int count=0;
    for(int i=0;i<S.length();i++){
        if((S[i]>=65 && S[i]<=90) || (S[i]>=97 && S[i]<=122)) count++;
    }
    return count;
}
