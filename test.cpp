#include <iostream>
#include <string>
#include <stack>
#include <set>
#include <cstdlib>

using namespace std;

long long mi(int m, int n) {
  long long sum = 1;
  for (int i = 0; i < n; i++)
    sum *= m;
  return sum;
}
int Sum(int a[], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++)
    sum += a[i];
  return sum;
}

void sort(int a[], int n) {
  for (int i = 0; i < n; i++)
  for (int j = 0; j < n - 1; j++)
    if (a[j] < a[j + 1]) {
      int temp = a[j];
      a[j] = a[j+1];
      a[j+1] = temp;
    }
}

int main() {
  unsigned N;
  cin >> N;
  while(N--) {
    int m = 0, n = 0;
    cin >> m >> n;
    set<string> ss;
    long long sum = mi(m+1, n);
    for (long long i = 1; i <= sum; i++) {
      int a[10] = {0};
      long long temp = i;
      for (int j = 0; j < n; j++) {
        a[j] = temp % (m+1);
        temp /= (m+1);
      }
      if (Sum(a, n) == m) {
        sort(a, n);    
        string s;  
        for (int i = 0; i < n; i++)
          s += (a[i] + '0');
        ss.insert(s);
      }
    }
    cout << ss.size() << endl;
    
    }
  system("pause");
  return 0;
}




