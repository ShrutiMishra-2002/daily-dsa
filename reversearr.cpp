#include <conio.h>
#include <iostream>
using namespace std;


int main() {
    int n,i;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int arr[] = {1, 4, 3, 2}; 
    n = sizeof(arr)/sizeof(arr[0]);  
    for(i=n-1;i>=0;i--)
    {
    cout << arr[i] << " ";

    }
    return 0;
}
// passed test cases
// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// #define MAX 10000
// using namespace std;


// int main() {
//     int a[MAX], N,i;
//     cin>>N;
//     for(i=0;i<N;i++)
//     {
//         cin>>a[i];
//     }
//     for(i=N-1;i>=0;i--)
//     {
//     cout << a[i] << " ";
//     }
//     return 0;
// }

// passed test case code
// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// #define MAX 10000
// using namespace std;


// int main() {
//     int a[MAX], N,i;
//     cin>>N;
//     for(i=1;i<=N;i++)
//     {
//         cin>>a[i];
//     }
//     for(i=0;i<N;i++)
//     {
//         cout<<a[N-i]<<" ";
//     } 

//     return 0;
// }
// int main() {
//     int a[MAX], N,i;
//     cin>>N;
//     for(i=1;i<=N;i++)
//     {
//         cin>>a[i];
//     }
//     for(i=N-1;i>=0;i--)
//     {
//     cout << a[i] << " ";

//     }
//     return 0;
// }
