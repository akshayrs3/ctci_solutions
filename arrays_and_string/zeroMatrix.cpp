// Time: O(m*n)
// Space: O(n)

void zeroMatrix(vector< vector< int> > &A){
    int m = A.size();
    int n = A[0].size();
    unordered_map<int, bool> rows;
    unordered_map<int, bool> cols;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(!A[i][j]){
                rows[i] = true;
                cols[j] = true;    
            }
            
        }
    }
    for(auto r: rows){
        for(int j=0;j<n;j++){
            A[r.first][j] = 0;
        }
    }
    for(auto c: cols){
        for(int i=0;i<m;i++){
            A[i][c.first] = 0;
        }
    }
}

// Time: O(m*n)
// Space: O(1)

void zeroMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        bool row_has_zero = false;
        bool col_has_zero = false;
        for(int i=0;i<n;i++){
            if(matrix[0][i] == 0) row_has_zero = true;
        }
        for(int i=0;i<m;i++){
            if(matrix[i][0] == 0) col_has_zero = true;
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(!matrix[i][j]){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
        for(int i=1;i<m;i++){
            if(matrix[i][0] == 0) 
                nullifyRow(matrix, i);
        }
        for(int j=1;j<n;j++){
            if(matrix[0][j] == 0) 
                nullifyCol(matrix, j);
        }
        if(row_has_zero)
            nullifyRow(matrix, 0);
        if(col_has_zero) 
            nullifyCol(matrix, 0);
    }
