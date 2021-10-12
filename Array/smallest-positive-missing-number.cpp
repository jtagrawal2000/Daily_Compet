class Solution
{
    
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        for(int i=0; i<n; i++){
            if(arr[i]<=0){
                arr[i]= n+1; 
            }
        }
        for(int i=0; i<n; i++){
            if(abs(arr[i])<=n && arr[abs(arr[i])-1]>0){
                arr[abs(arr[i])-1]=(-arr[abs(arr[i])-1]);
            }
        }
        for(int i=0; i<n; i++){
            if(arr[i]>0){
                return i+1;
            }
        }
        return n+1;
    } 
};