
bool palindromePermutation(string str){
  int n = str.length();
  unordered_map<char, int> map;
  for(auto c: str){
    map[c]++;
  }
  int count_odd = 0;
  for(auto c: map){
    if(c.second % 2) count_odd++;
  }
  if(count_odd <= 1) return true;
  return false;
}
