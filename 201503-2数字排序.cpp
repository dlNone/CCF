#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

typedef pair<int,int> PAIR;
bool com(const PAIR &l,const PAIR &r){
    if(l.second==r.second){
        return l.first<r.first;
    }else{
        return l.second>r.second;
    }
}
int main(){
    int len;
    map<int,int> container;
    cin>>len;
    cin.ignore();
    for(int i=0; i<len; i++){
        int tem;
        cin>>tem;
        ++container[tem];
    }
    vector<PAIR> vec(container.begin(),container.end());
    sort(vec.begin(),vec.end(),com);
    for(int j=0; j<vec.size(); j++){
        cout<<vec[j].first<<" "<<vec[j].second<<endl;
    }
    return 0;
}
