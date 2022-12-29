#include<iostream>
using namespace std;
int bsearch(int arr[], int s, int n)
{
    int l = 0;
    int h = s - 1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if(n==arr[mid])
        {
        return mid;
        
        }
        else if(arr[mid] > n)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }

    }
    return -1;
}
int main()
{
    int n, s;
    int arr[100];
    cout<<"enter the size of array"<< endl;
    cin >> s;
    cout <<"enter the element of array"<< endl;
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
    }
    //cout << "enter search key" << endl;
    //cin >> n;
    int a = bsearch(arr, s, 50);
    if(a)
    {
        cout<<"Found"<<endl ; 
          }
   else
   {
    cout<<"not found";
   }
   return 0;
}