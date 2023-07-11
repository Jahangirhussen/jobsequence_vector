#include<iostream>
#include<map>/// map libery decilear...
#include<string.h>
using namespace std;
int main()
{
  map<string,int>kawsar;/// kawsar name er map jekane 2 ta value takbe string type o intger type..

kawsar["age1"]=2001;///eka theke map a value raklam..
kawsar["age2"]=2000;
kawsar["age3"]=1999;
kawsar["age4"]=1998;
kawsar["age5"]=1997;
kawsar["age6"]=1996;

map<string, int>:: iterator kaw;
/**kaw name a ekta iterator banalam,and map a raklam,iterator er 1st a string second aint value rakbo..
map er i er bodole iterator declear korte hoy"maybe"
*/
for(kaw=kawsar.begin() ; kaw!=kawsar.end(); kaw++)
{
    cout<<(*kaw).first<<" "<<(*kaw).second<<endl;/// kaw iterator point (*kaw) korce kawsar vector k,so er first value string diyechi amra than seond in ace..
}

    return 0;
}




