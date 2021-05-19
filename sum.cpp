
#include<iostream>
using namespace std;

int sum(int arr[], int n)
{
    int sum = 0;
 
    for (int i = 0; i < n; i++)
    sum += arr[i];
 
    return sum;
}
int multply(int arr[], int n)
{
    int mult = 0;
 
    for (int i = 0; i < n; i++)
    mult *= arr[i];
 
    return mult;
}
int *reverse(int arr[]){
int r[sizeof(arr)];
int j=0;
for( int i=sizeof(arr)-1;i>=0;i--){
    r[j]=arr[i];
    j++;
}
return r;
}

int main()
{
    int arr[] = {12, 3, 4, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum of given array is " << sum(arr, n);
    cout << "multiple of given array is " << multply(arr, n);
      int numbers[5];
      

    cout << "Enter 5 numbers: " << endl;

    //  store input from user to array
    for (int i = 0; i < 5; ++i) {
        cin >> numbers[i];
    }

    cout << "Sum of given array is " << sum(numbers, 5);
    cout << "multiple of given array is " << multply(numbers, 5);
    int *reversed= reverse(numbers);
    cout<<"the reversed numbers"<<endl;
     for (int i = 0; i < 5; ++i) {
        cout<< numbers[i];
    }
    return 0;
}
 