class Solution {
public:
#define MOD 1000000007
    int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) {
        
        hc.push_back(0);
        hc.push_back(h);
        vc.push_back(0);
        vc.push_back(w);
        sort(hc.begin(),hc.end());
        sort(vc.begin(),vc.end());
        long long mh=0,mw=0;
        for (int i = 0; i < hc.size()-1; i++)
        {
            if((hc[i+1]-hc[i])%MOD > mh){
                mh=(hc[i+1]-hc[i])%MOD;

            }
            /* code */
        }
        for (int i = 0; i < vc.size()-1; i++)
        {
            if((vc[i+1]-vc[i])%MOD > mw){
                mw=(vc[i+1]-vc[i])%MOD;

            }

            /* code */
        }
        
        return (mh*mw)%MOD;
        
        
        
    }
};