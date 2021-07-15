#include<bits/stdc++.h>
#include "b.h"
using namespace std;
#define fi first
#define se second

int n,m,K;
char s[5005][5005];
typedef pair<int,pair<int,int> > ppp;
queue<ppp> Q[15005];

int fx[4]={1,-1,0,0},fy[4]={0,0,1,-1};

int *Dis(int i,int j,int k,int n,int m);

inline int *dis(int i,int j,int k) {
	return Dis(i,j,k,n,m);
}

void solve() {
	scanf("%d%d%d",&n,&m,&K);
	for (int i=1;i<=n;i++) scanf("%s",s[i]+1);
	for (int k=0;k<=K;k++) for (int i=1;i<=n;i++) for (int j=1;j<=m;j++) *dis(i,j,k)=1<<30;
	for (int i=1;i<=n;i++) for (int j=1;j<=m;j++) if (s[i][j]=='A') {
		*dis(i,j,0)=0;
		Q[0].push({0,{i,j}});
	}
	for (int d=0,lim=0;d<=lim;d++) while (!Q[d].empty()) {
		auto h=Q[d].front();Q[d].pop();
		int k=h.fi,u=h.se.fi,v=h.se.se;
		if (d>*dis(u,v,k) || s[u][v]=='B') continue;
		for (int i=0;i<4;i++) {
			int x=u+fx[i],y=v+fy[i];
			if (0<x && x<=n && 0<y && y<=m && s[x][y]!='#') {
				if (s[x][y]=='D') {
					if (k==K) continue;
					if (*dis(u,v,k)+2<*dis(x,y,k+1)) {
						lim=max(lim,*dis(x,y,k+1)=*dis(u,v,k)+2);
						Q[*dis(x,y,k+1)].push({k+1,{x,y}});
					}
					if (s[u][v]=='D' && *dis(u,v,k)+3<*dis(x,y,k)) {
						lim=max(lim,*dis(x,y,k)=*dis(u,v,k)+3);
						Q[*dis(x,y,k)].push({k,{x,y}});
					}
				}
				else {
					if (*dis(u,v,k)+1<*dis(x,y,k)) {
						lim=max(lim,*dis(x,y,k)=*dis(u,v,k)+1);
						Q[*dis(x,y,k)].push({k,{x,y}});
					}
					if (s[u][v]=='D' && *dis(u,v,k)+2<*dis(x,y,k-1)) {
						lim=max(lim,*dis(x,y,k-1)=*dis(u,v,k)+2);
						Q[*dis(x,y,k-1)].push({k-1,{x,y}});
					}
				}
			}
		}
	}
	int ans=1<<30;
	for (int i=1;i<=n;i++) for (int j=1;j<=m;j++) if (s[i][j]=='B')
		for (int k=0;k<=K;k++) ans=min(ans,*dis(i,j,k));
	if (ans==1<<30) puts("HAHAHUHU");
	else printf("%d\n",ans);
}

int main() {
	int T;
	scanf("%d",&T);
	while (T--) solve();
}

