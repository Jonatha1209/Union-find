#include <bits/stdc++.h>

using namespace std;

int parent[1010101];
int m,n;

int Find(int x){
  if (parent[x]==x) return x;
  return parent[x]=Find(parent[x]);
}

void Union(int x, int y){
  x = Find(x);
  y = Find(y);
  parent[x]=y;
}

bool yes(int x, int y){
    return Find(x)==Find(y);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for (int i=0;i<101010;i++)parent[i]=i;
    int a=3;
    int b=6;
    Union(a,b);
    Union(5,3);
    Union(2,9);
    Union(3,6);
    Union(6,9);
    // 같은 집합에 포함되어있습니다.
    /**
    

    그냥 그거입니다.
    3이랑 9 있으면 더 큰 쪽에 합치는거요.

    */
    if (yes(3,9)){
        cout << parent[3]<<"\n";
        cout << "YES";
    } else {
        cout << "NO";
    }
}
