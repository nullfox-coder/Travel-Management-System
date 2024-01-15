#include <iostream>
#include <fstream>
#include <iomanip>
#include <windows.h>

using namespace std;

class Customers{
public:
    string name, gender, address;
    int age, mobileNo, cusID;
    char all[999];

    void detDetails()
    {
        ofstream out("old_customers.txt, ios::app"); // creating file old_customers
        {
            cout<<"Enter Customer ID: ";
            cin>>cusID;
            cout<<"Enter Name:  ";
            cin>>name;
            cout<<"Enter Age: ";
            cin>>age;
            cout<<"Enter Mobile Number: ";
            cin>>mobileNo;
            cout<< "Enter Address: ";
            cin>>address;
            cout<<"Enter Gender: ";
            cin>>gender;
        }
        out<<"\nCustomer ID: "<<cusID<<"\nName: "<<name<<"\nAge: "<<"\nMobile Number:"<<mobileNo<<"\nAddress"<<address<<"\nGender:"<<gender<<endl;
        out.close();
        cout<<"\nSaved \nNote: Record saved for future references"<<endl;
    }

    void showDetails()
    {
        ifstream in("old_customers.txt");
        {
            if(!in)
            {
                cout<< "File Error!"<<endl;
            }
            while(!(in.eof()))
            {
                in.getline(all,999);
                cout<<all<<endl;
            }
            in.close();
        }
    }

};

class Cabs{
public:
    int cabChoice, kilometers, hireCab, lastcabCost;
    float cabCost;


    void cabDetails()
    {
       cout<<"We provide smartest , fastest and safest cab sevice around the country"<<endl;
       cout<<"--------------XYZ CABS-------------"<<endl;
       cout<<"1. Rent a Standard Cab - 10rs/km"<<endl;
       cout<<"2. Rent a Luxury Cab - 20rs/km"<<endl;
       cout<<"\nTo calculate the cost for your journey"<<endl;
       cout<<"Enter type of cab you need:";
       cin>>cabChoice;
       cout<<"Enter kilometers you have to travel:";
       cin>>kilometers;

       if(cabChoice == 1){
            cabCost = kilometers*10;
            cout<< "\n Your tour cost"<<cabCost<<"rupees for a Standard Cab"<<endl;
            cout<<"Press 1 to hire this cab: or ";
            cout<<"Press 2 to select another cab:";
            cin>>hireCab;
            system("CLS");  // clear the terminal
            if(hireCab == 1){
                lastcabCost=cabCost;
                cout<<"\nYou have successfully hired a Standard cab"<<endl;
                cout<< "Go to Menu and take the receipt"<<endl;       
            }
            else if(hireCab == 1){
                cabDetails();
            }
            else{
                cout<< "Invalid Input! Redirecting to previous menu \nPlease wait!"<<endl;
                Sleep(999);
                system("CLS");
                cabDetails();
            }
       }
        else if(cabChoice == 2){
            cabCost = kilometers*20;
            cout<< "\n Your tour cost"<<cabCost<<"rupees for a Standard Cab"<<endl;
            cout<<"Press 1 to hire this cab: or ";
            cout<<"Press 2 to select another cab:";
            cin>>hireCab;
            system("CLS");  // clear the terminal
            if(hireCab == 1){
                lastcabCost=cabCost;
                cout<<"\nYou have successfully hired a Standard cab"<<endl;
                cout<< "Go to Menu and take the receipt"<<endl;       
            }
            else if(hireCab == 1){
                cabDetails();
            }
            else{
                cout<< "Invalid Input! Redirecting to previous menu \nPlease wait!"<<endl;
                Sleep(1100);
                system("CLS");
                cabDetails();
            }
       }
       else{
            cout<< "Invalid Input! Redirecting to Main Menu \nPlease wait!"<<endl;
            Sleep(1100);
            system("CLS");
            //menu();
       }
       cout<<"\nPress any key to Redirect Main Menu: ";
       cin>> hireCab;
       system("CLS");
       //menu();
    }
};

class Booking{
public:
    int choiceHotel;
    int packChoice;
    float hotelCost;

    void hotels(){
        string hotelNo[]={"Mahindra","Taj","OYO"};
        for(int i = 0;i<3;i++){
            cout<<(i+1)<<". Hotel"<<hotelNo[i]<<endl;
        }
        cout<<"\nCurrently we are providing services through above hotels."<<endl;
        cout<<"Press any key to back or \n Enter number of the hotel you want to book: ";
        cout<<choiceHotel;
        system("CLS");

        if(choiceHotel==1){
            cout<<"-------WELCOME TO HOTEL MAHINDRA--------\n"<<endl;
            cout<<"The Garden, food and beverage. Enjoy everyone! You can drink, eat and stay cool in summer"<<endl;
            cout<<"Packages offered by Avendra: \n"<<endl;
            cout<<"1. Standard Pack"<<endl;
            cout<<"\tWe provide all basic facilities you need! just for Rs.8000"<<endl;
            cout<<"2. Premimum Pack"<<endl;
            cout<<"\tEnjoy Premium: Rs. 10000"<<endl;
            cout<<"3. Luxury Pack"<<endl;
            cout<<"\tLive a Luxury at Mahindra: Rs.15000"<<endl;
            cout<<"\nPress another key to back or\nEnter package number you want to book: ";
            cin>>packChoice;

            if(packChoice == 1){
                hotelCost = 8000.00;
                cout<<"\nYou have successfully booked Standard pack at Mahindra"<<endl;
                cout<<"Go to Menu and take the receipt"<<endl;
            }
            else if(packChoice == 2){
                hotelCost = 10000.00;
                cout<<"\nYou have successfully booked Premium pack at Mahindra"<<endl;
                cout<<"Go to Menu and take the receipt"<<endl;
            }
            else if(packChoice == 3){
                hotelCost = 15000.00;
                cout<<"\nYou have successfully booked Luxury pack at Mahindra"<<endl;
                cout<<"Go to Menu and take the receipt"<<endl;
            }
            else{
                cout<<"Invalid Input! Redirecting to Previous Menu \nPlease Wait!"<<endl;
                Sleep(1100);
                system("ClS");
                hotels();
            }
            char gotomenu;
            cout<<"\nPress any key to redirect to main menu:";
            cin>>gotomenu;
            //menu();
        }
    }
};

class Charges{

};

int main(){
    cout<<"Hello World"<<endl;
    return 0;
}