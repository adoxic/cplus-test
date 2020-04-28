#include <iostream>

using namespace std;

int main()
{
  int numOfPrimes;
  cout << "input the number of prime numbers you want:";
  cin >> numOfPrimes;

  int currentNum = 1;
  int primeCheck;

  while (numOfPrimes > 0)
  {
    primeCheck = currentNum;

    for (primeCheck; primeCheck > 0; primeCheck--)
    {
      
      if(currentNum % primeCheck == 0 && primeCheck != currentNum && primeCheck != 1) {
        primeCheck = 0;
        currentNum++;
      } else if(primeCheck == 1) 
      {
        cout << currentNum << "\n";
        numOfPrimes--;
        currentNum++;
      }
    }
    
  }
  
}
