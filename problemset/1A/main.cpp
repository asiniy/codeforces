// http://codeforces.com/problemset/problem/1/A
// Submission: http://codeforces.com/contest/1/submission/51869137

#include <iostream>
using namespace std;

int main ()
{
  int m, n, a;
  cin >> m >> n >> a;

  long long int m_length = (m % a == 0) ? (m / a) : (m / a + 1);
  long long int n_length = (n % a == 0) ? (n / a) : (n / a + 1);

  cout << m_length * n_length << endl;
}
