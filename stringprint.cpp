// passed case 1 code by own
#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    cin>>a>>b;
    cout<<a.size()<<" ";
    cout<<b.size()<<"\n";
    cout<<a+b<<"\n";
    int akeep=a[0];
    int bkeep=b[0];
    b[0]=akeep;
    a[0]=bkeep;
    cout<<a<<" "<<b;
    return 0;
}
// passed case from discussion 1
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     string a, b;
//     cin >> a >> b;
    
//     cout << a.length() << ' ' << b.length() << endl;
    
//     cout << a + b << endl;
    
//     swap( a[0], b[0] );
//     cout << a << ' ' <<  b << endl;
    
//     return 0;
// }