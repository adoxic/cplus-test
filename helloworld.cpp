#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  vector<string> msg {"hello", "world", "I", "think", "this", "should", "work"};
  
  for (const string& word : msg)
  {
    cout << word << " ";
  }
  cout << endl;
}
