#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5};
    int sum =0 ;
    for (int i = 0; i < 6; i++)
    {
        sum +=arr[i];
    }
    cout << "sum of given array is  : " << sum << endl ;

    
    int pro[] ={2,4,6,8,};

    int mul =1;
    for (int i = 0; i < 5; i++)
    {
        mul *= pro[i];
    }
    cout <<"Th product of given array is : " << mul;


    return 0;
}