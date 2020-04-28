#include <iostream>

using namespace std;

int main()
{
  int numOfInt;
  cout << "number of numbers to average:";
  cin >> numOfInt;

  double mean;
  int max;
  int min;
  int range;

  double total;
  int current;

  for (int i = 0; i < numOfInt; i++)
  {
    cout << "Please put number " << i + 1 << ":";
    cin >> current;

    if(i == 0) 
    {
      max = current;
      min = current;
      total = current;
    } else if(current > max)
    {
      max = current;
      total += current;
    } else if(current < min) 
    {
      min = current;
      total += current;
    }
    
  }
  
  cout << "Mean: " << total / numOfInt << "\n";
  cout << "Max: " << max << "\n" << "Min: " << min << "\n";
  cout << "Range: " << max - min << "\n";
}
