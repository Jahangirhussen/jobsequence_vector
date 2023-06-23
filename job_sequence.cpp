#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,profit,deadline,max_profit=0,max_deadline=-1,j;
    vector<pair<int,int>>job;
    cout<<"how many job you get offer : ";
    cin>>n;
    ///step 1,input vector
    for(i=0; i<n; i++)///in this full loop we get just input and push in job vector.
    {
        cout<<"enter profit than its deadline : ";
        cin>>profit>>deadline;
        job.push_back(make_pair(profit,deadline));
        if(deadline >max_deadline)
        {
            max_deadline=deadline;
        }
    }
    cout<<"before sorting__________________________________________________________________________________"<<endl;
    for(i=0; i<n; i++)/// in this loop we print the job vector all pair value.
    {
        cout<<job[i].first<<" "<<job[i].second<<endl;

    }
/// step 2, sorting

///  sort(job.end(), job.begin());///in this statmeant we sort vector job end to start this function work maybe accending.
    sort(job.rbegin(), job.rend());///in this statmeant we sort vector job end to start this function work desanding ,mane boro than chuto,.

    cout<<"after desanding  sorting__________________________________________________________________"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<job[i].first<<" "<<job[i].second<<endl;
    }
    ///step 3 , main work here ,here job sequence and maximum profit..//

    int newarray[max_deadline]={0};///max_deadline from step 1 anf creted there all value '0'

    for(i=0; i<n ; i++)///ous totaljob is n,so the loop run n time.
    {

        for(j=job[i].second-1 ; j>=0; j--)///ous newarry per index is j,stading j is our i th job deadline,
        {


            if(newarray[j]==0)///new array index hobe 'i' number index er deadline ,jodi er deadline faka hoy than if a dukbe ,faka na hole loop er hisebe j-- hobe, .
            {

        newarray[j]=job[i].first;//jehetu newarry ei index faka tai ekane i th  job er profit rakbo.

        cout<<" count profit "<<newarray[j]<<"index j =  "<<j<<"   index i = "<<i<<endl;
            max_profit=max_profit + newarray[j] ;
                break;///jehetu i th er jonno j peyechi tai j er loop break kore i er loop a theke abr shuru
            }


        }

    }

    cout<<" max_profit "<<max_profit<<" max_deadline :"<<max_deadline<<endl;
    return 0;
}
/**
60 4
40 2
20 2
70 6
50 5
30 3
10 1
max deadline 6
max profit 270
*/
