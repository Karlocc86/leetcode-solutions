class Solution {

private:

    void merge(vector<int>& arr, int left, int mid, int right, vector<int>& temp){

        int i = left;
        int j = mid + 1;
        int k = left;

        while( i <= mid && j <= right){

            if(arr[i] <= arr[j]){
                temp[k] = arr[i];
                i++;
            }
            else{
                temp[k] = arr[j];
                j++;
            }
            k++;
        }

        while(i <= mid){
            temp[k] = arr[i];
            i++;
            k++;
        }

        while(j <= right){

            temp[k] = arr[j];
            j++;
            k++;

        }

        for (int idx = left; idx <= right; ++idx) {
            arr[idx] = temp[idx];
        }

    }

    void mergeSort(vector<int>& nums, int low, int high, vector<int>& temp){
        if(low>=high) return;

        int mid = low + (high - low)/2;

        mergeSort(nums , low, mid, temp);
        mergeSort(nums , mid +1 , high, temp);

        merge(nums, low, mid, high, temp);

    }



public:
    vector<int> sortArray(vector<int>& nums) {

        vector<int> temp(nums.size());
        mergeSort(nums, 0, nums.size()-1, temp);

        return nums;
        
    }
};