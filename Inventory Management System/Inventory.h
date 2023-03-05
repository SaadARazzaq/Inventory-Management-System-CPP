#pragma once
#include<iostream>
#include<string>
#include<stdlib.h>
#include<ctime>
#include<Windows.h>
using namespace std;
class admin_module {
public:
	string username;
	string password;
	string S_first_name;
	string S_last_name;
	string C_first_name;
	string C_last_name;
	int s_id;
	int C_id;
	string S_regdate;
	string S_username;
	string S_email;
	string S_password;
    string C_regdate;
	string C_gender;
	string S_gender;
	string S_contact;
	string C_contact;
	string S_blood_group;
	string C_blood_group;
	string S_address;
	string C_address;
	string C_catgory;
	string P_catogory;
	string P_name;
	string P_discription;
	string P_quantity;
	int product_id;
	string C_bill_status;
	int salary;
public:
	admin_module() {
		
		
		s_id = 1000;
		C_id = 1000;
		product_id = 1000;

	}
public:
	void Add_shopkeeper();
	void admin();
	void addproduct();
	void addcustomer();
	void appointment();
	void edit_product();
	void edit_customer();
	void edit_shopkeeper();
	void delete_shopkeeper();
	void Delete_shopkeeper();

	void Delete_customer();
	void Delete_product();
};
class Shopkeeper_module : public admin_module {
public:
	void S_admin();
	void view_Product();
};
class Customer_module :public admin_module {
public:
	
};
#pragma once
#pragma once
