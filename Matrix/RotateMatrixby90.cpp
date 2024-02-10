// Problem Statement: https://www.geeksforgeeks.org/problems/rotate-by-90-degree0356/1
// Given a square matrix[][] of size N x N. The task is to rotate it by 90 degrees in an anti-clockwise direction without using any extra space.

void rotate(vector<vector<int> >& matrix)
{
    int n=matrix.size();
    int m=matrix[0].size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<m;j++){
            //tansposing the matrix
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    
    for(int i=0;i<m;i++){
        int right=n-1;
        int left=0;
        while(left<=right){
            //reversing order of rows
            swap(matrix[left][i],matrix[right][i]);
            right--;
            left++;
        }
    }
}
