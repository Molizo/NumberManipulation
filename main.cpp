#include <iostream>
#include <windows.h>

using namespace std;

int main()
{int n,s,x,a;
    cout << "Introduceti numarul:";
    cin>>n;
    x=1;
    s=0;
    a=1;
    while(x<=n)
    {
        s=s+a;
        x=x+1;
        a=a+6;
    }
    cout<<endl<<endl<<"Rezultatul este:"<<s<<endl<<endl;
    Sleep(5000);
    return 0;
}
