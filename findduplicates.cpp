// problem link 

vector<int> duplicates(int arr[], int n) {
        map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        vector<int> v;
        for(auto it=mpp.begin();it!=mpp.end();it++){
            if(it->second!=1) v.emplace_back(it->first);
        }
        
        if(v.size()==0) v.emplace_back(-1);
        return v;
    }
