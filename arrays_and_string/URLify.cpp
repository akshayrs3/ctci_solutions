// Time: O(n)
// Space: O(n)
string URLify(string str){
  int n = str.length();
  int cs = 0;
  for(int i=0;i<n;i++){
    if(str[i] == ' ') cs++;
  }
  int new_n = n + cs*2;
  string res = "";
  int k = 0;
  for(int i=0;i<n;i++){
    if(str[i] == ' '){
      res[k++] = '%';
      res[k++] = '2';
      res[k++] = '0';
    }else{
      res[k++] = str[i];
    }
  }
  return res;
}

// Assuming given string has enough space to make modifs
// Time: O(n)
// Space: O(1)
// n is the true length of the string;
void URLify(string str, int n){
  int k = 0;
  for(int i=n-1;i>=0;i--){
    if(str[i] != ' ')
      str[str.length()-(k++)-1] = str[i]
    else{
      str[str.length()-(k++)-1] = '%';
      str[str.length()-(k++)-1] = '2';
      str[str.length()-(k++)-1] = '0';
    }
  }
  return;
}
