#include <iostream>

using namespace std;
int main() {
    int arr[10], i, j, n;

    cout << "Inform what is array's length = ";
    cin >> n;

    for(i = 0; i < n; i++) {
        cout << "Inform values position [" << i << "] = ";
        cin >> arr[i];
    }
    cout << endl;
    
    cout << "Sorted Array: ";
    for(i = 1; i < n - 1; i++) // it passes values that are already sorted, decrease processing
    {
        for(j = 0; j < n - i; j++) // inner loop: shrinks each pass 
        {
            if(arr[j] > arr[j+1]) // Swap values when the current position is bigger than position ahead
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for(i = 0; i < n; i++) {
        cout << arr[i] << "   ";
    }
    
    return 0;
}