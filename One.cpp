#include <iostream>
using namespace std;

void functionA(int num);
void functionB(int newnumbers[]);
void functionC(int newnumbers[]);

int main()
{
    int numbers[10]={1,2,3,4,5,6,7,8,9,10};
    int i,j=0,k=0;
    
    for(i=0;i<10;i++)
        functionA(numbers[i]);//passing individual elements
    
    cout<<"\n\n";
    functionB(numbers); //passing the whole array
    functionC(numbers); //passing the whole array
    
    cout<<"\n\n";
    return 0;
}

void functionA(int num)
{
    cout<<num<<" ";
}

void functionB(int newnumbers[])
{
    for(int i=0;i<10;i++)
        newnumbers[i]=newnumbers[i]*5;
}

void functionC(int newnumbers[])
{
    for(int i=0;i<10;i++)
        cout<<newnumbers[i]<<" ";
}
