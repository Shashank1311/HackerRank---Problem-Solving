#include<iostream>
using namespace std;

int bonAppetit(int bill[], int n, int k, int b_charged)
{
    int sum = 0;
    for(int i=0; i<n; i++){
        if(i == k)
            continue;
        else{
            sum += bill[i];
        }
    }
    int b_actual = sum / 2;
    if(b_actual == b_charged)
        return 0;
    else
        return (b_charged - b_actual);
}

int main()
{
    int n, k, b_charged;
    cin >> n >> k;
    int bill[n];
    for(int i=0; i<n; i++)
        cin >> bill[i];
    cin >> b_charged;
    int refund = bonAppetit(bill, n, k, b_charged);
    if(refund == 0)
        cout << "Bon Appetit" << endl;
    else
        cout << refund << endl;
    return 0;
}
