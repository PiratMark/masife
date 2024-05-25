#include <iostream>
#include <random> 
#include <time.h> 

using namespace std;

int main()
{
   /* // 1 задание 
    int arr[20];
    for (int i = 0; i < 20; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < 20; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << endl << "Max: " << max << endl << "Min: " << min;
    */

   /*  // 2 задание 
    srand(time(NULL));
    int arr[10];
    cout << "Enter limit(less than 10): ";
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 15;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "\n";
    int x, y;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    for (int i = 0; i < n; i++) {
        if (arr[i] < x) sum += arr[i];
        if (arr[i] > y) sum += arr[i];
    }

    cout << sum;
    */

   /*   // 3 задание 
    int r1, r2, imax, imin;
    const int n = 12;
    double a[n];

    cout << "Profit:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "month " << i + 1 << ": ";
        cin >> a[i];
    }

    cout << "Enter month_start, month_end:\n";
    cin >> r1 >> r2;

    imax = imin = r1 - 1;
    for (int i = r1; i < r2; i++)
    {
        if (a[i] > a[imax]) imax = i;
        if (a[i] < a[imin]) imin = i;
    }

    cout << "Max profit: month " << imax + 1 << "\n";
    cout << "Min profit: month " << imin + 1 << "\n";
    */

    system("pause");
    return 0;
}