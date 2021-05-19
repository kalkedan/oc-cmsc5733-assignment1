
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

    return 0;
}
 