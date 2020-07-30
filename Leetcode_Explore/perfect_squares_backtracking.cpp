class Solution {
public:
    int numSquares(int n) {
        if(n < 3)
            return n;
        int min = INT32_MAX;
        sum_backtrack(n, min);
        return min;
    }
    
    void sum_backtrack(int n, int &min, int current_steps = 0){
        // cout<<n<<endl;
        if(current_steps >= min)
            return;
        if(n == 0){
            min = current_steps;
            return;
        }
        for(int i = floor(sqrt(n)); i > 0; i--){
            if(n - i*i >= 0){
                sum_backtrack(n - i*i, min, current_steps + 1);
            }
            // cout<<"hey"<<endl;
        }
        return;
    }
};