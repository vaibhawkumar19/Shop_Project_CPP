/*5. Write a C++ program to define a base class Item (item-no, name, price).
Derive a class Discounted-Item (discount-percent). A customer purchases
'n' items. Display the item-wise bill and total amount using appropriate
format.*/
#include<iostream>
using namespace std;
class ItemDetails
{
	public:
		int item_no;
		char item_name[30];
		double item_price;
	
};
class DiscountedItem:public ItemDetails
{
	public:
		int Discounted_persentage;
		int Discount_price;
		void accept_details()
		{
			cout<<"enter the name:-\n";
			cin>>item_name;
			cout<<"enter the item_no:-\n";
			cin>>item_no;
			cout<<"enter price of item:-\n";
			cin>>item_price;
			cout<<"enter discount:-\n";
			cin>>Discounted_persentage;
			cout<<"______________________\n";
			Discount_price=item_price-item_price*Discounted_persentage/100;
		}
		void display_details()
		{
			cout<<"\nname:- "<<item_name;
			cout<<"\nitem_no:-"<<item_no;
			cout<<"\nprice:-"<<item_price;
			cout<<"\nDiscounted_persentage:-"<<Discounted_persentage;
			cout<<"\nDiscounted_price:-"<<Discount_price;
			cout<<"\n______________________\n";
		}
};
int main()
{
	int i,count,discount=0,price=0;
	DiscountedItem d[100];
	cout<<"\nhow many item you have to enter?:-";
	cin>>count;
	for(i=0;i<count;i++)
	{
		d[i].accept_details();
	}
	for(i=0;i<count;i++)
	{
		d[i].display_details();
	}
	for(i=0;i<count;i++)
	{
		price=price + d[i].item_price;
	}
	for(i=0;i<count;i++)
	{ 
		discount=discount+d[i].item_price - d[i].Discount_price;
	}
	cout<<"\ntotal price:-"<<price;
	cout<<"\ntotal discount:-"<<discount;
	cout<<"\n total payable amount:-"<<price-discount;
return 0;
}


