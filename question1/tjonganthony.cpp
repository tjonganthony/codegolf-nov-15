#include <bits/stdc++.h>

int main(){
  std::string s;
  std::cin>>s;
  for(int i=0; i<s.length(); i++)
    std::cout<<49-(int)s[i];
}
