#include <iostream>
using namespace std;

int main() {
int t,i;
cin>>t;
int a[t];
for(i=0;i<t;i++)
{
cin>>a[i];
}
int even=0,odd=0;
for(i=0;i<t;i++)
{
if(a[i]%2==0)
{
even++;
}
else
{
odd++;
}
}
if(even>odd)
{
cout<<"READY FOR BATTLE"<<endl;
}
else
{
cout<<"NOT READY"<<endl;
}

return 0;
}#include <iostream>
using namespace std;

int main() {
int t,i;
cin>>t;
int a[t];
for(i=0;i<t;i++)
{
cin>>a[i];
}
int even=0,odd=0;
for(i=0;i<t;i++)
{
if(a[i]%2==0)
{
even++;
}
else
{
odd++;
}
}
if(even>odd)
{
cout<<"READY FOR BATTLE"<<endl;
}
else
{
cout<<"NOT READY"<<endl;
}

return 0;
}