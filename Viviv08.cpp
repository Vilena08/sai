/*********************
*  Author:Saibuu V.M *
*  Date 26.10.2025   *
*  Option 15         *
*********************/

#include <iostream>
using namespace std;

void enterTheArray(int array[], int sizeOfTheArray) {
  for (int indexOfTheArrayElement = 0; indexOfTheArrayElement < sizeOfTheArray; ++indexOfTheArrayElement) {
    cout << "Enter element " << indexOfTheArrayElement + 1 << ": ";
    cin >> array[indexOfTheArrayElement];
  }
}

int findMax(const int array[], int sizeOfTheArray) {
  int max = array[0];
  for (int indexOfTheArrayElement = 1; indexOfTheArrayElement < sizeOfTheArray; ++indexOfTheArrayElement)
    if (array[indexOfTheArrayElement] > max)
      max = array[indexOfTheArrayElement];
  return max;
}

int main() {
  int n, m, k;

  cout << "Enter array sizes: ";
  cin >> n >> m >> k;

  int arrayA[n];
  int arrayB[m];
  int arrayC[k];

  cout << "Enter the elements of array A:\n";
  enterTheArray(arrayA, n);
  cout << "Enter the elements of array B:\n";
  enterTheArray(arrayB, m);
  cout << "Enter the elements of array C:\n";
  enterTheArray(arrayC, k);

  cout << "The maximum element of array A: " << findMax(arrayA, n) 
       << ", array B: " << findMax(arrayB, m) 
       << ", array C: " << findMax(arrayC, k) << endl;
       
  return 0;
}
