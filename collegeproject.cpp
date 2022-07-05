// TO KNOW THE DIFFERENCE OF AGE 
// TO KNOW NO. OF DAYS LIVED 
// TO KNOW THE NO. OF DAYS LEFT FOR YOUR NEXT BIRTHDAY
#include <iostream>
#include <fstream>
using namespace std;
class times
{
    private:
	int tdd,tmm,tyy,n;
	int dd, mm , yy;
	
	const int mdays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; //array with every month
	public:
	
	
	times()
	{
	ofstream fa;   //ofstream file to only write in the file
    fa.open("projectc++.txt",ios::trunc|ios::ate|ios::out|ios::in); //opening the file
	    
	    while(n!=4){  //exit if 4
	int days = 0, m1 = 0, years = 0, m2 = 0, months = 0,y1 = 0;
	cout << endl <<"Choose you number as per options"<<endl;
    cout << "1 - Number of days lived"<<endl;
    cout << "2 - Difference of age "<<endl;
    cout << "3 - Days left for next birthday!!"<<endl;
    cout << "4 - Exit"<<endl;
	cin >> n;
	
	    if(n==1){     //case 1
	cout << "Today's Date : ";
	cin >> tdd >> tmm >> tyy;
	cout << endl <<"Your birthdate : ";
	cin >> dd >> mm >> yy;}
	if(n==2){    //case 2
	cout << "younger person : ";
	cin >> tdd >> tmm >> tyy;
	cout << endl <<"elder person birthdate : ";
	cin >> dd >> mm >> yy;}
	if(n==3){  //case 3
	    cout << "your birthdate dd/mm :";
	cin >> tdd >> tmm;
	cout << "the year you want to see in :";
	cin >> tyy;
	cout << endl <<"Today's date : ";
	cin >> dd >> mm >> yy;
	}
	years = tyy - yy;          //finding difference in years

	
	while(tmm > 0){  //converting years and months in days
	    tmm--;
		m1 =  mdays[tmm] + m1;
		
	}
	while(mm > 0){  //converting years and months in days
	    mm--;
		m2 =  mdays[mm] + m2;
		
	}
	months = m1 - m2; // finding difference in months
	
	
    
      y1 = years;
    while(years>3)  //finding minimum no. of leap year and adding a day for every leap year
    {
        years = years - 4;
        days++;
    }
       
    	days = (tdd - dd)  + (y1*365) + (months); 
    	if(n==1){
        cout << "\nNumber of days lived (approximately) :"<< days<<"  DAYS"<< endl;
    	}
    	if(n==2){
    	    cout << "\n approximately elder person is  :"<< days<<" days older";
    	}
    	if(n==3){
    	     cout << "\n approximately :"<< days<<"days left";   
    	}
    
	if(n==1){
		fa<<"\nCase "<<n;
		fa<<"\nNumber of days lived : ";
		fa<<days<<" days";
	}
	if(n==2){
		fa<<"\nCase "<<n;
		fa<<"\nDiffrence of age\n";
		fa<<"elder person is : "<<days<<" older";
	}
	if(n==3){
		fa<<"\nCase "<<n;
		fa<<"\nNext birthday!\n"<<"approximately : "<<days<<" left for your next birthday";
	}
	}
	fa.close();
	}
	
	
	};
int main()
{
    times obj;
	return 0;
 } 
