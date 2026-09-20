#include<iostream>
using namespace std;
int main()
{
// int row,col,n;
// cout<<"Input the number : ";
// cin>>n;

// for(row=1;row<=n;row=row+1)
// {
//   //space print
//   for(col=1;col<=n-row;col=col+1)
//   cout<<"  ";

//   //star print
//   for(col=1;col<=row;col=col+1)
//   {
//     cout<< "* ";
//   }

//   cout<<endl;
// } 

// int row,col,n;
// cout<<"Enter the number : ";
// cin>>n;
// for(row=1;row<=n;row=row+1)
// {
//    for(col=1;col<=n-row;col=col+1)
//    {
//       cout<<"  ";
//    }
//    for(col=1;col<=row;col=col+1)
//    {
//       cout<<row<<" ";
//    }

//    cout<<endl;
// }

// int row,col;
// for(row=1;row<=5;row=row+1)
// {
//   for(col=1;col<=5-row;col=col+1)
//   {
//      cout<<"  ";
//   }
//   for(col=1;col<=row;col=col+1){
//     cout<<col<<" ";
//   }

//   cout<<endl;
// }

// int row,col;
// for(row=1;row<=5;row=row+1)
// {
//    for(col=1;col<=5-row;col=col+1)
//    cout<<"  ";

//    for(char name='A';name<='A'+row-1;name=name+1)
//    {
//       cout<<name<<" ";
//    }

//    cout<<endl;
// }


int row,col;
for(row=1;row<=5;row=row+1){
    for(col=1;col<=5-row;col=col+1){
        cout<<"  ";

    }

    for(col=1;col<=5-(row-1);col=col-1){
        cout<<col<<" ";

    }

    cout<<endl;
}
}