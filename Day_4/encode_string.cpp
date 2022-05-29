string encode(string src)
{     
  //Your code here 
  src.push_back('#');
  char c = src[0];
  int cnt = 0;
  string ans = "";
  for(int i = 0 ; i < src.size() ; i++)
  {
      cnt= 0;
    //   i++;
      while(i < src.size() && c == src[i])
      {
          cnt++;
          i++;
      }
      if(c == '#') break;
      ans.push_back(c);
      ans.push_back(cnt+'0');
      c = src[i];
      if(cnt >= 1)
        i--;
  }
  return ans;
}    
