#include <iostream.h>
#include <conio.h>
void main()
{
    int n,i,f=1;
    clrscr();
    cout<<"Enter a number:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    cout<<"Factorial = "<<f;
    getch();
}