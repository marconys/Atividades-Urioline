#include <stdio.h>
#include <iostream>
#include <cmath>


using namespace std;

int main(){


double x,y;

cin >> x >> y;

if(x==0.0 && y==0.0) cout << "Origem" << endl;

    if (x>0.0 && y>0.0) cout << "Q1" << endl;

        if(x<0.0 && y>0.0) cout << "Q2" << endl;

            if(x<0.0 && y<0.0) cout << "Q3" << endl;

                if(x>0.0 && y<0.0) cout << "Q4" << endl;

                










return 0;

}