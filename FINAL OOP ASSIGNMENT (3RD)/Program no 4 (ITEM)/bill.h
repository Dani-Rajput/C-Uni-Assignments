#include <iostream>
using namespace std;

class Bill
{
	private:
		int id;				//Unique id for bill
		int itemCount;		//No. of items in the bill
		Item *list;			//Array containing the items which are part of the bill
		double billAmount;	//Total amount of the bill ( which is calculated as the sum of the 
							//prices of all items present on that bill
		// Additions
		static int uid;

	public:
		Bill(){
			billAmount = 0;
			itemCount = 0;
			list = NULL;
			id = ++uid;
		}
		void computeAllBills(Bill *bills , int size);
		void computeOneBill(Bill &bill);

		// additional
		void setItems(Item *list);
		void setItemCount(int itemCount);
		void setBillAmount(double amount);
		double getBillAmount();
		int getItemsCount();
		Item* getItems();
		int getId();
};

void Bill::setItems(Item *list){ this-> list = list; }

void Bill::setItemCount(int itemCount){ this->itemCount = itemCount; }

int Bill::getId(){ return id; }

int Bill::getItemsCount(){ return itemCount; }

Item* Bill::getItems(){ return list; }

double Bill::getBillAmount(){ return billAmount; }

void Bill::setBillAmount(double amount){ billAmount = amount; }

void Bill::computeAllBills(Bill *bills,int size){
	for(int i = 0 ; i < size ; i++){
		computeOneBill(bills[i]);
	}
}

void Bill::computeOneBill(Bill &bill){

	// Temp Vars
	double temp;
	Item* tempList;
	int tempCount;

	// Assigning Data
	temp 	  = bill.getBillAmount();
	tempList  =  bill.getItems();
	tempCount =  bill.getItemsCount();

	// Computing Bill
	for(int i = 0 ; i < tempCount ; i++){
		temp += tempList[i].getPrice();
	}

	//Setting it to the object data memeber
	bill.setBillAmount(temp);

}