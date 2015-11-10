#include <iostream>
#include <fstream>

using namespace std;

int main(){
	//ofstream out("output.dat");
	

	double x0 = 0.5;
	double x;
	int Nskip = 100; //Number of iterations to skip
	int Nend  = 200; //Number of total iterations
	int N = Nend-Nskip;
	double p[N];
	
	for(double r=0; r <= 4; r += 0.001){
	   x=x0;
	   
	   ofstream out("output.dat");
	   for (int k = 1; k <= N; k++){
	   
	     for(int i=1; i <= Nskip; i++)
		    x = r*x*(1-x);
	   
	      for(int i=Nskip+1; i <= Nend; i++){
	   		   x = r*x*(1-x);
	  		  //out << r << "\t" << x << endl;
   
	   } 
	   
	     
	   p[k] = x;	
	   out << p[k] << endl;
	       
	    } 
	 out.close();
	}
	
	//out.close();
	return 0;
}
