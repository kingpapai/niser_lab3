#include <iostream>
using namespace std;

int main()
{
  char ch;
  cout<<"Program to print alphabets from a to z";
  ch='a';
  cout<<"\n \nThe alphabets from a to z are: ";
  while(ch<='z')
  {
    cout<<"\n"<<ch;
    ++ch;
  }
  return 0;
}

