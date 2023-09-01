//Vending Machine Program
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	double CocaCola = 2.45;
	double chocolates = 3.25;
	double bag = 4.10;
	
	string productDesc_coke = "Coca-Cola";
	int productQty_coke = 0;
    string productDesc_rootbeer = "Root Beer";
	int productQty_rootbeer = 0;
    string productDesc_sprite = "Sprite";
	int productQty_sprite = 0;		
			
	int productQty_all = 0;
	
	char orderProdCode = 'a';
	int orderProdQty = 0;
	double orderProdPrice = 0;
	double orderProdBillInDollar = 0;
	
	double orderProdBillInPeso = 0;
	double orderProdPaymentInPeso = 0;
    double orderProdPaymentChangeInPeso = 0;
	
    double phDollarInPesoConversion = 51.36;
    
	bool continueBuying = true;
	char custResponse = 'y';
    bool correctPayment = true;
    
	//VENDO MACHINE MAIN MENU
	cout << "\n________________________________\n";
	cout << "|                              |\n";
	cout << "|     WELCOME TO DUTY FREE!    |\n";
	cout << "|                              |\n";
    cout << "| Code   Item          Price   |\n";   
	cout << "| [a]    Coca-Cola     $ 1.50  |\n";
	cout << "| [b]    Root Beer     $ 2.50  |\n";
	cout << "| [c]    Sprite        $ 3.50  |\n";
	cout << "|                              |\n";
	cout << "|______________________________|";	
		
	//START: VENDO MACHINE LOGIC		
	do{
		cout << "\n > Please choose a beverage:  ";
		
		cin >> orderProdCode;
		
		switch(orderProdCode){
			case 'a': case 'A':
				orderProdPrice =  1.50; 
				break;
			case 'b': case 'B': 
				orderProdPrice =  2.50; 
				break;
			case 'c': case 'C': 
				orderProdPrice =  3.50; 
				break;
			default: 
				orderProdPrice = 0; 
				break;
		}

		cout << "\n > How many?:  ";
		cin >> orderProdQty;

		switch(orderProdCode){
			case 'a': case 'A':
					productQty_coke += orderProdQty;
				break;
			case 'b': case 'B': 
				productQty_rootbeer += orderProdQty;
				break;
			case 'c': case 'C': 
				productQty_sprite += orderProdQty;
				break;
			default: break;
		}
		
		productQty_all += orderProdQty;
		
		orderProdBillInDollar += orderProdPrice * orderProdQty; //orderProdBill = orderProdBill + orderProdPrice * orderProdQty;
	
		cout << "\n > Your bill in Dollar: USD " << orderProdBillInDollar;
	
		orderProdBillInPeso = orderProdBillInDollar * phDollarInPesoConversion;
		
		cout << "\n > Your bill in Peso: PHP " <<  orderProdBillInPeso;

		cout << "\n\n > Would you like to order other beverages? [y/n]:  ";
		
		cin >> custResponse;
		
		
		PAYMENT: 
		switch(custResponse){
			case 'y': case 'Y': 
				continueBuying = true;  
				break;
			case 'n': case 'N': 
				cout << "\n > Enter your payment:  ";
				cin >> orderProdPaymentInPeso;
				
				if(orderProdPaymentInPeso >= orderProdBillInPeso){
					orderProdPaymentChangeInPeso = orderProdPaymentInPeso - orderProdBillInPeso;
					correctPayment = true;
					continueBuying = false; 
					break;
				} else {
					continueBuying = true; 
					correctPayment = false;
					break;
				}
			default: continueBuying = false; break;
		}
		
		if(correctPayment == false){
			goto PAYMENT;
		}
		
	}	while (continueBuying);
	//END: VENDO MACHINE LOGIC





	//START: DISPLAY RESIBO IN UI
	if(productQty_all>0){
	   	cout << "\n________________________________\n";
		cout << "|                                |\n";
		cout << "|          YOUR RECEIPT          |\n";
		cout << "|                                |\n";
	    cout << "_________________________________\n";
	   
	   if(productQty_coke>0){
			cout << "\n > Product Description: " << productDesc_coke;	
			cout << "\n > Product Quantity: " << productQty_coke;	
	   }
	
	   if(productQty_rootbeer>0){
			cout << "\n > Product Description: " << productDesc_rootbeer;	
			cout << "\n > Product Quantity: " << productQty_rootbeer;	
	   }
	   
	   if(productQty_sprite>0){
			cout << "\n > Product Description: " << productDesc_sprite;	
			cout << "\n > Product Quantity: " << productQty_sprite;	
	   }
	
		cout << "\n > Total: " << productQty_all;
	}
	
	cout << "\n > Your Bill (USD)      : " << orderProdBillInDollar;	
	cout << "\n > Your Bill (Pesos)    : " << orderProdBillInPeso;	
	cout << "\n > Your Payment (Pesos) : " << orderProdPaymentInPeso;	
	cout << "\n > Your Change (Pesos)  : " << orderProdPaymentChangeInPeso;	
 	//END: DISPLAY RESIBO IN UI
 
 
 
 
    //START : END OF PRINTING RESIBO
	ofstream myfile;
	myfile.open ("VendoReceipt.txt");

	if(productQty_all>0){
   		myfile << "\n________________________________\n";
		myfile << "|                                |\n";
		myfile << "|          YOUR RECEIPT          |\n";
		myfile << "|                                |\n";
		myfile << "_________________________________\n";
	   
	   if(productQty_coke>0){
			myfile << "\n > Product Description: " << productDesc_coke;	
			myfile << "\n > Product Quantity: " << productQty_coke;	
	   }
	
	   if(productQty_rootbeer>0){
			myfile << "\n > Product Description: " << productDesc_rootbeer;	
			myfile << "\n > Product Quantity: " << productQty_rootbeer;	
	   }
	   
	   if(productQty_sprite>0){
			myfile << "\n > Product Description: " << productDesc_sprite;	
			myfile << "\n > Product Quantity: " << productQty_sprite;	
	   }
	
		myfile << "\n > Total: " << productQty_all;
	}
	
	myfile << "\n > Your Bill (USD)      : " << orderProdBillInDollar;	
	myfile << "\n > Your Bill (Pesos)    : " << orderProdBillInPeso;	
	myfile << "\n > Your Payment (Pesos) : " << orderProdPaymentInPeso;	
	myfile << "\n > Your Change (Pesos)  : " << orderProdPaymentChangeInPeso;	
 
	myfile.close();
	//END : END OF PRINTING RESIBO


	cin.ignore();
	cin.get();
	return 0;
} 
//END OF PROGRAM