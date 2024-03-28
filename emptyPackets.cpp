#include <iostream>
using namespace std;



int main() {
    
    int arr[8]={4,5,0,1,9,0,5,0};
    int arrSize=sizeof(arr)/sizeof(arr[0]);
    // cout<<arrSize<<"\n";
    int solution=0;
    for(int i=0;i<arrSize;i++){
        if(arr[i]==0) solution++;
    }
    cout<<solution;
    return 0;

}
