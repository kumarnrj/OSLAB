#include<iostream>
#include <array>
using namespace std;

int main()
    {
        int  n;
        int p;
        int x =0;
        int x1 =0;
        int x2 =0;
        int burstTime;

        cout <<"Enter the number of process\n";
        cin>>n;
        static int  *q1;
        q1 = new int[n];
         int *q2;
        q2 = new int[n];
        int  *q3;
        q3 = new int[n];
        int j =0;
      f1:  for(int i =0;i<n;i++)                             // Taking input form the user base on the priority.
        {
            cout<<"Enter the priority";
            cin>>p;
            if(p>0 && p<5)
            {
                cout<<"enter the Burst time";
                cin>>burstTime ;
                for( j=x;j<=i;j++)
                {
                    q1[j] = burstTime;
                    break;
                }
                x = ++j;
            }
            else if( p>=5 && p<10)
            {
                cout<<"enter the burst time";
                    cin>>burstTime;
                for( j=x1;j<=i;j++)
                {
                    q2[j] = burstTime;
                    break;
                }
                x1 = ++j;
            }
            else if(p>=10 && p<15)
            {
                cout<<"enter the burst time";
                cin>>burstTime;
                for( j=x2;j<=i;j++)
                {
                    q3[j] = burstTime;
                    break;
                }
                x2 = ++j;
            }
            else
            {
                cout<<"please enter a valid proity the range should 1 to 15\n";
                goto f1;
            }
        }


        int size1 = sizeof(q1)/sizeof(q1[0]);
        cout<<"size"<<sizeof(q1)<<"\n";
        int size2 = sizeof(q2)/sizeof(q2[0]);
       int size3 = sizeof(q3)/sizeof(q3[0]);

        cout<<"Process Id\t Burst Time\t Priority"<<"\n";
        int k=1;
        for(int i =0;i<n;i++)
        {
            cout<<k<<"\t\t   "<<q1[i]<<"\n";
            k++;
        }
        for(int i =0;i<size2;i++)
        {
            cout<<k<<"\t\t   "<<q2[i]<<"\n";
            k++;
        }
        for(int i =0;i<size3;i++)
        {
            cout<<k<<"\t\t   "<<q3[i]<<"\n";
            k++;

        }

        int time =1;
       p3: while(time>=1)
        {
            //cout<<time<<"\n";
            for(int i=0;i<size1;i++)
            {
                //cout<<"q1 insid loop"<<q1[i]<<"\n";
                if(q1[i]>1)
                {
                    if(time>4 && time<=8) {
                        q1[i] = q1[i]-1;
                        //cout<<q1[i]<<"\t";
                        break;
                    }
                    else if(time>8 && time <=10)
                    {
                            goto p;
                    }
                    else if(time >0 && time <=4){
                            if(q1[i]>0){
                                    p:  q1[i] = q1[i] - 1;
                                    //cout<<"value of q1 :"<<q1[i]<<"\n";
                                    break;

                            }
                            else{
                                break;
                            }

                    }
                }
                else if(q1[i]<=1){
                    goto p4;
                }
                else{
                    goto p1;
                }
            }


          p1:  if(time>10 && time<=20 )
            {
                for(int i =0;i<size2;i++)
                {
                        if(q2[i]>0)
                        {
                            //cout<<"value in q2 is:"<<q2[i];
                            q2[i]= q2[i]- 1 ;
                            //cout<<"value of q2 now:"<<q2[i]+"\n";
                            break;
                        }
                        else{
                               // cout<<"going to p2"<<"\n";
                            goto p2;
                        }

                }
            }
            if(time >20 && time <=30)
            {
               p2: for(int i =0;i<size3;i++)
                {
                        if(q3[i]>0)
                        {
                            q3[i]= q3[i]- 1;
                            break;
                        }
                        else
                        {
                            time =1;
                            goto p3;
                        }
                }
            }
                if(time>30){
                        time =1;
                    goto p3;
                }
            time++;
        }

      p4: cout<<"\nThe final answer is"<<"\n";
      cout<<"Process Id\t Burst Time"<<"\n";

      int k1=1;
          for(int i =0;i<size1;i++)
        {
            cout<<k1<<"\t\t   "<<q1[i]<<"\n";
            k1++;
        }
        for(int i =0;i<size2;i++)
        {
            cout<<k1<<"\t\t   "<<q2[i]<<"\n";
            k1++;
        }
        for(int i =0;i<size3;i++)
        {
            cout<<k1<<"\t\t   "<<q3[i]<<"\n";
            k1++;

        }
    }





