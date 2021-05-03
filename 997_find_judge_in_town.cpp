class Solution:
    def findJudge(self, N: int, trust: List[List[int]]) -> int:
        netTrustGains=[0]*N
        for t in trust:
            netTrustGains[t[0]-1]-=1
            netTrustGains[t[1]-1]+=1
            
        judge=-1
        for i in range(N):
            if(netTrustGains[i]==N-1):
                judge=i+1
                
        return judge
