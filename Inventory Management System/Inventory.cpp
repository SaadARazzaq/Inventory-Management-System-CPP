#include<iostream>
#include<string>
#include<fstream>
#include<Windows.h>
#include<stdlib.h>
#include<ctime>
#include"Inventory.h"
using namespace std;
void admin_module::Add_shopkeeper() {

	s_id = s_id + 1;
	cout << "please Enter your First Name" << endl;
	cin >> S_first_name;
	cout << "please Enter the your Last Name" << endl;
	cin >> S_last_name;
	cout << "Your Shopkeeper  ID is" << s_id << endl;
	cout << "please Enter your Username" << endl;
	cin >> S_username;
	cout << "please Enter your Email" << endl;
	cin >> S_email;
	cout << "please Enter your password" << endl;
	cin >> S_password;
	cout << "please Enter the Regesteration Date" << endl;
	cin >> S_regdate;
	cout << "please Enter your Gender" << endl;
	cin >> S_gender;
	cout << "please Enter your Blood Group " << endl;
	cin >> S_blood_group;
	cout << "please Enter your Contact Number" << endl;
	cin >> S_contact;
	cout << "please Enter the Address" << endl;
	cin >> S_address;


	ofstream fin1;
	fin1.open("shopkeeper.txt", ios::app);
	if (fin1.fail())
	{
		cout << "Input file opening failed.\n";

	}
	else
		//fin1 << endl;
		fin1 << s_id << endl;
	fin1 << S_first_name << endl;
	fin1 << S_last_name << endl;
	fin1 << S_username << endl;
	fin1 << S_email << endl;
	fin1 << S_password << endl;
	fin1 << S_regdate << endl;
	fin1 << S_gender << endl;
	fin1 << S_blood_group << endl;
	fin1 << S_contact << endl;
	fin1 << S_address << endl;
	fin1.close();
}
void admin_module::addcustomer() {
	C_id = C_id + 1;
	cout << "please Enter your First Name" << endl;
	cin >> C_first_name;
	cout << "please Enter the your Last Name" << endl;
	cin >> C_last_name;
	cout << "Your customer Id is " << C_id << endl;
	cout << "please Enter the Regesteration Date" << endl;
	cin >> C_regdate;
	cout << "please Enter your Gender" << endl;
	cin >> C_gender;
	cout << "please Enter your Blood Group " << endl;
	cin >> C_blood_group;
	cout << "please Enter your Contact Number" << endl;
	cin >> C_contact;
	cout << "please Enter the Address" << endl;
	cin >> C_address;
	cout << "1. Sports\n"
		"2. Garments\n"
		"3. Eatables\n"
		"4. Medicines\n"
		"5. Fashion\n";
	cout << "please Enter the product Catogoty" << endl;
	cin >> C_catgory;
	cout << "please Enter the the bill status " << endl;
	cin >> C_bill_status;

	ofstream fin;
	fin.open("customer.txt", ios::app);
	if (fin.fail())
	{
		cout << "Input file opening failed.\n";

	}
	else
		//fin << endl;
		fin << C_id << endl;
	fin << C_first_name << endl;
	fin << C_last_name << endl;
	fin << C_regdate << endl;
	fin << C_gender << endl;
	fin << C_blood_group << endl;
	fin << C_contact << endl;
	fin << C_address << endl;
	fin << C_catgory << endl;
	fin << C_bill_status << endl;
	fin.close();
}
void admin_module::addproduct() {
	product_id= product_id + 1;
	cout << "please Enter product Name" << endl;
	cin >> P_name;
	cout << "1. Sports\n"
		"2. Garments\n"
		"3. Eatables\n"
		"4. Medicines\n"
		"5. Fashion\n";
	cout << "please Select Catogory of the product" << endl;
	cin >> P_catogory;
	cout << "Your product  Id is " << product_id << endl;
	cout << "please Enter the product Discription" << endl;
	cin >> P_discription;
	cout << "please product Quantity" << endl;
	cin >> P_quantity;

	ofstream fin;
	fin.open("product.txt", ios::app);
	if (fin.fail())
	{
		cout << "Input file opening failed.\n";

	}
	else
		//fin << endl;
		fin << product_id << endl;
	fin << P_name << endl;
	fin << P_catogory<< endl;
	fin << P_discription<< endl;
	fin << P_quantity << endl;
	fin.close();
}
void admin_module::edit_customer() {
	ifstream fin;
	ofstream fout;
	int idcheck;
	fin.open("customer.txt", ios::in);
	fout.open("new.txt");
	cout << "Please Enter Customer ID" << endl;
	cin >> idcheck;
	if (fout.fail())
	{
		cout << "Input file opening failed.\n";

	}
	if (fin.fail())
	{
		cout << "Input file opening failed.\n";

	}



	fin >> C_id;
	fin >> C_first_name;
	fin >> C_last_name;
	fin >> C_regdate;
	fin >> C_gender;
	fin >> C_blood_group;
	fin >> C_contact;
	fin >> C_address;
	fin >> C_catgory;
	fin >> C_bill_status;

	while (!fin.eof()) {
		fin >> C_id;
		fin >> C_first_name;
		fin >> C_last_name;
		fin >> C_regdate;
		fin >> C_gender;
		fin >> C_blood_group;
		fin >> C_contact;
		fin >> C_address;
		fin >> C_catgory;
		fin >> C_bill_status;
		


		if (idcheck == C_id)
		{
			cout << "Id found " << endl;
			cout << "please Enter your First Name" << endl;
			cin >> C_first_name;
			cout << "please Enter the your Last Name" << endl;
			cin >> C_last_name;
			cout << "please Enter the Address" << endl;
			cin >> C_address;
			cout << "please Enter your Contact Number" << endl;
			cin >> C_contact;

			fout << C_id << endl;
			fout << C_first_name << endl;
			fout << C_last_name << endl;
			fout << C_regdate << endl;
			fout << C_gender << endl;
			fout << C_blood_group << endl;
			fout << C_contact << endl;
			fout << C_address << endl;
			fout << C_catgory << endl;
			fout << C_bill_status << endl;
			
			cout << "Data Updated" << endl;
		}
		else
		{
			fout << C_id;
			fout << C_first_name;
			fout << C_last_name;
			fout << C_regdate;
			fout << C_gender;
			fout << C_blood_group;
			fout << C_contact;
			fout << C_address;
			fout << C_catgory;
			fout << C_bill_status;
			
		}

	}

	fin.close();
	fout.close();
	remove("customer.txt");
	rename("new.txt", "customer.txt");


}
void admin_module::edit_shopkeeper() {

	ifstream fin;
	ofstream fout;
	int idcheck;
	fin.open("shopkeeper.txt", ios::in);
	fout.open("temp1.txt");
	cout << "Please Enter Shopkeeper ID" << endl;
	cin >> idcheck;
	if (fout.fail())
	{
		cout << "Input file opening failed.\n";

	}
	if (fin.fail())
	{
		cout << "Input file opening failed.\n";

	}


	fin >> s_id;
	fin >> S_first_name;
	fin >> S_last_name;
	fin >> S_username;
	fin >> S_email;
	fin >> S_password;
	fin >> S_regdate;
	fin >> S_gender;
	fin >> S_blood_group;
	fin >> S_contact;
	fin >> S_address;
	
	while (!fin.eof())
	{
		fin >> s_id;
		fin >> S_first_name;
		fin >> S_last_name;
		fin >> S_username;
		fin >> S_email;
		fin >> S_password;
		fin >> S_regdate;
		fin >> S_gender;
		fin >> S_blood_group;
		fin >> S_contact;
		fin >> S_address;
		if (idcheck == s_id)
		{
			cout << "Please Update the Data" << endl;
			cout << "please Enter your First Name" << endl;
			cin >> S_first_name;
			cout << "please Enter the your Last Name" << endl;
			cin >> S_last_name;
			cout << "please Enter your Username" << endl;
			cin >> S_username;
			cout << "please Enter your Email" << endl;
			cin >> S_email;
			cout << "please Enter your password" << endl;
			cin >> S_password;
			cout << "please Enter the Address" << endl;
			cin >> S_address;
			cout << "please Enter your Contact Number" << endl;
			cin >> S_contact;
			
			
			fout << s_id << endl;
			fout << S_first_name << endl;
			fout << S_last_name << endl;
			fout << S_username << endl;
			fout << S_email << endl;
			fout << S_password << endl;
			fout << S_regdate << endl;
			fout << S_gender << endl;
			fout << S_blood_group << endl;
			fout << S_contact << endl;
			fout << S_address << endl;
			
			cout << "Data Updated" << endl;
		}
		else
		{
			fout << s_id << endl;
			fout << S_first_name << endl;
			fout << S_last_name << endl;
			fout << S_username << endl;
			fout << S_email << endl;
			fout << S_password << endl;
			fout << S_regdate << endl;
			fout << S_gender << endl;
			fout << S_blood_group << endl;
			fout << S_contact << endl;
			fout << S_address << endl;
			
		}


	}

	fin.close();
	fout.close();
	remove("shopkeeper.txt");
	rename("temp1.txt", "shopkeeper.txt");
}
void admin_module::edit_product(){

	ifstream fin;
	ofstream fout;
	int idcheck;
	fin.open("product.txt", ios::in);
	fout.open("temp2.txt");
	cout << "Please Enter product ID" << endl;
	cin >> idcheck;
	if (fout.fail())
	{
		cout << "Input file opening failed.\n";

	}
	if (fin.fail())
	{
		cout << "Input file opening failed.\n";

	}


	fin >> product_id;
	fin >> P_name;
	fin >> P_catogory;
	fin >> P_discription;
	fin >> P_quantity;

	

	while (!fin.eof())
	{
		fin >> product_id;
		fin >> P_name;
		fin >> P_catogory;
		fin >> P_discription;
		fin >> P_quantity;
		if (idcheck == product_id)
		{
			cout << "Please Update the Data" << endl;
			cout << "please Enter product Name" << endl;
			cin >> P_name;
			cout << "please Enter the product Discription" << endl;
			cin >> P_discription;
			cout << "please product Quantity" << endl;
			cin >> P_quantity;


			fout << product_id << endl;
			fout << P_name << endl;
			fout << P_catogory << endl;
			fout << P_discription << endl;
			fout << P_quantity << endl;

			cout << "Data Updated" << endl;
		}
		else
		{
			fout << product_id << endl;
			fout << P_name << endl;
			fout << P_catogory << endl;
			fout << P_discription << endl;
			fout << P_quantity << endl;

		}


	}

	fin.close();
	fout.close();
	remove("product.txt");
	rename("temp2.txt", "product.txt");
}
void admin_module::delete_shopkeeper() {
	ifstream fin;
	ofstream fout;
	int idcheck;
	fin.open("shopkeeper.txt", ios::in);
	fout.open("temp.txt");
	cout << "Please Enter Shopkeeper ID" << endl;
	cin >> idcheck;
	if (fout.fail())
	{
		cout << "Input file opening failed.\n";

	}
	if (fin.fail())
	{
		cout << "Input file opening failed.\n";

	}
	else
	{
		fin >> s_id;
		fin >> S_first_name;
		fin >> S_last_name;
		fin >> S_username;
		fin >> S_email;
		fin >> S_password;
		fin >> S_regdate;
		fin >> S_gender;
		fin >> S_blood_group;
		fin >> S_contact;
		fin >> S_address;


		while (!fin.eof())
		{
			fin >> s_id;
			fin >> S_first_name;
			fin >> S_last_name;
			fin >> S_username;
			fin >> S_email;
			fin >> S_password;
			fin >> S_regdate;
			fin >> S_gender;
			fin >> S_blood_group;
			fin >> S_contact;
			fin >> S_address;



			if (idcheck == s_id)
			{
				cout << "ID Found" << endl;
				cout << "Data Deleted" << endl;
				//fout << s_id << endl;
				//fout << S_first_name << endl;
				//fout << S_last_name << endl;
				//fout << S_username << endl;
				//fout << S_email << endl;
				//fout << S_password << endl;
				//fout << S_regdate << endl;
				//fout << S_gender << endl;
				//fout << S_blood_group << endl;
				//fout << S_contact << endl;
				//fout << S_address << endl;

			}
			else
			{
				fout << s_id << endl;
				fout << S_first_name << endl;
				fout << S_last_name << endl;
				fout << S_username << endl;
				fout << S_email << endl;
				fout << S_password << endl;
				fout << S_regdate << endl;
				fout << S_gender << endl;
				fout << S_blood_group << endl;
				fout << S_contact << endl;
				fout << S_address << endl;

			}


		}
		fin.close();
		fout.close();
		remove("shopkeeper.txt");
		rename("temp.txt", "shopkeeper.txt");


	}
}
void admin_module::Delete_shopkeeper()
{
	int check = 1;
	ifstream fout;
	fout.open("shopkeeper.txt");
	if (fout.fail())
	{
		cout << "Input file opening failed.\n";

	}

	
	while (!fout.eof()) {
		fout >> s_id;
		fout >> S_first_name;
		fout >> S_last_name;
		fout >> S_last_name;
		fout >> S_username;
		fout >> S_email;
		fout >> S_regdate;
		fout >> S_gender;
		fout >> S_blood_group;
		fout >> S_contact;
		fout >> S_address;


		cout << "---------------------------------Data of Shopkeepers" << check << "-------------------------------- - " << endl;
		cout << s_id << "\t" << S_first_name << "\t" << S_last_name << "\t" << S_gender << "\t" << "\t" << S_contact << endl;
		check++;
	}
	fout.close();
	ifstream fin;
	ofstream fout1;
	int idcheck;
	fin.open("shopkeeper.txt", ios::in);
	fout1.open("temp.txt");
	cout << "Please Enter Shopkeeper ID" << endl;
	cin >> idcheck;
	if (fout1.fail())
	{
		cout << "Input file opening failed.\n";

	}
	if (fin.fail())
	{
		cout << "Input file opening failed.\n";

	}
	else
	{
		fin >> s_id;
		fin >> S_first_name;
		fin >> S_last_name;
		fin >> S_username;
		fin >> S_email;
		fin >> S_password;
		fin >> S_regdate;
		fin >> S_gender;
		fin >> S_blood_group;
		fin >> S_contact;
		fin >> S_address;


		while (!fin.eof())
		{
			fin >> s_id;
			fin >> S_first_name;
			fin >> S_last_name;
			fin >> S_username;
			fin >> S_email;
			fin >> S_password;
			fin >> S_regdate;
			fin >> S_gender;
			fin >> S_blood_group;
			fin >> S_contact;
			fin >> S_address;



			if (idcheck == s_id)
			{
				cout << "ID Found" << endl;
				cout << "Data Deleted" << endl;
				fout1 << s_id << endl;
				fout1 << S_first_name << endl;
				fout1 << S_last_name << endl;
				fout1 << S_username << endl;
				fout1 << S_email << endl;
				fout1 << S_password << endl;
				fout1 << S_regdate << endl;
				fout1 << S_gender << endl;
				fout1 << S_blood_group << endl;
				fout1 << S_contact << endl;
				fout1 << S_address << endl;

			}
			else
			{
				

			}


		}
		fin.close();
		fout1.close();
		remove("shopkeeper.txt");
		rename("temp.txt", "shopkeeper.txt");


	}
}
void admin_module::Delete_customer() {
		int check = 1;
		ifstream fout;
		fout.open("customer.txt");
		if (fout.fail())
		{
			cout << "Input file opening failed.\n";

		}
		else
			
		
		while (!fout.eof()) {
			fout >> C_id ;
			fout >> C_first_name ;
			fout >> C_last_name;
			fout >> C_regdate ;
			fout >> C_gender ;
			fout >> C_blood_group ;
			fout >> C_contact ;
			fout >> C_address ;
			fout >> C_catgory ;
			fout >> C_bill_status;
			cout << "-------------------Data of Customers: " << check << "-----------------" << endl;;
			cout << C_id << "\t" << C_first_name << "\t" << C_last_name << "\t" << endl;
			check++;

		}

		fout.close();
		ifstream fin;
		ofstream fout1;
		ofstream fout2;
		int idcheck;
		fin.open("customer.txt", ios::in);
		fout1.open("new.txt");
		fout2.open("del.txt");
		cout << "Please Enter Customer ID" << endl;
		cin >> idcheck;
		if (fout1.fail())
		{
			cout << "Input file opening failed.\n";

		}
		if (fin.fail())
		{
			cout << "Input file opening failed.\n";

		}



		fin >> C_id;
		fin >> C_first_name;
		fin >> C_last_name;
		fin >> C_regdate;
		fin >> C_gender;
		fin >> C_blood_group;
		fin >> C_contact;
		fin >> C_address;
		fin >> C_catgory;
		fin >> C_bill_status;

		while (!fin.eof()) {
			fin >> C_id;
			fin >> C_first_name;
			fin >> C_last_name;
			fin >> C_regdate;
			fin >> C_gender;
			fin >> C_blood_group;
			fin >> C_contact;
			fin >> C_address;
			fin >> C_catgory;
			fin >> C_bill_status;



			if (idcheck == C_id)
			{
				cout << "ID Found" << endl;
				
				cout << "Data Deleted" << endl;
				fout2 << C_id << endl;
				fout2 << C_first_name << endl;
				fout2 << C_last_name << endl;
				fout2 << C_regdate << endl;
				fout2 << C_gender << endl;
				fout2 << C_blood_group << endl;
				fout2 << C_contact << endl;
				fout2 << C_address << endl;
				fout2 << C_catgory << endl;
				fout2 << C_bill_status << endl;
				


				

				
			}
			else
			{
				fout1 << C_id << endl;
				fout1 << C_first_name << endl;
				fout1 << C_last_name << endl;
				fout1 << C_regdate << endl;
				fout1 << C_gender << endl;
				fout1 << C_blood_group << endl;
				fout1 << C_contact << endl;
				fout1 << C_address << endl;
				fout1 << C_catgory << endl;
				fout1 << C_bill_status << endl;

			}

		}

		fin.close();
		fout1.close();
		remove("customer.txt");
		rename("new.txt", "customer.txt");



	}
void admin_module::Delete_product() {
	int check = 1;
	ifstream fout;
	fout.open("product.txt");
	if (fout.fail())
	{
		cout << "Input file opening failed.\n";

	}
	else


		while (!fout.eof()) {
			fout >> product_id;
			fout >> P_name;
			fout >> P_catogory;
			fout >> P_discription;
			fout >> P_quantity;
			
			cout << "-------------------Data of Productss: " << check << "-----------------" << endl;;
			
			check++;
			cout << product_id << "\t" << P_name << "\t" << P_catogory << "\t" << P_discription << "\t" << "\t" << P_quantity << endl;
		}
	fout.close();
		

		
		ifstream fin;
		ofstream fout1;
		ofstream fout2;
		int idcheck;
		fin.open("product.txt", ios::in);
		fout1.open("new.txt");
		fout2.open("del.txt");
		cout << "Please Enter Product ID" << endl;
		cin >> idcheck;
		if (fout1.fail())
		{
			cout << "Input file opening failed.\n";

		}
		if (fin.fail())
		{
			cout << "Input file opening failed.\n";

		}


		fin >> product_id;
		fin >> P_name;
		fin >> P_catogory;
		fin >> P_discription;
		fin >> P_quantity;

		

		while (!fin.eof()) {
			fin >> product_id;
			fin >> P_name;
			fin >> P_catogory;
			fin >> P_discription;
			fin >> P_quantity;




			if (idcheck == C_id)
			{
				cout << "ID Found" << endl;

				cout << "Data Deleted" << endl;
				fout2 << product_id << endl;
				fout2 << P_name << endl;
				fout2 << P_catogory << endl;
				fout2 << P_discription << endl;
				fout2 << P_quantity << endl;






			}
			else
			{
				fout1 << product_id << endl;
				fout1 << P_name << endl;
				fout1 << P_catogory << endl;
				fout1 << P_discription << endl;
				fout1 << P_quantity << endl;

			}

		}

		fin.close();
		fout1.close();
		fout2.close();
		remove("new.txt");
		rename("del.txt", "customer.txt");






	}
void admin_module::admin() {


	int op;
	do {

		cout << endl;
		cout << "\t\tPress 1 to Add New Shopkeeper" << endl;
		cout << "\t\tpress 2 to Add New Customer " << endl;
		cout << "\t\tPress 3 to Add New Product" << endl;
		cout << "\t\tPress 4 to Edit Shopkeeper's Detail" << endl;
		cout << "\t\tpress 5 to Edit Customer's Detail " << endl;
		cout << "\t\tpress 6 to Edit product's Detail " << endl;
		cout << "\t\tPress 7 to Delete Shopkeeper Detail" << endl;
		cout << "\t\tPress 8 to Delete  Product Detail" << endl;
		cout << "\t\tpress 9 to Delete Customer Detail " << endl;
		cout << "\t\tpress 10 Exit " << endl;
		cin >> op;
		switch (op)
		{
		case 1:
			Add_shopkeeper();
			break;
		case 2:
			addcustomer();
			break;
		case 3:
			addproduct();
			break;
		case 4:
			edit_shopkeeper();
			break;
		case 5:
			edit_customer();
			break;
		case 6:
			edit_product();
			break;
		case 7:
			Delete_shopkeeper();
			break;
		case 8:
			Delete_product();
			break;
		case 9:
			Delete_customer();
			break;
		
		case 10:
			exit(0);
			break;

			cout << "invalid input" << endl;
			break;
		}
	} while (op != 10);
}
void Shopkeeper_module::view_Product() {

	int check = 1;
	ifstream fout;
	fout.open("product.txt");
	if (fout.fail())
	{
		cout << "Input file opening failed.\n";

	}


	while (!fout.eof()) {
		fout >> product_id;
		fout >> P_name;
		fout >> P_catogory;
		fout >> P_discription;
		fout >> P_quantity;



		cout << "---------------------------------Data of Products" << check << "-------------------------------- - " << endl;
		cout << product_id << "\t" << P_name << "\t" << P_catogory << "\t" << P_discription << "\t" << "\t" << P_quantity << endl;
		check++;
	}
	fout.close();
}
void Shopkeeper_module::S_admin() {

	int op;
	do {

		cout << endl;
		cout << "\t\tPress 1 to to Register Shopkeeper" << endl;
		cout << "\t\tPress 2 to Add New Product" << endl;
		cout << "\t\tpress 3 to Edit product's Detail " << endl;
	    cout << "\t\tPress 4 to view Product Detail" << endl;
		cout << "\t\tpress 5 to go back " << endl;
		cin >> op;
		switch (op)
		{
		case 1:
			Add_shopkeeper();
			break;
		case 2:
			addproduct();
			break;
		case 3:
			edit_product();
			break;
		case 4:
			view_Product();
			break;
		case 5:
			admin();
			break;
	

			cout << "invalid input" << endl;
			break;
		}
	} while (op != 10);
}

