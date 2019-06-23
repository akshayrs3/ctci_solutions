// Time: O(nlogn)
// Space: O(1)
bool checkPermutation(string str1, string str2){
  int m = str1.length();
  int n = str2.length();
  if(m != n) return false;
  sort(str1.begin(), str1.end());
  sort(str2.begin(), str2.end());
  for(int i=0;i<n;i++){
    if(str1[i] != str2[i]){
      return false;
    }
  }
  return true;
}


// Time: O(n)
// Space: O(1) (only lowercase letters)
bool checkPermutation(string str1, string str2){
  int m = str1.length();
  int n = str2.length();
  if(m != n) return false;
  unordered_map<char, int> map;
  for(auto c: str1){
    map[c]++;
  }
  for(auto c: str2){
    map[c]--;
  }
  for(auto c: map){
    if(c.second) return false;
  }
  return true;
}
