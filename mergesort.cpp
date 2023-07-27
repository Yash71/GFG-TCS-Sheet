public:
    void merge(int arr[], int l, int m, int r)
    {
        int len1 = m-l+1, len2 = r-m;
        int *left = new int[len1];
        int *right = new int[len2];
    
        for (int i = 0; i < len1; ++i)
            left[i] = arr[l+i];
        for (int i = 0; i < len2; ++i)
            right[i] = arr[m+1+i];
        int i = 0, j = 0, k = l;
        while (i<len1 && j<len2){
            if(left[i]<=right[j])
                arr[k++] = left[i++];
            else
                arr[k++] = right[j++];
        }
        while (i<len1)
            arr[k++] = left[i++];
        while (j<len2)
            arr[k++] = right[j++];
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
       if (r>l) {
        int mid = l + (r - l) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
    }
