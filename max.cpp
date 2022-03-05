// passed case code 1
#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int p,int q,int r, int s)
{
    if((p>q)&&(p>r)&&(p>s))
  {
    cout<<p;
  }
  else
    {
        if ((q>r) && (q>s))
        {
            cout<<q;
;
        }
        else
        {
            if (r>s)
            {
            cout<<r;
            }
            else
            {
            cout<<s;

            }
        }
    }
    return 0;
}


int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    max_of_four(a, b, c, d);
    return 0;
}
// passed case code 2
// #include <iostream>
// #include <cstdio>
// using namespace std;

// /*
// Add `int max_of_four(int a, int b, int c, int d)` here.
// */
// int max_of_four(int p,int q,int r, int s)
// {
//     if((p>q)&&(p>r)&&(p>s))
//   {
//     cout<<p;
//   }
//   else
//     {
//         if ((q>r) && (q>s))
//         {
//             cout<<q;
// ;
//         }
//         else
//         {
//             if (r>s)
//             {
//             cout<<r;
//             }
//             else
//             {
//             cout<<s;

//             }
//         }
//     }
//     return 0;
// }


// int main() {
//     int a, b, c, d,ans;
//     cin>>a>>b>>c>>d;
//     ans=max_of_four(a, b, c, d);
    
//     return ans;
// }
// passed case code 3 
// #include <iostream>
// #include <cstdio>
// using namespace std;


// int max_of_four(int a, int b, int c, int d)
//  {
//     if(a>b && a>c && a>d)
//   return a;
// else if(b>a && b>c && b>d)
// return b;
// else if(c>a && c>b && c>d)
//  return c;
// else
//  return d;
// }


// int main() {
//     int a, b, c, d;
//     cin>>a>>b>>c>>d;
//     int ans = max_of_four(a, b, c, d);
//     cout<<ans;
    
//     return 0;
// }
// failed case
// #include <iostream>
// #include <cstdio>
// using namespace std;

// /*
// Add `int max_of_four(int a, int b, int c, int d)` here.
// */
// int max_of_four(int p,int q,int r, int s)
// {
//     if((p>q)&&(p>r)&&(p>s))
//   {
//     cout<<p;
//   }
//   else
//     {
//         if ((q>r) && (q>s))
//         {
//             cout<<q;
// ;
//         }
//         else
//         {
//             if (r>s)
//             {
//             cout<<r;
//             }
//             else
//             {
//             cout<<s;

//             }
//         }
//     }
//     return 0;
// }


// int main() {
//     int a, b, c, d;
//     cin>>a>>b>>c>>d;
//     int ans = max_of_four(a, b, c, d);
//     cout<<ans;
//     return 0;
// }