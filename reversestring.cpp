// problem link: https://practice.geeksforgeeks.org/problems/reverse-a-string/1
string reverseWord(string str){
    int i=0,j=str.length()-1;
    while(i<=j){
        swap(str[i++],str[j--]);
    }
    return str;
}
