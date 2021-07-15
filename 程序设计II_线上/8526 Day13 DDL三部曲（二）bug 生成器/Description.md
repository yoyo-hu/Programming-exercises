# Day13 DDL三部曲（二）bug 生成器

## Description

DDL 不得不面对那个打搅了他好梦的 bug：

** Error: value of 000000013215c8a5 too large for field of 4 bytes at 00000000000001e5 **

​	然后 DDL 决定再睡会……

​	……

​	DDL 在做题时遇到了一个 $(r,c,k)$ 的迷宫，他需要开一个数组 $dis[r][c][k+1]$ 来处理这个问题。但是这题非常讨厌，它只保证了$r*c\le5000$ 以及 $k\le50$ ，显然，编译器并不想开一个 $dis[5000][5000][51]$ 的数组。 

​	DDL 现在把它的代码给了你，让你通过一个 $Dis$ 函数帮忙实现这个 $dis$ 数组。尽管它是一个 c++ 程序，但补全 $Dis$ 函数需要的知识在 c 语言学习中都已经学过了。

​	函数接口说明：$Dis(u,v,w,r,c)~,~1\le u \le r~,~1\le v \le c~,~0\le w \le k$

​	原题：https://codeforces.com/gym/102536/problem/E


## Sample Input
```
2
3 12 3
....D...#.#B
A#.D.D..#.#.
.D..D...D.D.
7 11 8
......#....
......#..B.
##....#....
..#....####
...#...D...
...D...D...
...#...#.A.
```

## Sample Output
```
19
HAHAHUHU
```

下面是编译器不想编译的代码，如果你觉得阅读它对于你理解 $dis$ 数组有帮助，你可以尝试阅读这份一次性乐色。你需要给这份代码里的 $dis$ 数组重新实现一下，通过一个 $Dis$ 函数模拟这个数组的功能。

```c++
#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second

int n,m,K;
char s[5005][5005];
int dis[5005][5005][51];
typedef pair<int,pair<int,int> > ppp;
queue<ppp> Q[15005];

int fx[4]={1,-1,0,0},fy[4]={0,0,1,-1};


void solve() {
	scanf("%d%d%d",&n,&m,&K);
	for (int i=1;i<=n;i++) scanf("%s",s[i]+1);
	for (int k=0;k<=K;k++) for (int i=1;i<=n;i++) for (int j=1;j<=m;j++)  dis[i][j][k]=1<<30;
	for (int i=1;i<=n;i++) for (int j=1;j<=m;j++) if (s[i][j]=='A') {
		dis[i][j][0]=0;
		Q[0].push({0,{i,j}});
	}
	for (int d=0,lim=0;d<=lim;d++) while (!Q[d].empty()) {
		auto h=Q[d].front();Q[d].pop();
		int k=h.fi,u=h.se.fi,v=h.se.se;
		if (d>dis[u][v][k] || s[u][v]=='B') continue;
		for (int i=0;i<4;i++) {
			int x=u+fx[i],y=v+fy[i];
			if (0<x && x<=n && 0<y && y<=m && s[x][y]!='#') {
				if (s[x][y]=='D') {
					if (k==K) continue;
					if (dis[u][v][k]+2<dis[x][y][k+1]) {
						lim=max(lim,dis[x][y][k+1]=dis[u][v][k]+2);
						Q[dis[x][y][k+1]].push({k+1,{x,y}});
					}
					if (s[u][v]=='D' && dis[u][v][k]+3<dis[x][y][k]) {
						lim=max(lim,dis[x][y][k]=dis[u][v][k]+3);
						Q[dis[x][y][k]].push({k,{x,y}});
					}
				}
				else {
					if (dis[u][v][k]+1<dis[x][y][k]) {
						lim=max(lim,dis[x][y][k]=dis[u][v][k]+1);
						Q[dis[x][y][k]].push({k,{x,y}});
					}
					if (s[u][v]=='D' && dis[u][v][k]+2<dis[x][y][k-1]) {
						lim=max(lim,dis[x][y][k-1]=dis[u][v][k]+2);
						Q[dis[x][y][k-1]].push({k-1,{x,y}});
					}
				}
			}
		}
	}
	int ans=1<<30;
	for (int i=1;i<=n;i++) for (int j=1;j<=m;j++) if (s[i][j]=='B')
		for (int k=0;k<=K;k++) ans=min(ans,dis[i][j][k]);
	if (ans==1<<30) puts("HAHAHUHU");
	else printf("%d\n",ans);
}

int main() {
	int T;
	scanf("%d",&T);
	while (T--) solve();
}

```

