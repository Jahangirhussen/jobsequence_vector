
#include<iostream>
#include<vector>//vector ek dhoroner ARRAY.
using namespace std;
int n;//n
 vector<int>kawsar;//kawsar vector jar data type int,***jehetu eta display te o lagbe main function a o lagbe tai global declared kori
void display_kawsar_vector( vector<int> &v)//ekane &v.mane je vector asbe tar size v dhore niyechi;
{
    cout<< "start disply\n ";
    for(int i=0;i<v.size();i++)//je vector recive korce tar size k 'V' mone kore always vector;
    {
        cout<<v[i]<<"  ";//jehetu vector ekta array tai array er moto print kori.ekene v er bodole kawsar dile o hobe
        //cout<<v.at(i);//v.at(i) and v[i] same;
    }
    cout<<endl;//ekbar display kaj sese seta new line dei,pore jodi abr print lage ta jate same line a print na hoy,
}
int main()
{

    cout<<"how many vector you want  ";

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"which value you push in kawsar vector  ";
        int value;
        cin>>value;
        kawsar.push_back(value);//ja value dibo ta kawsar vector er "ZERO" index theke add hobe ,
    }
    //ekon amader print er kaj,jehetu ekadik bar print korbo tai bar bar likha sombob na tai ekta function banai upore.
   display_kawsar_vector( kawsar);//ekane kawsar mane ei vector ta disply te diye ,tar jonno kaj korbe;
   cout<<"ekon potom value kawsar vector er remove korbo"<<endl;
    kawsar.pop_back();//ekane pop mane last value remove kora.
    display_kawsar_vector( kawsar);

    vector<int>::iterator kaw=kawsar.begin();//new value add korbo and kun jayga theke shuru korbo seta begin;
     cout<<"ekon kawsar vector er zero   index a   200 add korbo,baki  value er por theke hobe"<<endl;
    kawsar.insert(kaw,200);
    display_kawsar_vector( kawsar);
    cout<<"ekon potom value kawsar vector 16 value k 3 bar add korbo 2number index mane array er 3 number ghor theke,baki sob pore hobe"<<endl;
    kawsar.insert(kaw+2,3,16);//ekane 2 number gor theke 16 ja 3 bar hobe pore baki sob number;
    display_kawsar_vector( kawsar);
}

