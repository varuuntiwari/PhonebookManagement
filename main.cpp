#include "phonebook_functions.h"
#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;

struct phonebook{
    string name;
    string number;
};

struct phonebook ph;
const int MAX_STRUCTURES = 100;
vector<phonebook> contact_array;

int main(){

    //Menu Display
    cout<<"\n*************************** ";
    cout<<"Welcome to your Phonebook";
    cout<<" ***************************"<<endl;
    int choice;
    do{
        cout<<"\nPlease select one of the options:"<<endl;
        cout<<"1. Add a contact"<<endl;
        cout<<"2. Delete a contact"<<endl;
        cout<<"3. Modify a contact"<<endl;
        cout<<"4. Search"<<endl;
        cout<<"5. Display all contacts"<<endl;
        cout<<"6. Exit \n\n";

        cout<<"Enter your choice: ";
        cin>>choice;

        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch(choice){
            case 1:
                add_contact(contact_array, MAX_STRUCTURES, ph);
                break;
            
            case 2:
                delete_contact(contact_array, MAX_STRUCTURES, ph);
                break;
            
            case 3:
                modify_contact(contact_array, MAX_STRUCTURES, ph);
                break;
            
            case 4: 
                search_contact(contact_array, MAX_STRUCTURES, ph);
                break;

            case 5:
                displayAll(contact_array, MAX_STRUCTURES, ph);
                break;
            
            case 6:
                exit(0);
                break;
        }
    } while(choice!=6);
}