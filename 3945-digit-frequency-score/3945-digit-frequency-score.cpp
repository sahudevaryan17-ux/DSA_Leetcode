class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int>m;
        int sum = 0;
        while(n != 0){
            
        m[n%10]++;
        n = n/10;     
        }//frequncy nikala digits ka
        for(auto i : m){
            sum += i.first * i.second;
        }
       return sum;
    }
};//khud se kiya !!!!