#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
 {
 	//THE SYSTEM WELCOMES YOU TO THE PAGE
 	cout<<"\n..........Welcome to Labi Brothers Enterprise..........\n"<<endl;
 	
 	//THE SYSTEM REQUEST FOR YOUR NAME AND ID
 	cout<<"      Please enter your name\n";
 	string name;
	 cin>>name;
 	
 	long int id;
 	cout<<"Please enter your ID number"<<endl;
 	cin>>id;
 	//THE SYSTEM REQUEST YOU WHAT YOU WANT TO DO AT THE PAGE
 	cout<<"    Hello  "<<name<<",    how may we help you ?\n"<<endl;
 	cout<<"  1.  Make Enquiries...........................This service is not available at the moment"<<endl;
 	cout<<"  2.  Purchase items"<<endl;
 	
	 
 	cout<<"    What do you want to do ?  option 1 Or 2 (Enter number only) "<<endl;
 	int option;
 	cin>> option;
 	
 	while(option!=2){
	 
 	cout<<"    The choice you entered is not available at the moment.  Enter option 2 to continue"<<endl;
	 cin>>option;}
 	
	 
 	cout<<"      Here are the items we sell \n "<<endl;
 	cout<<"      Item      |      price"<<endl;
 	cout<<"      ________________________"<<endl;
 	cout<<"1.    Phone          Ghc366.12"<<endl;
 	cout<<"2.    Printer        Ghc211.12"<<endl;
 	cout<<"3.    Table          Ghc10.15"<<endl;
 	
 	cout<<"     Enter your option. Example: 1   (numbers only)"<<endl;
 	int choice;
 	cin>>choice;
 	
 	//delare the quantiy of the item you want to buy
 	int quantity;
 	
	 //Declare item prices
 	int table= 10.15;
    int phone= 366.12;
    int printer= 211.10;
    
     //declare total cost of item without VAT 
 	double price_phone= phone * quantity;
 	double price_printer= printer * quantity;
    double price_table= table * quantity;

 	//DECLARE VAT
 	int const vat= 0.12;
 	
 	double vat1= (vat * price_phone);
 	double vat2= (vat * price_printer);
 	double vat3= (vat * price_table);
 	
    //declare amount paid and balace
    double money;
    double balance;
    
    // validating the user input
 	if(choice==1){
	 cout<<"how many table do you want to buy"<<endl;
	 cin>>quantity;
	 double total_tableAmount= vat*(table * quantity)+(table * quantity);
 	
 	cout <<"how much is in your account "<<endl;
 	cin>> money;
 	double balance= money-total_tableAmount;
 	
 	if (money>total_tableAmount){
 	cout<<"LARBI BROTHERS ENTERPRISE RECEIPT"<<endl;
	 cout<<"Name of the customer:  "<<name<<endl;
	 cout<<"The Unique ID:  "<<id<<endl;
	 cout<<"Item Bought:  Table"<<endl;
	 cout<<"Quantity Bought:  "<<quantity<<endl;
	 cout <<"VAT Amount :  Ghc"<<vat3<<endl;
	 cout<<" Total Cost:  Ghc"<<total_tableAmount<<endl;
	 cout<<"Total Amount Paid:  Ghc"<<money<<endl;
	 cout<<"Balace:  Ghc"<<balance<<endl;}

	 else
	 {
	 cout<<"Your money is toon small. Input higher amount"<<endl;
	 cin>>money;}
}
	 else if(choice==2){
	 	cout<<"how many phones do you want to buy"<<endl;
	     cin>>quantity;
	     
	     double total_phoneAmount=vat*(phone * quantity)+(phone * quantity);
	 	cout <<"how much is in your account "<<endl;
 	     cin>> money;
 	     double balance= money-total_phoneAmount;
 	
 	if (money>total_phoneAmount){
 	cout<<"LARBI BROTHERS ENTERPRISE RECEIPT"<<endl;
	 cout<<"Name of the customer:  "<<name<<endl;
	 cout<<"The Unique ID:  "<<id<<endl;
	
	 cout<<"Item Bought:  Phone"<<endl;
	 cout<<"Quantity Bought:  "<<quantity<<endl;
	 cout <<"VAT Amount :  Ghc"<<vat1<<endl;
	 cout<<" Total Cost:  Ghc"<<total_phoneAmount<<endl;
	 cout<<"Total Amount Paid:  Ghc"<<money<<endl;
	 cout<<"Balace:  Ghc"<<balance<<endl;	
		 }	
		  else
	 {
	 cout<<"Your money is toon small. Input higher amount"<<endl;
	 cin>>money;}
    
	}
	 	else if(choice== 3){
	 	cout<<"how many of  "<<choice<<"do you want to buy"<<endl;
	     cin>>quantity;
	     double total_printerAmount=vat*(printer * quantity)+(printer * quantity);
	 	cout <<"how much is in your account "<<endl;
 	     cin>> money;
 	     double balance= money-total_printerAmount;
 	
 	if (money>total_printerAmount){
 	cout<<"LARBI BROTHERS ENTERPRISE RECEIPT"<<endl;
	 cout<<"Name of the customer:  "<<name<<endl;
	 cout<<"The Unique ID:  "<<id<<endl;
	 cout<<"Item Bought:  Printer"<<endl;
	 cout<<"Quantity Bought:  "<<quantity<<endl;
	 cout <<"VAT Amount :  Ghc"<<vat3<<endl;
	 cout<<" Total Cost:  Ghc"<<total_printerAmount<<endl;
	 cout<<"Total Amount Paid:  Ghc"<<money<<endl;
	 cout<<"Balace:  Ghc"<<balance<<endl;	
	 		
		 }
		  else
	 {
	 cout<<"Your money is toon small. Input higher amount"<<endl;
	 cin>>money;}
    
	 }
	 else
 	{
	 cout<<"    The choice you entered is not available at the moment.  Enter 1 or 2 or 3 to continue"<<endl;
	 cin>>choice;}
 	 
	cout<<"Thank you for shopping with us" 	<<endl;

	return 0;
}

