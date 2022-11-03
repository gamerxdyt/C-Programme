#include<iostream>
using namespace std;

string array1[20],array2[20],array3[20];
int total = 0;

void enter(){
    int choice;
    cout<<"How much Student You Wanna Enter: "<<endl;
    cin>>choice;
    if (total==0){
    for (int i = 0; i < choice; i++)
    {
        cout<<"Student ID : "<<i+1<<endl;
        cout<<"Enter name of Student: ";
        cin>>array1[i];
        cout<<"Enter roll no of Student: ";
        cin>>array2[i];
        cout<<"Enter phone number of Student: ";
        cin>>array3[i];
    }
    total = total+choice;
    }
    else
    {
        for (int i = total; i < total+choice; i++)
    {
        cout<<"Student ID : "<<i+1<<endl;
        cout<<"Enter name of Student: ";
        cin>>array1[i];
        cout<<"Enter roll no of Student: ";
        cin>>array2[i];
        cout<<"Enter phone number of Student: ";
        cin>>array3[i];
    }
    total = total+choice;
    }
    
    
}

void show(){
    int record;
    string rollno;
    cout<<endl<<"Options: "<<endl<<endl;

    cout<<"1. All Student Records"<<endl;
    cout<<"2. Specific Student Records"<<endl;
    cin>>record;

    switch (record)
    {
    case 1:
        cout<<endl<<"Data of Student: "<<endl;
    
    for (int i = 0; i < total; i++)
    {
        cout<<endl<<"Student ID : "<<i+1<<endl;
        cout<<"Name of Student: "<<array1[i]<<endl;
        cout<<"Roll no of Student: "<<array2[i]<<endl;
        cout<<"Phone number of Student: "<<array3[i]<<endl;
    }
        break;
        case 2:
        cout<<"Enter Student Roll no : ";
        cin>>rollno;
        for (int i = 0; i < total; i++)
        {
        if(rollno == array2[i]){
        cout<<endl<<"Student ID : "<<i+1<<endl;
        cout<<"Name of Student: "<<array1[i]<<endl;
        cout<<"Roll no of Student: "<<array2[i]<<endl;
        cout<<"Phone number of Student: "<<array3[i]<<endl;
           }
        }
        break;
    
    default:
            cout<<"Invalid Input";
        break;
    }
    
}

void update(){
        string update;
        cout<<"Enter Student Roll no : ";
        cin>>update;

        
        for (int i = 0; i < total; i++)
        {
        if(update == array2[i]){
        cout<<"Previous Data"<<endl<<endl;
        cout<<endl<<"Student ID : "<<i+1<<endl;
        cout<<"Name of Student: "<<array1[i]<<endl;
        cout<<"Roll no of Student: "<<array2[i]<<endl;
        cout<<"Phone number of Student: "<<array3[i]<<endl;

        cout<<endl<<"Updating Data"<<endl<<endl;
        cout<<"Enter name of Student: ";
        cin>>array1[i];
        cout<<"Enter roll no of Student: ";
        cin>>array2[i];
        cout<<"Enter phone number of Student: ";
        cin>>array3[i];
           }
        }
        
        
}

void deleterecord(){
    cout<<endl<<"Options: "<<endl<<endl;

    int deleteinput;
    cout<<"Press 1 For Delete All Record"<<endl;
    cout<<"Press 2 For Delete Specific Record"<<endl;
    cin>>deleteinput;
    if (deleteinput == 1)
    {
        total = 0;
        cout<<"All Record Are Deleted Sucessfully"<<endl;
    }
    else if(deleteinput == 2){
        string rollno;
        cout<<"Enter Roll no , Which You wanna Delete: ";
        cin>>rollno;
        for (int i = 0; i < total; i++)
        {
            if (rollno == array2[i])
            {
                for (int j = i; j < total; j++)
                {
                    array1[j] = array1[j+1];
                    array2[j] = array2[j+1];
                    array3[j] = array3[j+1];
                }
                total --;
                cout<<"Your specific data record Deleted Sucessfully";
            }
            
        }
        

    }
    else{
        cout<<"Invalid Input";

    }
        
}

    int main(){
    while(true){
        cout<<endl<<"Options: "<<endl<<endl;
        cout<<"Enter 1 for Entering Data in Student Table"<<endl;;
        cout<<"Enter 2 for Show Data in Student Table"<<endl;;
        cout<<"Enter 3 for Update Data in Student Table"<<endl;;
        cout<<"Enter 4 for Delete Data in Student Table"<<endl;;
        cout<<"Enter 5 for Exit Data in Student Table"<<endl;;
        int input;
        cout<<"=> ";
        cin>>input;
        switch (input)
        {
        case 1:
            enter();
            break;
        case 2:
            show();
            break;
        case 3:
            update();
            break;
        case 4:
            deleterecord();
            break;
        case 5:
            exit(0);
            break;

        default:
            cout<<"Invalid Input";
            break;
        }
    }
    return 0;
}