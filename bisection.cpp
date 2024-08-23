#include<bits/stdc++.h>
using namespace std ;

/*
 Defining equation to be solved.
 Change this equation to solve another problem.
*/

#define f(x) cos(x) - x * exp(x)

using namespace std;

int main(){
	 /* Declaring required variables */
	 float a, b, x, fa, fb, f, e;
	 int step = 1;

	 /* Setting precision and writing floating point values in fixed-point notation. */
     cout<< setprecision(6)<< fixed;

	 /* Inputs */
	 up:
	 cout<<"Enter first guess: ";
     cin>>a;
     cout<<"Enter second guess: ";
     cin>>b;
     cout<<"Enter tolerable error: ";
     cin>>e;

	 /* Calculating Functional Value */
	 fa = f(a);
	 fb = f(b);

	 /* Checking whether given guesses brackets the root or not. */
	 if( fa * fb > 0.0)
	 {
		  cout<<"Incorrect Initial Guesses."<< endl;
		  goto up;
	 }
   /* Implementing Bisection Method */
     cout<< endl<<"****************"<< endl;
	 cout<<"Bisection Method"<< endl;
	 cout<<"****************"<< endl;
	 do 
	 {
		  /* Bisecting Interval */
		  x = (a + b)/2;
		  f = f(x);

		  cout<<"Iteration-"<< step<<":\t x = "<< setw(10)<< x<<" and f(x) = "<< setw(10)<< f(x)<< endl;

		  if( a * f < 0)
		  {
			   b = x;
		  }
		  else
		  {
			   a = x;
		  }
		  step = step + 1;
	 }while(fabs(f)>e);

	 cout<< endl<< "Root is: "<<  x<< endl;

	 return 0;
}
