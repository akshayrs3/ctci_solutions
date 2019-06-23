// Time

string stringCompression(string str){
  int n = str.length();
  string res = "";
  int count = 1;
  for(int i=1;i<n;i++){
    if(str[i] != str[i-1]){
      res += str[i-1];
      res += to_string(count);
    }
    if(i-1 >= 0 && i == n-1 && str[i] != str[i-1){
      res += str[i];
      res += to_string(1);
    }
    count++;
  }
  if(res.length() >= str.length()) return str;
  return res;
}
