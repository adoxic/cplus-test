#include <iostream>

using namespace std;

int main()
{
  bool keepGoing;
  while(keepGoing)
  {
    int numToEvaluate;
    cout << "Input number to see if it is devisible by 5:";
    cin >> numToEvaluate;
    
    if(numToEvaluate < 0) 
    {
      keepGoing = false;
      continue;
    }

    if(numToEvaluate % 5 == 0) 
    {
      cout << "5 \n"; 
    } 
    else 
    {
      continue;
    }
 
  }
  cout << "Goodbye!";
}
