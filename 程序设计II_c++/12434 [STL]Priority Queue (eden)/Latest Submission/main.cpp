#include <iostream>
#include <queue>
using namespace std;
int main(){
    int T;
    cin>>T;
    int n,m;
    int time;
    for(int i=0;i<T;i++){
        priority_queue<int> PRIORITY_Q;
        queue<int>Q;
        cin>>n>>m;
        time=0;
        int temp;
        for(int j=0;j<n;j++){
            cin>>temp;
            PRIORITY_Q.push(temp);
            Q.push(temp);
        }
        for(int j=0;j<=m;j++){
            if(Q.front()>=PRIORITY_Q.top()){
                time++;
                Q.pop();
                PRIORITY_Q.pop();
            }
            else{
                Q.push(Q.front());
                Q.pop();
                if(j==m){
                    m=Q.size()-1;
                    j=-1;
                }
            }
        }
        cout<<time<<endl;
    }
    return 0;
}