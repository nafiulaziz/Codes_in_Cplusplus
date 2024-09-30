#include<iostream>
#include<conio.h>

using namespace std;

class Process{
	int id, ct, at, cmt, tat, wt, st;
	float awt, att;

	public:
	void input(Process*,int );
	void calc(Process *,int);
	void show_1(Process*,int);
	void show_2(Process*,int);
	void sort(Process *, int);
	void gchart(Process *, int);
};

int main(){
	int n;
	cout<<"\nEnter the number of processes in your system:\n";
	cin>>n;
	Process *p = new Process[n];
	Process f;
	f.input(p,n);
	f.show_1(p,n);
	f.sort(p, n);
	f.calc(p,n);
	f.gchart(p,n);
	f.show_2(p,n);

	getch();
	return 0;
}

void Process::input(Process *p,int n)
{
	for(int i = 0;i<n;i++)
    {
		cout<<"\nEnter arrival time for process "<<i+1<<":\n";
		cin>>p[i].at;
		cout<<"\nEnter CPU time for process "<<i+1<<":\n";
		cin>>p[i].ct;
		p[i].id = i+1;
	}
}

void Process::show_1(Process*p, int n)
{
    cout<<"\nProcess\tArrival\tCPU\n";

	for(int i =0;i<n;i++)
    {
		cout<<" P["<<p[i].id<<"]\t "<<p[i].at<<"\t"<<p[i].ct<<"\n";
	}

}

void Process::sort(Process*p, int n)
{
	for(int i=0;i<n-1;i++)
    {
		for(int j=0;j<n-i-1;j++)
		{
			if(p[j].at>p[j+1].at)
			{
				int temp;

				temp = p[j].at;
				p[j].at = p[j+1].at;
				p[j+1].at = temp;

				temp = p[j].ct;
				p[j].ct = p[j+1].ct;
				p[j+1].ct = temp;

                temp = p[j].id;
				p[j].id = p[j+1].id;
				p[j+1].id = temp;
			}
		}
	}
}

void Process::calc(Process*p, int n)
{
	int sum = 0;
	sum = sum + p[0].at;

	for(int i = 0;i<n;i++)
    {
        p[i].st=sum;
		sum = sum + p[i].ct;
		p[i].cmt = sum;
		p[i].tat = p[i].cmt - p[i].at;
		p[i].wt = p[i].tat - p[i].ct;

		if(sum<p[i+1].at)
        {
			int t = p[i+1].at-sum;
			sum = sum+t;
		}
	}
}

void Process::gchart(Process*p, int n)
{
    cout<<"\nGantt Chart:\n";

    for(int i =0;i<n;i++)
    {
	   cout<<"||---P["<<p[i].id<<"]---||\t";
    }

    cout<<"\n";

    for(int i =0;i<n;i++)
    {
       cout<<p[i].st<<" \t    ";
	   cout<<p[i].cmt<<" \t ";
    }
}

void Process::show_2(Process*p, int n)
{
    cout<<"\n";
    cout<<"\nThe process has done:";
	cout<<"\nProcess\tWaiting\tTurn Around\n";

	for(int i =0;i<n;i++)
    {
		cout<<" P["<<p[i].id<<"]\t "<<p[i].wt<<"\t "<<p[i].tat<<"\n";
	}

	for(int i=0;i<n;i++)
	{
		awt += p[i].wt;
	}
	awt /= n;
	cout<<"\nAverage Waiting Time: "<<awt<<"ms\n\n";

	for(int i=0;i<n;i++)
	{
			att += p[i].tat;
	}
	att /= n;
	cout<<"\nAverage TurnAround Time: "<<att<<"ms\n\n";
}
