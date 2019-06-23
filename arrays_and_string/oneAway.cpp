// Time: O(n)
// Space: O(1)


bool checkReplace(string str1, string str2){
  int count = 0;
  int n = str1.length();
  for(int i=0;i<n;i++){
    if(str1[i] != str2[i]) count++;
  }
  if(count < 2) return true;
  return false;
}
bool checkInsert(string str1, string str2){
  int n = str1.length();
  int k = 0;
  for(int i=0;i<n;i++){
    if(str1[i] != str2[i+k]){
      k++;
      i -= 1;
    }
  }
  if(k < 2) return true;
  return false;
}
bool checkDelete(string str1, string str2){
  return checkInsert(str2, str1);
}

bool oneAway(string str1, string str1){
  int m = str1.length();
  int n = str2.length();
  if(abs(m-n) > 1) return false;
  if(m > n) return checkDelete(str1, str2);
  if(m < n) return checkInsert(str1, str2);
  return checkReplace(str1, str2);
}
