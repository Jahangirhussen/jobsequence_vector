#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,d,f,i;
    vector<pair<int,int>>kawsar;//ekhane pair(jura) inilization korlam,jar 2 tai integer type er value ja kawsar name er vector rakbe;
    cout<<"how many pair you need : ";
    cin>>n;
    for( i=0; i<n; i++)
    {
        cout<<" type deadline and its profit :";
        cin>>d>>f;
        kawsar.push_back(make_pair(d,f));//ekane pair a je jura nibo tar first"d "and second "f "raklam;
    }
    for(i=0; i<n; i++)
    {
        cout<<kawsar[i].first<<" "<<kawsar[i].second<<endl;//ekane kawsar name a je vector array tar "i" number index a je pair tar "first" and "second"value print korlam;
    }
    return 0;
}
/**note vector pair k sort korte gele pair er "first " value k dhore sort kore**/
