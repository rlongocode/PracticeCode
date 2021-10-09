#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string LongestWord(string sen) { 

  for (int i=0;i<sen.length();i++)
    if (!(('a'<=sen[i]&&sen[i]<='z')||('A'<=sen[i]&&sen[i]<='Z')||('0'<=sen[i]&&sen[i]<='9')))
        sen[i] = ' ';
  
  stringstream ss;
  ss.str(sen);
  
  string mxs = "";
  while (ss>>sen)
    if (sen.length()>mxs.length())
        mxs = sen;
  return mxs; 
            
}

int main() { 
  
  // keep this function call here
  cout << LongestWord(gets(stdin));
  return 0;
    
}