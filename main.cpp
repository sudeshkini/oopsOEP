#include<iostream>
#include<iomanip>


using namespace std;
int i=0;

class item
{
string name;
int count;
float price;
public:
friend void display(item o[]);
friend void buy(item o[]);
void getdata()
{
    cout<<"\nEnter the name of the item:";
    cin>>name;
    cout<<"\nEnter the count of the item:";
    cin>>count;
    cout<<"\nEnter the price of the item:";
    cin>>price;
}
    void update(item x,int y)
    {
x.count-=y;

    }



};
void display(item o[])
{
int j=0;
for(j=0;j<i;j++)
{
 cout<<o[j].name<<endl<<o[j].count<<endl<<o[j].price<<endl;

}


}
void buy(item o[])
{
   int j=0;
for(j=0;j<i;j++)
{
 cout<<o[j].name<<endl<<o[j].count<<endl<<o[j].price<<endl;

} 
int sel,k,bill=0;
cin>>sel;
while(sel!=-1)
{

cout<<o[sel].name<<"\nQunat:";
cin>>k;

bill=bill+o[sel].price*k;
cin>>sel;

}

cout<<bill<<endl;
}
int main()
{

item o[1000];
int choice;

while(1)
{
cout<<"\n1.Add\t2.Bill\t3.Exit\n";
cin>>choice;

switch(choice)
{
case 1:

o[i].getdata();
i++; 
    break;
case 2:
display(o);
break;
case 3:
buy(o);
break;


case 4:
exit(0);
default:
   cout<<"\nInvalid choice !!!\n";

}


}
    return 0;
}