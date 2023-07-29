int countFactors(int N){
        vector<int> v;
        int count=0;
        for(int i=1;i<=N;i++){
            if(N%i==0) count++;
        }
        return count;
    }
