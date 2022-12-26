class Solution {
public:
    int divide(long long dividend, long long divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        int sign = dividend > 0 ^ divisor > 0 ? -1 : 1;
        long int did = abs(dividend);
		long int div = abs(divisor);
		long int result=0;
		
		while(did - div >= 0){
			int count=0;
			while((did - (div<<1<<count))>=0)
				count++;
			result += 1<<count;
			did -= div<<count;
		}
        return result*sign;
    }
};