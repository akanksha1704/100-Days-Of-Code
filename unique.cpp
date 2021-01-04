//Given an integer n, return any array containing n unique integers such that they add up to 0.

 

//Example 1:

//Input: n = 5
//Output: [-7,-1,1,3,4]
//Explanation: These arrays also are accepted [-5,-1,1,2,3] , [-3,-1,2,-2,4].
//Example 2:

//Input: n = 3
//Output: [-1,0,1]
//Example 3:

//Input: n = 1
//Output: [0]


class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>m;
        if(n==1){
            m.push_back(0);
            return  m;
        }
         if(n%2==0){
            int t=n/2;
            int inp=t;
            for(int i=0;i<t;i++){
                m.push_back(-(inp));
                m.push_back(inp);
                inp--;
            }
        }
        else{
            int t=(n+1)/2;
            int inp=t;
            for(int i=0;i<t;i++){
                m.push_back(-(inp));
                inp--;
            }
            m.push_back(t+1);
            t--;
            inp = t;
            for(int i = 0;i<t-1;i++){
                m.push_back(inp--);
            }
            
        }
        return  m;
       
    }
};
