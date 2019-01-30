#include <iostream>


using namespace std;
class Balance{
public:

    long bal;
    string type;

    Balance(long bal, string type){
        this->bal=bal;
        this->type=type;
    }
};
class Account{
private:
    static long accno;
    string name, gender, branch, city;

    Balance *balance;


public:
    void createAccount(string name, string gender, string branch, string city){

        this->name=name;
        this->gender=gender;
        this->branch=branch;
        this->city=city;

        cout<<"Your account details:\nAccount number: "<<accno<<"\nName: "<<name<<"\nGender: "<<gender
            <<"\nBranch: "<<branch<<"\nCity: "<<city<<endl;
        cout<<"Thank you we are happy to see you with us"<<endl;
        cout<<"---------------"<<endl;
        accno++;

    }

    void addBalance(Balance *balance){
        this->balance=balance;
        cout<<balance->bal<<"\n"<<balance->type;

    }
    void deleteAccount(){
        this->accno=0;
        this->name="";
        this->gender="";
        this->branch="";
        this->city="";

    }

};

long Account::accno=12345678;

int main() {

    Account account;

    cout<<"Select option from below:\n"
        <<"1 or A: for Account opening\n"
        <<"2 or B: Account Details/Balance\n"
        <<"3 or C : Delete Account"
        <<endl;



//    account.createAccount("Ashutosh","male","saving","sigra", "varanasi");
//    account.createAccount("Ashutosh singh","male","saving","sigra", "varanasi");
//
     string name,gender, branch, city;
     char c[2];
     cin.getline(c,2);
     if(c[0] == 'A' or c[0] == '1'){
         cout<<"Name:";
         cin>>name;

         cout<<"\nGender:";
         cin>>gender;

         cout<<"\nBranch:";
         cin>>branch;

         cout<<"\nCity:";
         cin>>city;

         cout<<endl;

         account.createAccount(name,gender, branch, city);

         cout<<"Deposit Money In Your account\n"<<endl;
         long bal;
         string type;
         cout<<"Amount to be Deposit: ";
         cin>>bal;
         cout<<"\nAccount Type: saving/current: ";
         cin>>type;


         Balance balance=Balance(bal, type);
         account.addBalance(&balance);

     }
     else if(c[0] == 'B' or c[0] == '2'){

     }
     else
         return 0;

    return 0;
}