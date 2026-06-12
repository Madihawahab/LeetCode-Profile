class Solution {
public:
    int fib(int n) {

        //base case
        if(n == 1){
            return n;
        }

        if(n == 0){
            return n;
        }


        //recursive case
        int A = fib(n-2);
        int B = fib(n-1);
        return A+B;
        
    }
};