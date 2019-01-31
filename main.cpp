#include <iostream>
#include "fstream"
#include "cstdio"
#include "time.h"
#include "cstring"


using namespace std;
class Balance{
public:

    long long int bal;
    string type;

    Balance(long long int bal, string type){
        this->bal=bal;
        this->type=type;
    }
};
class Account{
public:

    string accno;
    string name, gender, branch, city;

    Balance *balance;



    void createAccount(string name, string gender, string branch, string city){

        this->name=name;
        this->gender=gender;
        this->branch=branch;
        this->city=city;

        cout<<"Your account details:\nAccount number: "<<accno<<"\nName: "<<name<<"\nGender: "<<gender
            <<"\nBranch: "<<branch<<"\nCity: "<<city<<endl;
        cout<<"Thank you we are happy to see you with us"<<endl;
        cout<<"---------------"<<endl;


    }

    void addBalance(Balance *balance){
        this->balance=balance;
        cout<<balance->bal<<"\n"<<balance->type;

    }
    void deleteAccount(char name[20]){
        //gets(name);
      //  string fname=name;
        int status;
       // status=remove("U:\\Hatchwin\\cpp\\BankingSystem\\"+name+".txt");




    }

};

int main() {

    Account account;
    string contst="RA16110080";
    srand(time(0));
    int is=rand()%100+1;
    string b=contst+to_string(is);


     account.accno=b;

    cout<<"Select option from below:\n"
        <<"1 or A: for Account opening\n"
        <<"2 or B: Account Details/Balance\n"
        <<"3 or C : Delete Account"
        <<endl;

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
         ofstream newFile("U:\\Hatchwin\\cpp\\BankingSystem\\"+name+".txt");
         if (newFile.is_open()){
             newFile<<"Account Number: "<<account.accno;
             newFile<<"\nName: "<<name;
             newFile<<"\nGender: "<<gender;
             newFile<<"\nBranch: "<<branch;
             newFile<<"\nCity: "<<city;
             newFile.close();
             cout<<"Account save to bank profile"<<endl;

         }
         else
             cout<<"File not created"<<endl;

         cout<<"Deposit Money In Your account\n"<<endl;
         long long int bal;
         string type;
         cout<<"Amount to be Deposit: ";
         cin>>bal;
         cout<<"\nAccount Type: saving/current: ";
         cin>>type;

         fstream presentFile;
         presentFile.open("U:\\Hatchwin\\cpp\\BankingSystem\\"+name+".txt");
         newFile.open("U:\\Hatchwin\\cpp\\BankingSystem\\"+name+".txt",ios::app);

         if(presentFile.is_open()){
             newFile<<"\nBalance: "<<bal<<"\nType: "<<type<<endl;
             newFile.close();
             presentFile.close();
             cout<<"Deposited to bank "<<endl;
         }
         else
             cout<<"Not Deposited to Bank"<<endl;


         Balance balance=Balance(bal, type);
         account.addBalance(&balance);

     }
     else if(c[0] == 'B' or c[0] == '2'){
         string name, srg;
         cout<<"Provide Your Account Name"<<endl;
         cin>>name;
         ifstream presentFile("U:\\Hatchwin\\cpp\\BankingSystem\\"+name+".txt");
         if(presentFile.is_open()){
             while(getline(presentFile,srg)){
                 cout<<srg<<endl;
             }

             presentFile.close();
         } else
             cout<<"Account not present"<<endl;


     }
     else if(c[0] == 'C' || c[0] == '3'){

         string in;
         cout<<"Please provide The Account Name"<<endl;
        cin>>in;
         string name="U:\\Hatchwin\\cpp\\BankingSystem\\"+in+".txt";


         if( remove(name.c_str())!=0){
             cout<<"Something internally happen"<<endl;

         }
         else
             cout<<"Account deleted"<<endl;


     }



    return 0;
}