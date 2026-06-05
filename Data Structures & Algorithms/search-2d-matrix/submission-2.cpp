class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        int l=0;
        int r=rows*cols-1;
        while(l<=r){
            int mid=(l+r)/2;
            int row= mid/cols;
            int col=mid%cols;
            int num=matrix[row][col];
            if(num==target){
                return true;
            }
            else if(num<target){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        return false;
    }
};
