#include <bits/stdc++.h>
vector<int> findCommonElements(vector<int> &a, vector<int> &b, vector<int> &c) {
    int i=0, j=0, k=0;
    set<int>s;
    vector<int> result;
    while(i<a.size()&&j<b.size()&&c.size()){
        if(a[i]==b[j]&&b[j]==c[k]){
            
            s.insert(a[i]);

            i++;
            j++;
            k++;

        }
        else if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<c[k]){
            j++;
        } else k++;
    }

    for(auto i:s){
        result.push_back(i);
    }
    return result;
}