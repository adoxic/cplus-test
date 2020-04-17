#include <iostream>

using namespace std;

int main() 
{
  //print "Hello World"
  string hi = "Hello World";
  cout << hi << " just one \n";

  //print "Hello World" using for, while, and do...while loops
  int n = 3;
  for(int i = 0; i < n; i++) 
  {
    cout << hi << " for \n";
  }
  
  int i = 1;
  while(i < n)
  {
    cout << hi << " while \n";
    i++;
  }

  do
  {
    cout << hi << " do while \n";
    i--;
  } while(i > 1);
  
}
