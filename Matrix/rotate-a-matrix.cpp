class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& a, int n) 
    { 
        // code here 
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                swap(a[i][j], a[j][i]);
            }
        }
        for(int i=0; i<n/2; i++){
            swap(a[i],a[n-i-1]);
        }
    } 
};