// Time: O(n^2)
// Space: O(1)
bool isUnique(string str){
  int n = str.length();
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(str[i] == str[j]){
        return false;
      }
    }
  }
  return true;
}

// Time: O(nlogn)
// Space: O(1) (Quicksort)
bool isUnique(string str){
  sort(str.begin(), str.end());
  int n = str.length();
  for(int i=0;i<n-1;i++){
    if(str[i] == str[i+1]){
      return false;
    }
  }
  return true;
}

// Time: O(1)
// Space: O(1)
bool isUnique(string str){
  int n = str.length();
  if(n > 26) return false;
  unordered_map<char, int> map;
  for(auto c: str){
    if(map[c] > 0){
      return false;
    }
    map[c]++;
  }
  return true;
}
