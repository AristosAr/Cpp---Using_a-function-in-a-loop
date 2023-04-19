#include <iostream>
#include <cmath>


using namespace std;

//function statement
double fn(float);

//main program
int main()
{
    float x, dx, xmin, xmax;
    float A[41];
    float y;
    int i;

    xmin = -20;
    xmax = 20;
    dx = 1;
    x=xmin;

    cout << "The solution of the function f(x) is " << endl;

    for (i=1; i<=41; i++){
    A[i] = fn(x); //calling the function
    y = A[i];
    cout << "For x= " << x << " " << "f(x)= " << y << endl;
    //prnt(x,y);  //calling the subroutine
    x = x+dx;
    }

    return 0;
}

//external function
double fn(float x) {

//local variables
float result;

result = (x*x) + (2*x) +1 ;

return result;
}
