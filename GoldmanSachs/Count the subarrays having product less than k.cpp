class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
    long long int i = 0, j = 0;
	long long int prod = 1, ans = 0;

	while(i < n && j < n) {
	  if(j >= i && prod * a[j] < k) ans += j-i+1;
	  if(prod * a[j] < k) {
		prod *= a[j++];
	  }else {
		prod /= a[i++];
		if(i >= j) {j = i; prod = 1;}
	  }
	}

	return ans;
    }
};
