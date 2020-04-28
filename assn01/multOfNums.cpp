#include <iostream>

using namespace std;

int main()
{
  while(true)
  {
    int numToEvaluate;
    cout << "Input number to see if it is devisible by 5:";
    cin >> numToEvaluate;
 
    numToEvaluate % 5 ? cout << "-1 \n" : cout << "5 \n";
  }
}
