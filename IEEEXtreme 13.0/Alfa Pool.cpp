// 33% tests passed

#include <bits/stdc++.h>
#define DEBUG if(0)
#define lli long long int
#define ldouble long double
using namespace std;

const lli mod = 1e9 + 7;
const int maxB = 1e5 + 1;
int b;

lli memo[maxB][17];
lli solve(int points = 0, int suc = 0)
{
  if (points >= b) return points == b;

  if (memo[points][suc] == -1)
  {
    lli ans = (solve(points + 1, 1) + solve(points + (1 << suc), suc + 1)) % mod;
    memo[points][suc] = ans;
  }
  return memo[points][suc];
}

int main()
{
  int n; scanf("%d", &n);
  // int a[n]; for (int i = 0; i < n; i ++) scanf("%d", &a[i]);
  // sort
  while (n --)
  {
    scanf("%d", &b);
    for (int i = 0; i <= b; i ++)
      for (int j = 0; j < 17; j ++)
        memo[i][j] = -1;
    lli ans = solve();
    printf("%lld\n", ans);
  }
  return 0;
}