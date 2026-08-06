class Solution {
public:
    int smallestNumber(int n, int t) {

        for(int i = n; i<=100; n++){
        int num = n;
            i = n;
            int prod = 1;
            while(num){
                int rem = num%10;
                prod *= rem;
                num /= 10;
            }
            if(prod%t == 0){
                break;
            }
        }
        return n;

    }
};