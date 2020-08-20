#include<iostream>
#include<algorithm>
using namespace std;

int migratoryBirds(int n, int arr[])
{
    int birds[6] = {0};
    int array1[6] = {0};
    for (int i=0; i<n; i++)
    {
        birds[arr[i]]++;
    }
    for(int i=1;i<6;i++)
    {
        array1[i] = birds[i]; 
    }
    sort(array1, array1+6);
    int max = array1[5];
    int loc = 0;
    for(int i=1;i<6;i++){
        if(birds[i] == max){
            loc = i;
            break;
        }
    }
    return loc;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    int bird_id;
    bird_id = migratoryBirds(n, arr);
    cout << bird_id << endl;
    return 0;
}
