// Time: O(n^2)
// Space: O(1)

void rotateMatrix(vector <vector <int> > &A){
    int n = A.size();
    int last = n-1;
    int level = 0;
    while(level < n/2){
        for(int i=level;i<last;i++){
            swap(A[level][i], A[i][last]);
            swap(A[level][i], A[last][last-i+level]);
            swap(A[level][i], A[last-i+level][level]);
        }
        level++;
        last--;
    }
    return;
}
