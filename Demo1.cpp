#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
   char ch;
   cout<<"Enter a Character"<<endl;
   cin>>ch;
   if(ch>='A' && ch<='Z'){
    cout<<ch<<" is a UpperCase Letter";
   }
   else if (ch>='a' && ch<='z')
   {
    cout<<ch<<" is a LowerCase Letter";
   }
   else{
    cout<<ch<<" is a not letter"<<endl;
   }
   
   getch();
   return 0;
}