#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,weight,profit,w_s,max_profit=0;
    vector<pair<int,int>>job;///jura ba pair niye job name a vector inilization kora;
    cout<<"how many job pair you need  :  ";
    cin>>n;

    for(i=0; i<n; i++ )
    {
        cout<<"type your profit and weight: ";
        cin>>profit>>weight;///input newya.
        job.push_back(make_pair(profit,weight)) ;/// 2 ta input job vector a rakha.
    }
    ///step 1 ,sort;
    sort(job.rbegin(),job.rend());///desanding mane boro theke choto first value niye kaj kore.
    cout<<endl<<"After shorting "<<endl;
    for(i=0; i<n; i++ )
    {
        cout<<"index : "<<i<<" profit = "<<job[i].first<<" weight = "<<job[i].second<<endl;

    }
    ///step 2
    cout<<" Enter  weight of the suck : ";///weight nibo ja dorkar.
    cin>>w_s;
    for(i=0 ; i<n ; i++)
    {

        if(w_s<=0)///weight jodi 0 ba aro kom hoy loop break,karon 0 ba er kom weight a amra profit pabo na.
           break;
        else if(job[i].second<=w_s)///i th job er weight jodi w_s er kom hoy seta amra nite parbo na eta niyom ei system er.
        {
            max_profit=max_profit+job[i].first;
            w_s=w_s-job[i].second;/// max newyar por w_s k update korte hobe next  i th er jonno.eta niyom.
        }
    }
    cout<<"max_profit = "<<max_profit<<endl;///lpoop off hole max print korbo
    return 0;

}
