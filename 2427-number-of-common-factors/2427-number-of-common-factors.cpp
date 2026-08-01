class Solution {
public:
    int commonFactors(int a, int b) {
     int n = min(a,b);//chhote number tak chalega
     int count = 0;
     for(int i = 1; i<=n;i++){
        if(a%i == 0 && b%i == 0){//pehle se leke min tak check karo 
            count++;//if completely divided
        }
     }
           return count;
        
    }
};