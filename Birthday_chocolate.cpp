#include<iostream>
using namespace std;

int birthday(int s[], int n, int d, int m)
{
    int sum[105];
    int count=0;
    sum[0]=0;
    for(int i=0;i<n;i++){
        sum[i+1]=sum[i]+s[i];
        cout << sum[i+1] << " ";
    }
    for(int i=0;i<=n-m;i++){
        if(sum[i+m]-sum[i]==d){
            count++;
        }
    }
    return count;
}

int main()
{
    int n, d, m;
    cin >> n;
    int s[n];
    for(int i=0; i<n; i++)
        cin >> s[i];
    cin >> d >> m;
    int ans = birthday(s, n, d, m);
    cout << ans << endl;
    return 0;
}
