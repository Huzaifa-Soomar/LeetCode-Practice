#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    bool isUnique ;
    
    for (int i = 0; i < 7; i++)
    {
        isUnique = true;

        for (int j = 0; j < 7; j++)
        {
            if ( i !=j && arr[i]==arr[j])
            {
                isUnique=false;
                break;

            }

            
        }
        if (isUnique)
        {
            cout << "The unique value is : " << arr[i] << endl;
        }
        
        
        
    }
    




    return 0;
}