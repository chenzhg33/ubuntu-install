#include <iostream>
#include <string>
#include <stack>
#include <set>
#include <cstdlib>
using namespace std;
bool isSort(int a[], int n) {
  for (int i = 0; i < n - 1; i++)
    if (a[i] > a[i+1])
      return false;
  return true;
}
int bubleSort(int a[], int index) {
  int flag = 1;
  for (int i = 0; i < index - 1; i++)
  for (int j = 0; j < index - 1 - i; j++) {
    if (a[j] > a[j+1]) {
      flag = 0;
      int temp = a[j];
      a[j] = a[j+1];
      a[j+1] = temp;
    }
  }
  return flag;
}
void electSort(int a[], int n) {
for (int i = 0; i < n - 1; i++) {
  int min = i;
  for (int j = i + 1; j < n; j++) {
    if (a[min] > a[j]) {
      min = j;
      }
    }
  int temp = a[i];
  a[i] = a[min];
  a[min] = temp;
}
}
                        
void print(int a[], int n) {
  cout << a[0];
  for (int i = 1; i < n; i++)
    cout << ' ' << a[i];
  cout << endl;
}
   
int main() {
  int n;
  cin >> n;
  int a[500] = {0};
  for (int i = 0; i < n; i++)
    cin >> a[i];
  sort(a,n);
  print(a,n);
  if (n%2 == 0) {
    cout << (a[n/2 - 1] + a[n/2]) / 2 << endl;
  } else {
    cout << a[n/2] << endl;
  }
  system("pause");
  return 0;
}




