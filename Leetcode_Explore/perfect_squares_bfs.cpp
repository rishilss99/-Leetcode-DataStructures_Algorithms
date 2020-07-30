class Solution {
public:
    int numSquares(int n) {
        queue<pair<int,int>> q;
        map<int,bool> mp;
        q.push(make_pair(n,1));
        int val = 0;
        int dep = 0;
        while (!q.empty()){
            val = q.front().first;
            dep = q.front().second;
            q.pop();
            int i=1;
            while (i*i <= val){i++;}
            while (i>=1){
                if (val-i*i == 0){
                    return dep;
                }
                if (mp.find(val-i*i)==mp.end()){
                    q.push(make_pair(val-i*i,dep+1));   
                    mp[val-i*i] = true;
                }
                i--;
            }
        }
        return dep;
    }
};