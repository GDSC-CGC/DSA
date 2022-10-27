class Solution {
public:
  long long int sqrt(int number) {
    int s = 0;
    int e = number;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;
    while (s <= e) {
      long long int midsq = mid * mid;
      if (midsq == number) {
        return mid;
      } else if (midsq > number) {

        e = mid - 1;
      } else {
        ans = mid;
        s = mid + 1;
      }
      mid = s + (e - s) / 2;
    }
    return ans;
  }

  int mySqrt(int x) { return sqrt(x); }
};
