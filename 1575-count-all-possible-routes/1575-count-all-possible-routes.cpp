class Solution {
    const int N=1000000007;
    
public:
    int countRoutes(vector<int>& locations, int start, int finish, int fuel) {
        start=locations[start];
        finish=locations[finish];
        sort(locations.begin(),locations.end());
        start=find(locations.begin(),locations.end(),start)-locations.begin();
        finish=find(locations.begin(),locations.end(),finish)-locations.begin();
        int size=locations.size();
        int j,f,d;
        vector<vector<int>> Ldp(size,vector<int>(fuel+1,0));
        vector<vector<int>> Rdp(size,vector<int>(fuel+1,0));
        for(f=1;f<=fuel;f++){
            Ldp[size-1][f]=0;
            Rdp[0][f]=0;
            for(j=0;j<size-1;j++){
                d=locations[j+1]-locations[j];
                if(f>d)
                    Ldp[j][f]=(Rdp[j+1][f-d]+2*Ldp[j+1][f-d]%N)%N;
                else
                    Ldp[j][f]=1*(f==d)*(start==(j+1));
            }
            for(j=1;j<size;j++){
                d=locations[j]-locations[j-1];
                if(f>d)
                    Rdp[j][f]=(Ldp[j-1][f-d]+2*Rdp[j-1][f-d]%N)%N;
                else
                    Rdp[j][f]=1*(f==d)*(start==(j-1));
            }
        }
        int ans=1*(start==finish);
        for(j=1;j<=fuel;j++) ans=((ans+Ldp[finish][j])%N+Rdp[finish][j])%N;
        return ans;
    }
};