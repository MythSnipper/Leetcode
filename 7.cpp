class Solution {
public:
    int reverse(int x) {
        bool neg = x < 0;
        if (neg){
            if(__builtin_mul_overflow(x, -1, &x)){
                return 0;
            }  
        }
        int ret = 0;
        while(x != 0){
            if(__builtin_mul_overflow(ret, 10, &ret)){
                return 0;
            }
            if(__builtin_add_overflow(ret, x % 10, &ret)){
                return 0;
            }
            x /= 10;
        }
        return (neg) ? -ret : ret;
    }
};
