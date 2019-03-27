#include<iostream>
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
        int  *q1;
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
