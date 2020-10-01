//assuming we return just the answer from the function isInterleave
class Solution {
public:
    int func(string & A,string &B,string& C,int i,int j, vector<vector<int>>& dp){
    
    if(A.length()+B.length()!=C.length()){
        return 0;
    }
    if(i==A.length()&&j==B.length()){
        return 1;
    }
    if(i==A.length()){
        
        if((B.substr(j)==C.substr(C.length()-(B.length()-j)))==1){
            return 1;
        }
        
        return 0;
    }
    if(j==B.length()){
         if((A.substr(i)==C.substr(C.length()-(A.length()-i)))==1){
            return 1;
        }
        
        return 0;
    }
    
    if(dp[i][j]!=-1){
        
        return dp[i][j];
    }
    int a=0;
  
    if(A[i]==C[i+j]){
        
      a=a||func(A,B,C,i+1,j,dp);
    
    }
        if(B[j]==C[i+j])
           a=a||func(A,B,C,i,j+1,dp);
    
   
    dp[i][j]=a;
    return a;
    
    
}
 bool isInterleave(string A, string B, string C) {
        
         vector<vector<int>> dp(A.size(),vector<int> (B.size(),-1));

    return func(A,B,C,0,0,dp);
    }
};
