#include <iostream>
#include <vector>
#include <math.h>
#include <complex>


using namespace std;

int main()
{
    const complex<double> J (0.0,1.0);
    const complex<double> d (130.0,0.0);
    const complex<double> PI(M_PI,0.0);//distance in mm

    double dx=0.005195;
    //float dy=0.005203125;

    double XX[15];
    double YY[15];
    int row=2;
    int column=3;
    complex <double> num[6];
    complex <double> den[6];
    complex <double> g[6];
    //complex<double>  num1[6][6];
    //complex<double>  num2[6][6];

//for YY row major loop
    for (int j=0,k=0;j<column;j++){

        for (int i=0;i<row;i++){
        YY[k]=j*dx;
        cout<<"YY"<<k<<"="<<YY[k]<<endl;
        k++;
        }
           }
//for XX row major loop

    for (int j=0,k=0;j<column;j++){
        for (int i=0;i<row;i++){
        XX[k]=i*dx;
        cout<<"XX"<<k<<"="<<XX[k]<<endl;
        k++;
        }
    }


    for (int j=0;j<column*row;j++){
        //cout<<"XX"<<j<<"="<<XX[k]<<endl;
        //cout<<"YY"<<j<<"="<<YY[k]<<endl;

        num[j]=exp(-J.imag()*2*M_PI/0.000488*sqrt(pow(d,2)+pow(XX[j],2)+pow(YY[j],2)));


        //den[j]=sqrt(pow(d,2)+pow(XX[j],2)+pow(YY[j],2));
        //g[j]=J.imag()/0.000488*num[j]/den[j];

       //printf("The sqrt value for is %5.10d\n",num[j]);
        cout << "numerator of" <<j<<"is"<<num[j]<< '\n';
        cout << "numerator of" <<j<<"is"<<num[j]<< '\n';
        //cout << "denominator of  " <<j<<"is"<<den[j]<< '\n';
        //cout << "g of " <<j<<"is"<<g[j]<< '\n';


    }

     return 0;
    }


