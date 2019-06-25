// Time: O(n * m)
// Space: O(n) (appending existing string to string)

bool isSubstring(string s1, string s2){
    int n = s1.length();
    int m = s2.length();
    for(int i=0;i<=n-m;i++){
        int j=0;
        while(j < m && s1[i+j] == s2[j]){
            j++;
        }
        if(j == m){
            return true;
        }
    }
    return false;
}
bool stringRotation(string s1, string s2){
    s1 = s1 + s1;
    return isSubstring(s1, s2);
}
