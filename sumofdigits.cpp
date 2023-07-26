// problem link: https://practice.geeksforgeeks.org/problems/sum-of-digits1742/1

int sumOfDigits(int N){
        int sum=0;
        while(N>0){
            sum+=N%10;
            N/=10;
        }
        return sum;
    }
