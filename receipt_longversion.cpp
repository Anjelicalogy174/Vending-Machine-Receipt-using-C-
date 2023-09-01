#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;	

const double usdToPhp = 51.36;
const double price1= 0.061;
const double price2= 1.077;
const double price3= 0.333;
const double price4= 2.000;
const double price5= 5.600;
const double price6= 6.120;
const double price7= 3.000;
const double price8= 0.666;
const double price9= 6.666;
const double price10= 0.690;

int main ()

{
	int Anj1, Anj2, Anj3, Anj4, Anj5, Anj6, Anj7, Anj8, Anj9, Anj10, Anj11;
	int qtt1 = 0, qtt2 = 0, qtt3 = 0, qtt4 = 0, qtt5 = 0, qtt6 = 0, qtt7 = 0, qtt8 = 0, qtt9 = 0, qtt10 = 0;
	string type, name, address, tin, print;
	int item, qt, qtTotal, lengthName, lengthAddress, lengthTin;
	int costp1,costp2,costp3,costp4,costp5,costp6,costp7,costp8,costp9,costp10;
	double costusdd, costPhp, cashPhp, changePhp;
	
	info:
	cout << "___________________________________________________________" << endl;
	cout << endl;
	cout << "			A N J E L I C A" << endl;
	cout << "		Anjelica Duty Free Shop Inc." << endl;
	cout << "		Samson Group Of Companies" << endl;
	cout << "		Marikina City, Philippines" << endl;
	cout << "		Tel. # (063)123-4567/69" << endl;
	cout << "		REG. TIN: 002-123-456-789 NON-VAT" << endl;
	cout << "		SERIAL NO: 05AN18JU MA12TA34BA56" << endl;
	cout << "				POS#21				 " << endl;
	cout << "____________________________________________________________" << endl;
	cout << endl;
	cout << endl;
	cout<< "CUSTOMER NAME:  ";
	getline (cin, name);
	cout<< "CUSTOMER ADDRESS:  ";
	getline (cin, address);
	cout<< "CUSTOMER TIN:  ";
	getline (cin, tin);
	system("CLS");
	goto product;
	
	product:
	cout << "_____________________________________________________________" << endl;
	cout << endl;
	cout << "LIST OF PRODUCTS: " << endl;
	cout << "_____________________________________________________________" << endl;
	cout << "Product Code			Description			Price" << endl;
	cout << "444444		   "<< "Frostfire Annie			"	<<"	0.061" << endl;
	cout << "663001		   "<< "FrankenTibbers Annie	"	<<"			1.077" << endl;
	cout << "102901		   "<< "Miss Fortune			"	<<"		0.333" << endl;
	cout << "101078		   "<< "Star Guardian Syndra	"	<<"			2.000" << endl;
	cout << "101479		   "<< "Ghost Bride Morgana		"	<<"		5.600" << endl;
	cout << "456789		   "<< "Lunar Wraith Morgana	"	<<"			6.012" << endl;
	cout << "111907		   "<< "Sweetheart Annie		"	<<"		3.000" << endl;
	cout << "551816		   "<< "Sweetheart Sona			"	<<"	0.666" << endl;
	cout << "110403		   "<< "Elementalist Lux		"	<<"		6.006" << endl;
	cout << "678901		   "<< "Xayah					"	<<"0.069" << endl;
	cout << "_____________________________________________________________";
	cout << endl;
	cout << "Please enter the Product Code of the item: " << endl; 
	cin >> item;
	cout << endl;
	system("CLS");
	
	switch(item)
	{	
	case 444444:
			{
				Anj1:
				string choice;
				cout << "FrostFire Annie" << endl;
				cout << "Please enter the quantity: ";
				cin >> qt;
				if(qt <= 0)
				{
					cout << "ERROR!" << endl;
					cout << "TRY AGAIN!!!" << endl;
					cout << "Please restart the program." << endl;
					system("PAUSE");
					system("CLS");
					goto Anj1;
				}
				qtt1 = qtt1 + qt;
				back1:
				cout << "Would you like to enter another product code?: ";
				cin >> choice;
					if ((choice == "Yes")||(choice == "yes")||(choice == "YES")||(choice == "y")||(choice == "Y"))
						{
							system("CLS");
							goto product;
						}
						else if((choice == "No")||(choice == "no")||(choice == "NO")||(choice == "N")||(choice == "n"))
							{
								system("CLS");
								goto receipt;
							}
							else if((choice != "No")||(choice != "no")||(choice != "NO")||(choice != "N")||(choice != "n")||(choice != "Yes")||(choice != "yes")||(choice != "YES")||(choice != "y")||(choice != "Y"))
								{
									system("CLS");
									goto receipt;
								}
				system("CLS");
				break;
			}
			
			
		case 663001:
			{	Anj2:
				string choice;
				cout << "FrankenTibbers Annie" << endl;
				cout << "Please enter the quantity: ";
				cin >> qt;
				if(qt <= 0)
				{
					cout << "ERROR!" << endl;
					cout << "TRY AGAIN!!!" << endl;
					cout << "Please restart the program." << endl;
					system("PAUSE");
					system("CLS");
					goto Anj2;
				}
				qtt2 = qtt2 + qt;
				back2:
				cout << "Another Product? (YES/NO)(yes/no):  ";
				cin >> choice;
					if ((choice == "Yes")||(choice == "yes")||(choice == "YES")||(choice == "y")||(choice == "Y"))
						{
							system("CLS");
							goto product;
						}
						else if((choice == "No")||(choice == "no")||(choice == "NO")||(choice == "N")||(choice == "n"))
							{
								system("CLS");
								goto receipt;
							}
							else if((choice != "No")||(choice != "no")||(choice != "NO")||(choice != "N")||(choice != "n")||(choice != "Yes")||(choice != "yes")||(choice != "YES")||(choice != "y")||(choice != "Y"))
								{
									system("CLS");
									goto receipt;
								}
				system("CLS");
				break;
			
			}	
		
		
		case 102901:
			{
				Anj3:
				string choice;
				cout << "Miss Fortune" << endl;
				cout << "Please enter the quantity: ";
				cin >> qt;
				if(qt <= 0)
				{
					cout << "ERROR!" << endl;
					cout << "TRY AGAIN!!!" << endl;
					cout << "Please restart the program." << endl;
					system("PAUSE");
					system("CLS");
					goto Anj3;
				}
				qtt3 = qtt3 + qt;
				back3:
				cout << "Another Product? (YES/NO)(yes/no):  ";
				cin >> choice;
					if ((choice == "Yes")||(choice == "yes")||(choice == "YES")||(choice == "y")||(choice == "Y"))
						{
							system("CLS");
							goto product;
						}
						else if((choice == "No")||(choice == "no")||(choice == "NO")||(choice == "N")||(choice == "n"))
							{
								system("CLS");
								goto receipt;
							}
							else if((choice != "No")||(choice != "no")||(choice != "NO")||(choice != "N")||(choice != "n")||(choice != "Yes")||(choice != "yes")||(choice != "YES")||(choice != "y")||(choice != "Y"))
								{
									system("CLS");
									goto receipt;
								}			
				system("CLS");
				break;
			}
			
				case 101078:
			{
				Anj4:
				string choice;
				cout << "Star Guardian Syndra" << endl;
				cout << "Please enter the quantity: ";
				cin >> qt;
				if(qt <= 0)
				{
					cout << "ERROR!" << endl;
					cout << "TRY AGAIN!!!" << endl;
					cout << "Please restart the program." << endl;
					system("PAUSE");
					system("CLS");
					goto Anj4;

				}
				qtt4 = qtt4 + qt;
				back4:
				cout << "Another Product? (YES/NO)(yes/no):  ";
				cin >> choice;
					if ((choice == "Yes")||(choice == "yes")||(choice == "YES")||(choice == "y")||(choice == "Y"))
						{
							system("CLS");
							goto product;
						}
						else if((choice == "No")||(choice == "no")||(choice == "NO")||(choice == "N")||(choice == "n"))
							{
								system("CLS");
								goto receipt;
							}
							else if((choice != "No")||(choice != "no")||(choice != "NO")||(choice != "N")||(choice != "n")||(choice != "Yes")||(choice != "yes")||(choice != "YES")||(choice != "y")||(choice != "Y"))
								{
									system("CLS");
									goto receipt;
								}
				system("CLS");
				break;
			}
			
		case 101479:
			{
				Anj5:
				string choice;
				cout << "Ghost Bride Morgana" << endl;
				cout << "Please enter the quantity: ";
				cin >> qt;
				if(qt <= 0)
				{
					cout << "ERROR!" << endl;
					cout << "TRY AGAIN!!!" << endl;
					cout << "Please restart the program." << endl;
					system("PAUSE");
					system("CLS");
					goto Anj5;
				}
				qtt5 = qtt5 + qt;
				qtt5:
				cout << "Another Product? (YES/NO)(yes/no):  ";
				cin >> choice;
					if ((choice == "Yes")||(choice == "yes")||(choice == "YES")||(choice == "y")||(choice == "Y"))
						{
							system("CLS");
							goto product;
						}
						else if((choice == "No")||(choice == "no")||(choice == "NO")||(choice == "N")||(choice == "n"))
							{
								system("CLS");
								goto receipt;
							}
							else if((choice != "No")||(choice != "no")||(choice != "NO")||(choice != "N")||(choice != "n")||(choice != "Yes")||(choice != "yes")||(choice != "YES")||(choice != "y")||(choice != "Y"))
								{
									system("CLS");
									goto receipt;
								}
				system("CLS");
				break;
			}	
		
		case 456789:
			{
				Anj6:
				string choice;
				cout << "LunarWraith Morgana" << endl;
				cout << "Please enter the quantity: ";
				cin >> qt;
				if(qt <= 0)
				{
					cout << "ERROR!" << endl;
					cout << "TRY AGAIN!!!" << endl;
					cout << "Please restart the program." << endl;
					system("PAUSE");
					system("CLS");
					goto Anj6;
				}
				qtt6 = qtt6 + qt;
				back6:
				cout << "Another Product? (YES/NO)(yes/no):  ";
				cin >> choice;
					if ((choice == "Yes")||(choice == "yes")||(choice == "YES")||(choice == "y")||(choice == "Y"))
						{
							system("CLS");
							goto product;
						}
						else if((choice == "No")||(choice == "no")||(choice == "NO")||(choice == "N")||(choice == "n"))
							{
								system("CLS");
								goto receipt;
							}
							else if((choice != "No")||(choice != "no")||(choice != "NO")||(choice != "N")||(choice != "n")||(choice != "Yes")||(choice != "yes")||(choice != "YES")||(choice != "y")||(choice != "Y"))
								{
									system("CLS");
									goto receipt;
								}
				system("CLS");
				break;
			}
		
		case 865637:
			{
				Anj7:
				string choice;
				cout << "SweetHeart Annie" << endl;
				cout << "Please enter the quantity: ";
				cin >> qt;
				if(qt <= 0)
				{
					cout << "ERROR!" << endl;
					cout << "TRY AGAIN!!!" << endl;
					cout << "Please restart the program." << endl;
					system("PAUSE");
					system("CLS");
					goto Anj7;
				}
				qtt7 = qtt7 + qt;
				back7:
				cout << "Another Product? (YES/NO)(yes/no):  ";
				cin >> choice;
					if ((choice == "Yes")||(choice == "yes")||(choice == "YES")||(choice == "y")||(choice == "Y"))
						{
							system("CLS");
							goto product;
						}
						else if((choice == "No")||(choice == "no")||(choice == "NO")||(choice == "N")||(choice == "n"))
							{
								system("CLS");
								goto receipt;
							}
							else if((choice != "No")||(choice != "no")||(choice != "NO")||(choice != "N")||(choice != "n")||(choice != "Yes")||(choice != "yes")||(choice != "YES")||(choice != "y")||(choice != "Y"))
								{
									system("CLS");
									goto receipt;
								}
				system("CLS");
				break;
			}
		
		case 551816:
			{
				Anj8:
				string choice;
				cout << "Sweet Heart Sona" << endl;
				cout << "Please enter the quantity: ";
				cin >> qt;
				if(qt <= 0)
				{
					cout << "ERROR!" << endl;
					cout << "TRY AGAIN!!!" << endl;
					cout << "Please restart the program." << endl;
					system("PAUSE");
					system("CLS");
					goto Anj8;
				}
				qtt8 = qtt8 + qt;
				back8:
				cout << "Another Product? (YES/NO)(yes/no):  ";
				cin >> choice;
					if ((choice == "Yes")||(choice == "yes")||(choice == "YES")||(choice == "y")||(choice == "Y"))
						{
							system("CLS");
							goto product;
						}
						else if((choice == "No")||(choice == "no")||(choice == "NO")||(choice == "N")||(choice == "n"))
							{
								system("CLS");
								goto receipt;
							}
							else if((choice != "No")||(choice != "no")||(choice != "NO")||(choice != "N")||(choice != "n")||(choice != "Yes")||(choice != "yes")||(choice != "YES")||(choice != "y")||(choice != "Y"))
								{
									system("CLS");
									goto receipt;
								}
				system("CLS");
				break;
			}
		
		case 110403:
			{
				Anj9:
				string choice;
				cout << "Elementalist Lux" << endl;
				cout << "Please enter the quantity: ";
				cin >> qt;
				if(qt <= 0)
				{
					cout << "ERROR!" << endl;
					cout << "TRY AGAIN!!!" << endl;
					cout << "Please restart the program." << endl;
					system("PAUSE");
					system("CLS");
					goto Anj9;
				}
				qtt9= qtt9 + qt;
				back9:
				cout << "Another Product? (YES/NO)(yes/no):  ";
				cin >> choice;
					if ((choice == "Yes")||(choice == "yes")||(choice == "YES")||(choice == "y")||(choice == "Y"))
						{
							system("CLS");
							goto product;
						}
						else if((choice == "No")||(choice == "no")||(choice == "NO")||(choice == "N")||(choice == "n"))
							{
								system("CLS");
								goto receipt;
							}
							else if((choice != "No")||(choice != "no")||(choice != "NO")||(choice != "N")||(choice != "n")||(choice != "Yes")||(choice != "yes")||(choice != "YES")||(choice != "y")||(choice != "Y"))
								{
									system("CLS");
									goto receipt;
								}
				system("CLS");
				break;
			}
		
		case 678901:
			{
				Anj10:
				string choice;
				cout << "Xayah" << endl;
				cout << "Please enter the quantity: ";
				cin >> qt;
				if(qt <= 0)
				{
					cout << "ERROR!" << endl;
					cout << "TRY AGAIN!!!" << endl;
					cout << "Please restart the program." << endl;
					system("PAUSE");
					system("CLS");
					goto Anj10;
				}
				qtt10 = qtt10 + qt;
				back10:
					cout << "Another Product? (YES/NO)(yes/no):  ";
				cin >> choice;
					if ((choice == "Yes")||(choice == "yes")||(choice == "YES")||(choice == "y")||(choice == "Y"))
						{
							system("CLS");
							goto product;
						}
						else if((choice == "No")||(choice == "no")||(choice == "NO")||(choice == "N")||(choice == "n"))
							{
								system("CLS");
								goto receipt;
							}
							else if((choice != "No")||(choice != "no")||(choice != "NO")||(choice != "N")||(choice != "n")||(choice != "Yes")||(choice != "yes")||(choice != "YES")||(choice != "y")||(choice != "Y"))
								{
									system("CLS");
									goto receipt;
								}
				system("CLS");
				break;
			}
		
	default:
			{
				cout << "_	_____________________" << endl;
				cout << "Wrong value " << endl;
				cout << "Going to previous screen..." << endl;
				system("PAUSE");
				system("CLS");
				goto product;
				break;
			}	
	}
	receipt:
		
		{
			costp1 = qt * price1;
			costp2 = qt * price2;
			costp3 = qt * price3;
			costp4 = qt * price4;
			costp5 = qt * price5;
			costp6 = qt * price6;
			costp7 = qt * price7;
			costp8 = qt * price8;
			costp9 = qt * price9;
			costp10 = qt * price10;	
			costusdd = costp1 + costp2 + costp3 + costp4 + costp5 + costp6 + costp7 + costp8 + costp9 + costp10;
			costPhp = costusdd * usdToPhp;
	cout << "__________________________" << endl;
			cout << "Enter Customer Cash: " << endl;
			cout << "__________________________" << endl;
			cout << "Amount to be payed(in Php): " << costPhp << endl;
			cout << "Cash(in Php): ";
			cin >> cashPhp;
			system("CLS");
			
if(!(cashPhp >= costPhp))
				{
					cout << "_________________________________________________" << endl;
					cout << "Insufficient Balance to Purchase. ERROR! ERROR!" << endl;
					cout << "_________________________________________________" << endl;
					system("PAUSE");
					system("CLS");
					cout << "Returning to the cash input screen..." << endl;
					system("PAUSE");
					system("CLS");
					goto receipt;
				}
				else if(cashPhp >= costPhp)
						{
							cout << endl;
							cout << "<>Proceeding to your receipt....<>" << endl;
							cout << endl;
							system("PAUSE");
							system("CLS");
							goto cost;
						}	
			cout << endl;
	
	cost:	
		{
			qtTotal  = qtt1 + qtt2 + qtt3 + qtt4 + qtt5 + qtt6 + qtt7 + qtt8 + qtt9 + qtt10;
			changePhp = cashPhp - costPhp;
			cout << "|_____________________________________________________________________________|" << endl;
			cout << "|                                    ROYAL                                    |" << endl;
			cout << "|                          Royal Duty Free Shop Inc.                          |" << endl;
			cout << "|                           Bldg. 1109  Palm Street                           |" << endl;
			cout << "|                           Subic Bay Freeport Zone                           |" << endl;
			cout << "|                           Tel# (047)252 - 3258/59                           |" << endl;
			cout << "|                     REG TIN: 002 -924 -A12 -000 NON-VAT                     |" << endl;
			cout << "|                  SERIAL NO:  41K8840 MIN130329337 POS # 21                  |" << endl;
			cout << "|                                                                             |" << endl;
			cout << "|_____________________________________________________________________________|" << endl;
			cout << "|TYPE: REGULAR TRANSACTION                                                    |" << endl;
			cout << "|CUSTOMER NAME: " << name << " " << setw(62 - name.length()) << setfill(' ') << right << "|" << endl; 
			cout << "|CUSTOMER ADDRESS: " << address << " " << setw(59 - address.length()) << setfill(' ') << right << "|" << endl;
			cout << "|CUSTOMER TIN: " << tin << " " << setw(63 - tin.length()) << setfill(' ') << right << "|" << endl;
			cout << "|                                                                             |" << endl;
			cout << "|_____________________________________________________________________________|" << endl;
			cout << "|PRODUCT CODE       DESCRIPTION                             PRICE             |" << endl;	
			if((qtt1 > 0))
				{
					goto product1;
					
				}
				else if((qtt1 <= 0)&&(qtt2 > 0))
					{
						goto product2;
					}
					else if((qtt1 <= 0)&&(qtt2 <= 0)&&(qtt3 > 0))
						{
							goto product3;
						}
						else if((qtt1 <= 0)&&(qtt2 <= 0)&&(qtt3 <= 0)&&(qtt4 > 0))
							{
								goto product4;
							}
							else if((qtt1 <= 0)&&(qtt2 <= 0)&&(qtt3 <= 0)&&(qtt4 <= 0)&&(qtt5 > 0))
								{	
									goto product5;
								}
								else if((qtt1 <= 0)&&(qtt2 <= 0)&&(qtt3 <= 0)&&(qtt4 <= 0)&&(qtt5 <= 0)&&(qtt6 > 0))
									{
										goto product6;
									}
									else if((qtt1 <= 0)&&(qtt2 <= 0)&&(qtt3 <= 0)&&(qtt4 <= 0)&&(qtt5 <= 0)&&(qtt6 <= 0)&&(qtt7 > 0))
										{
											goto product7;
										}
										else if((qtt1 <= 0)&&(qtt2 <= 0)&&(qtt3 <= 0)&&(qtt4 <= 0)&&(qtt5 <= 0)&&(qtt6 <= 0)&&(qtt7 <= 0)&&(qtt8 > 0))
											{
												goto product8;
											}
											else if((qtt1 <= 0)&&(qtt2 <= 0)&&(qtt3 <= 0)&&(qtt4 <= 0)&&(qtt5 <= 0)&&(qtt6 <= 0)&&(qtt7 <= 0)&&(qtt8 <= 0)&&(qtt9 > 0))
												{
													goto product9;
												}
												else if((qtt1 <= 0)&&(qtt2 <= 0)&&(qtt3 <= 0)&&(qtt4 <= 0)&&(qtt5 <= 0)&&(qtt6 <= 0)&&(qtt7 <= 0)&&(qtt8 <= 0)&&(qtt9 <= 0)&&(qtt10 > 0))
													{
														goto product10;
													}		
					
					
					
					
			product1:
			{
				cout << "|444444             FrostFire Annie         " << showpoint << setprecision(3) << price1 << "$" << endl;
				cout << "|                   " << qtt1 << " EA @ " << price1 << "$" << endl;
			
				if(qtt2 > 0)
					{
						goto product2;
					}
					else if((qtt2 <= 0)&&(qtt3 > 0))
						{
							goto product3;
						}
						else if((qtt2 <= 0)&&(qtt3 <= 0)&&(qtt4 > 0))
							{
								goto product4;
							}
							
						else if((qtt2 <= 0)&&(qtt3 <= 0)&&(qtt4 <= 0)&&(qtt5 > 0))
								{	
									goto product5;
								}
								else if((qtt2 <= 0)&&(qtt3 <= 0)&&(qtt4 <= 0)&&(qtt5 <= 0)&&(qtt6 > 0))
									{
										goto product6;
									}
									else if((qtt2 <= 0)&&(qtt3 <= 0)&&(qtt4 <= 0)&&(qtt5 <= 0)&&(qtt6 <= 0)&&(qtt7 > 0))
										{
											goto product7;
										}
										else if((qtt2 <= 0)&&(qtt3 <= 0)&&(qtt4 <= 0)&&(qtt5 <= 0)&&(qtt6 <= 0)&&(qtt7 <= 0)&&(qtt8 > 0))
											{
												goto product8;
											}
											else if((qtt2 <= 0)&&(qtt3 <= 0)&&(qtt4 <= 0)&&(qtt5 <= 0)&&(qtt6 <= 0)&&(qtt7 <= 0)&&(qtt8 <= 0)&&(qtt9 > 0))
												{
													goto product9;
												}
												else if((qtt2 <= 0)&&(qtt3 <= 0)&&(qtt4 <= 0)&&(qtt5 <= 0)&&(qtt6 <= 0)&&(qtt7 <= 0)&&(qtt8 <= 0)&&(qtt9 <= 0)&&(qtt10 > 0))
													{
														goto product10;
													}
													else
														{
															goto change;
														}
													
			}
			product2:
			{
				cout << "|663001             FrankenTibbers Annie        " << showpoint << setprecision(3) << price2 << "$" << endl;
				cout << "|                   " << qtt2 << " EA @ " << price1 << "$" << endl;
			
				if((qtt1 > 0)&&(qtt2 > 0)&&(qtt3 > 0))
					{
						goto product3;
					}
			
					else if((qtt3 <= 0)&&(qtt4 > 0))
						{
							goto product4;
						}
						else if((qtt3 <= 0)&&(qtt4 <= 0)&&(qtt5 > 0))
								{	
									goto product5;
								}
								else if((qtt3 <= 0)&&(qtt4 <= 0)&&(qtt5 <= 0)&&(qtt6 > 0))
									{
										goto product6;
									}
									else if(((qtt3 <= 0)&&qtt4 <= 0)&&(qtt5 <= 0)&&(qtt6 <= 0)&&(qtt7 > 0))
										{
											goto product7;
										}
										else if((qtt3 <= 0)&&(qtt4 <= 0)&&(qtt5 <= 0)&&(qtt6 <= 0)&&(qtt7 <= 0)&&(qtt8 > 0))
											{
												goto product8;
											}
											else if((qtt3 <= 0)&&(qtt4 <= 0)&&(qtt5 <= 0)&&(qtt6 <= 0)&&(qtt7 <= 0)&&(qtt8 <= 0)&&(qtt9 > 0))
												{
													goto product9;
												}
												else if((qtt3 <= 0)&&(qtt4 <= 0)&&(qtt5 <= 0)&&(qtt6 <= 0)&&(qtt7 <= 0)&&(qtt8 <= 0)&&(qtt9 <= 0)&&(qtt10 > 0))
													{
														goto product10;
													}	
													else
														{
															goto change;
														}
														
			}
		
			product3:
			{
				cout << "|102901             Miss Fortune              " << showpoint << setprecision(3) << price3 << "$" << endl;
				cout << "|                   " << qtt3 << " EA @ " << price3 << "$"<< endl;
					if(qtt4 > 0)
							{
								goto product4;
							}
							else if((qtt4 <= 0)&&(qtt5 > 0))
								{	
									goto product5;
								}
								else if((qtt4 <= 0)&&(qtt5 <= 0)&&(qtt6 > 0))
									{
										goto product6;
									}
									else if((qtt4 <= 0)&&(qtt5 <= 0)&&(qtt6 <= 0)&&(qtt7 > 0))
										{
											goto product7;
										}
										else if((qtt4 <= 0)&&(qtt5 <= 0)&&(qtt6 <= 0)&&(qtt7 <= 0)&&(qtt8 > 0))
											{
												goto product8;
											}
											else if((qtt4 <= 0)&&(qtt5 <= 0)&&(qtt6 <= 0)&&(qtt7 <= 0)&&(qtt8 <= 0)&&(qtt9 > 0))
												{
													goto product9;
												}
												else if((qtt4 <= 0)&&(qtt5 <= 0)&&(qtt6 <= 0)&&(qtt7 <= 0)&&(qtt8 <= 0)&&(qtt9 <= 0)&&(qtt10 > 0))
													{
														goto product10;
													}	
													else
														{
															goto change;
														}
														
					
			}
			
				product4:
			{ 
				cout << "|101078             Star Guardian Syndra                        " << showpoint << setprecision(3) << price4 << "$" << endl;
				cout << "|                   " << qtt4 << " EA @ " << price4 << "$"<< endl;
						 if(qtt5 > 0)
								{	
									goto product5;
								}
								else if((qtt5 <= 0)&&(qtt6 > 0))
									{
										goto product6;
									}
									else if((qtt5 <= 0)&&(qtt6 <= 0)&&(qtt7 > 0))
										{
											goto product7;
										}
										else if((qtt5 <= 0)&&(qtt6 <= 0)&&(qtt7 <= 0)&&(qtt8 > 0))
											{
												goto product8;
											}
											else if((qtt5 <= 0)&&(qtt6 <= 0)&&(qtt7 <= 0)&&(qtt8 <= 0)&&(qtt9 > 0))
												{
													goto product9;
												}
												else if((qtt5 <= 0)&&(qtt6 <= 0)&&(qtt7 <= 0)&&(qtt8 <= 0)&&(qtt9 <= 0)&&(qtt10 > 0))
													{
														goto product10;
													}		
													else
														{
															goto change;
														}
													
					
			}
			
				product5:
			{
				cout << "|101479             GhostBride Morgana                    " << showpoint << setprecision(3) << price5 << "$" << endl;
				cout << "|                   " << qtt5 << " EA @ " << price5 << "$"<< endl;
							if((qtt6 > 0))
									{
										goto product6;
									}
									else if((qtt6 <= 0)&&(qtt7 > 0))
										{
											goto product7;
										}
										else if((qtt6 <= 0)&&(qtt7 <= 0)&&(qtt8 > 0))
											{
												goto product8;
											}
											else if((qtt6 <= 0)&&(qtt7 <= 0)&&(qtt8 <= 0)&&(qtt9 > 0))
												{
													goto product9;
												}
												else if((qtt6 <= 0)&&(qtt7 <= 0)&&(qtt8 <= 0)&&(qtt9 <= 0)&&(qtt10 > 0))
													{
														goto product10;
													}		
													else
														{
															goto change;
														}
													
			}
			
				product6:
			{
				cout << "|456789             Lunar Wraith Morgana                         " << showpoint << setprecision(3) << price6 << "$" << endl;
				cout << "|                   " << qtt6 << " EA @ " << price6 << "$"<< endl;
							if(qtt7 > 0)
										{
											goto product7;
										}
										else if((qtt7 <= 0)&&(qtt8 > 0))
											{
												goto product8;
											}
											else if((qtt7 <= 0)&&(qtt8 <= 0)&&(qtt9 > 0))
												{
													goto product9;
												}
												else if((qtt7 <= 0)&&(qtt8 <= 0)&&(qtt9 <= 0)&&(qtt10 > 0))
													{
														goto product10;
													}
													else
														{
															goto change;
														}
													
			}
			
				product7:
			{
				cout << "|111907             SweetHeart Annie                        " << showpoint << setprecision(3) << price7 << "$" << endl;
				cout << "|                   " << qtt7 << " EA @ " << price7 << "$"<< endl;
									if(qtt8 > 0)
											{
												goto product8;
											}
											else if((qtt8 <= 0)&&(qtt9 > 0))
												{
													goto product9;
												}
												else if((qtt8 <= 0)&&(qtt9 <= 0)&&(qtt10 > 0))
													{
														goto product10;
													}
													else
														{
															goto change;
														}
													
			}
			
				product8:
			{
				cout << "|551816             SweetHeart Sona                        " << showpoint << setprecision(3) << price8 << "$" << endl;
				cout << "|                   " << qtt8 << " EA @ " << price8 << "$"<< endl;
										if(qtt9 > 0)
												{
													goto product9;
												}
												else if((qtt9 <= 0)&&(qtt10 > 0))
													{
														goto product10;
													}		
													else
														{
															goto change;
														}
													
			}
			
				product9:
			{
				cout << "|110403             Elementalist Lux                " << showpoint << setprecision(3) << price9 << "$" << endl;
				cout << "|                   " << qtt9 << " EA @ " << price9 << "$"<< endl;
											if(qtt10 > 0)
												{
													goto product10;
												}
			}
			
				product10:
			{
				cout << "|678901             Xayah                     " << showpoint << setprecision(3) << price10 << "$" << endl;
				cout << "|                   " << qtt10 << " EA @ " << price10 << "$"<< endl;
				goto change;
			}
			
			
				
			change:
			cout << "|_____________________________________________________________________________|" << endl;
			cout << "|                                                                             |" << endl;
			cout << "|TOTAL(USD 51.36)                                           " << showpoint << setprecision(5) << costusdd << "$"<< endl;
			cout << "|TOTAL(PHP)                                                 " << showpoint << setprecision(5) << costPhp << "Php" << endl;
			cout << "|CASH(PHP)                                                  " << showpoint << setprecision(5) << cashPhp << "Php" << endl; 
			cout << "|CHANGE(PHP)                                                " << showpoint << setprecision(5) << changePhp << "Php" << endl;
			cout << "|_____________________________________________________________________________|" << endl;
			cout << "|                                                                             |" << endl;
			cout << "|PRODUCT COUNTER:                                             " << " 3" << endl;
			cout << "|PRODUCT QUANTITY:                                             " << qtTotal << endl;
			cout << "|_____________________________________________________________________________|" << endl;
			cout << "|                                                                             |" << endl;
			cout << "|              THIS SERVES AS YOUR OFFICIAL RECEIPT. THANK YOU!               |" << endl;
			cout << "|                              Please Come Again.                             |" << endl;
			cout << "|                                                                             |" << endl;
			cout << "|      CASHIER: ARLENE JOY RELATOS                                            |" << endl;
			cout << "|      DATE: 08-20-2037            13:17                                      |" << endl;
			cout << "|      TRANSACTION: 239908                                                    |" << endl;
			cout << "|      S.I. NUMBER: 232768                                                    |" << endl;
			cout << "|_____________________________________________________________________________|" << endl;
			cout << "|                                                                             |" << endl;
			
			exit:
			string print;
			
			cout << "<><><><><><><><><><><><><><><><><><><><><><><><><>" << endl;
			cout << "<>WOULD YOU LIKE TO PRINT THIS RECEIPT?         <>" << endl;
			cout << "<><><><><><><><><><><><><><><><><><><><><><><><><>" << endl;
			cin >> print;
				if ((print == "Yes")||(print == "yes")||(print == "YES")||(print == "y")||(print == "Y"))
						{
							system("CLS");
							goto holocaust;
						}
						else if((print == "No")||(print == "no")||(print == "NO")||(print == "N")||(print	 == "n"))
							{
								system("CLS");
								goto exit1;
							}
							else if((print != "No")||(print != "no")||(print != "NO")||(print != "N")||(print != "n")||(print != "Yes")||(print != "yes")||(print != "YES")||(print != "y")||(print != "Y"))
								{
									system("CLS");
									goto exit;
								}
			exit1:
				{
			string repeat;
			cout << "<><><><><><><><><><><><><><><><><><><><><><><><><>" << endl;
			cout << "<>WOULD YOU LIKE TO PROCESS ANOTHER TRANSACTION?<>" << endl;
			cout << "<><><><><><><><><><><><><><><><><><><><><><><><><>" << endl;
			cin >> repeat;
			if ((repeat == "Yes")||(repeat == "yes")||(repeat == "YES")||(repeat == "y")||(repeat == "Y"))
						{
							system("CLS");
							goto info;
						}
						else if((repeat == "No")||(repeat == "no")||(repeat == "NO")||(repeat == "N")||(repeat == "n"))
							{
								system("CLS");
								return 0;
							}
							else if((repeat != "No")||(repeat != "no")||(repeat != "NO")||(repeat != "N")||(repeat != "n")||(repeat != "Yes")||(repeat != "yes")||(repeat != "YES")||(repeat != "y")||(repeat != "Y"))
								{
									system("CLS");
									goto exit1;
								}
				}
			
		}
		
		holocaust:
		{
			ofstream outFile;
			outFile.open("resibo ni anje.txt");
					qtTotal = qtt1 + qtt2 + qtt3;
					changePhp = cashPhp - costPhp;
					cout << "___________________________________________________________" << endl;
					cout << endl;
					cout << "			A N J E L I C A" << endl;
					cout << "		Anjelica Duty Free Shop Inc." << endl;
					outFile << "		Samson Group Of Companies" << endl;
					outFile << "		Marikina City, Philippines" << endl;
					outFile << "		Tel. # (063)123-4567/69" << endl;
					outFile << "		REG. TIN: 002-123-456-789 NON-VAT" << endl;
					outFile << "		SERIAL NO: 05AN18JU MA12TA34BA56" << endl;
					outFile << "				POS#21				 " << endl;
					outFile << "____________________________________________________________" << endl;
					outFile << endl;
					outFile << endl;					outFile<< "|TYPE: REGULAR TRANSACTION                                                    |" << endl;
					outFile<< "|CUSTOMER NAME: " << name << " " << setw(62 - name.length()) << setfill(' ') << right << "|" << endl; 
					outFile<< "|CUSTOMER ADDRESS: " << address << " " << setw(59 - address.length()) << setfill(' ') << right << "|" << endl;
					outFile<< "|CUSTOMER TIN: " << tin << " " << setw(63 - tin.length()) << setfill(' ') << right << "|" << endl;
					outFile<< "|                                                                             |" << endl;
					outFile<< "|_____________________________________________________________________________|" << endl;
					outFile<< "|PRODUCT CODE       DESCRIPTION                             PRICE             |" << endl;	
					if(qtt1 > 0)
						{
			
						outFile<< "|444444             Frostfire Annie        " << showpoint << setprecision(3) << price1 << "$" << endl;
						outFile<< "|                   " << qtt1 << " EA @ " << price1 << "$" << endl;
						}
						if(qtt2 > 0)
							{
								outFile<< "|663001             Franken Tibbers Annie        " << showpoint << setprecision(3) << price2 << "$" << endl;
								outFile<< "|                   " << qtt2 << " EA @ " << price2 << "$" << endl;
							}
			
							if(qtt3 > 0)
								{
									outFile<< "|102901			Miss Fortune             " << showpoint << setprecision(3) << price3 << "$" << endl;
									outFile<< "|                   " << qtt3 << " EA @ " << price3 << "$"<< endl;
								}
			
								if(qtt4 > 0)
									{
										outFile << "|101078             Star Guardian Syndra                        " << showpoint << setprecision(3) << price4 << "$" << endl;
										outFile << "|                   " << qtt4 << " EA @ " << price4 << "$"<< endl;
									}
				
									if(qtt5 > 0)
										{
											outFile << "|101479             Ghost Bride Morgana                    " << showpoint << setprecision(3) << price5 << "$" << endl;
											outFile << "|                   " << qtt5 << " EA @ " << price5 << "$"<< endl;
										}
				
										if(qtt6 > 0)
											{
												outFile << "|456789             Lunar Wraith Morgana                        " << showpoint << setprecision(3) << price6 << "$" << endl;
												outFile << "|                   " << qtt6 << " EA @ " << price6 << "$"<< endl;
											}
				
											if(qtt7 > 0)
												{
													outFile << "|111907             SweetHeart Annie                      " << showpoint << setprecision(3) << price7 << "$" << endl;
													outFile << "|                   " << qtt7 << " EA @ " << price7 << "$"<< endl;
												}
				
												if(qtt8 > 0)
													{
														outFile << "|551816             SweetHeart Sona                       " << showpoint << setprecision(3) << price8 << "$" << endl;
														outFile << "|                   " << qtt8 << " EA @ " << price8 << "$"<< endl;
													}
				
													if(qtt9 > 0)
														{
															outFile << "|110403             Elementalist Lux               " << showpoint << setprecision(3) << price9 << "$" << endl;
															outFile << "|                   " << qtt9 << " EA @ " << price9 << "$"<< endl;
														}
				
														if(qtt10 > 0)
															{
																outFile << "|678901             Xayah                    " << showpoint << setprecision(3) << price10 << "$" << endl;
																outFile << "|                   " << qtt10 << " EA @ " << price10 << "$"<< endl;
															}
			qtTotal = qtt1 + qtt2 + qtt3 + qtt4 + qtt5 + qtt6 + qtt7 + qtt8 + qtt9 + qtt10;	
			outFile<< "|_____________________________________________________________________________|" << endl;
			outFile<< "|                                                                             |" << endl;
			outFile<< "|TOTAL(USD 51.36)                                           " << showpoint << setprecision(4) << costusdd << "$"<< endl;
			outFile<< "|TOTAL(PHP)                                                 " << showpoint << setprecision(5) << costPhp << "Php" << endl;
			outFile<< "|CASH(PHP)                                                  " << showpoint << setprecision(5) << cashPhp << "Php" << endl; 
			outFile<< "|CHANGE(PHP)                                                " << showpoint << setprecision(5) << changePhp << "Php" << endl;
			outFile<< "|_____________________________________________________________________________|" << endl;
			outFile<< "|                                                                             |" << endl;
			outFile<< "|PRODUCT COUNTER:                                             " << " 3" << endl;
			outFile<< "|PRODUCT QUANTITY:                                             " << qtTotal << endl;
			outFile<< "|_____________________________________________________________________________|" << endl;
			outFile<< "|                                                                             |" << endl;
			outFile<< "|              THIS SERVES AS YOUR OFFICIAL RECEIPT. THANK YOU!               |" << endl;
			outFile<< "|                              Please Come Again.                             |" << endl;
			outFile<< "|                                                                             |" << endl;
			outFile<< "|      CASHIER: ARLENE JOY RELATOS                                            |" << endl;
			outFile<< "|      DATE: 08-20-2037            13:17                                      |" << endl;
			outFile<< "|      TRANSACTION: 239908                                                    |" << endl;
			outFile<< "|      S.I. NUMBER: 232768                                                    |" << endl;
			outFile<< "|_____________________________________________________________________________|" << endl;
			outFile<< "|                                                                             |" << endl;
				

			outFile.close();
			system("CLS");
			goto exit2;
			
			exit2:
			{
			string repeat;
			cout << "PROCESS ANOTHER TRANSACTION?" << endl;
			cin >> repeat;
			if ((repeat == "Yes")||(repeat == "yes")||(repeat == "YES")||(repeat == "y")||(repeat == "Y"))
						{
							system("CLS");
							goto info;
						}
						
						else if((repeat != "No")||(repeat != "no")||(repeat != "NO")||(repeat != "N")||(repeat != "n")||(repeat != "Yes")||(repeat != "yes")||(repeat != "YES")||(repeat != "y")||(repeat != "Y"))
								{
									return 0;
								}
			}
			
	
		}	
	
	}
	return 0;
}	
	
	