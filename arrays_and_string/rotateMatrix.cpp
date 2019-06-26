// Time: O(n^2)
// Space: O(1)

void transpose(vector< vector<int> > &A){
    int n = A.size();
    int level = 0;
    while(level < n){
        for(int i=level;i<n;i++){
            swap(A[level][i], A[i][level]);
        }
        level++;
    }
    return;
}
void mirror_cols(vector< vector<int> > &A){
    int n = A.size();
    for(int i=0;i<n/2;i++){
        for(int j=0;j<n;j++){
            swap(A[j][i], A[j][n-i-1]);
        }
    }
    return;
}
void rotateMatrix(vector <vector <int> > &A){
    transpose(A);
    mirror_cols(A);
    return;
}
