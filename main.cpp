#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>

class Complex{

    private:
    double Re;
    double Im;

    public:

    Complex ( double Re , double Im )
    {

        this->Re=Re ;
        this->Im=Im ;

    }

    Complex (){

        this->Re = 0;
        this->Im = 0;

    }
    double norm(){

        return sqrt( Re*Re+Im*Im);

    }
    double getRe(){
        return Re;
    }
    double getIm(){
        return Im;
    }

};
int main(){

    int n , poz;
    std::vector<Complex>numere;
    double re , im , modul;

    std::cin>>n;
    for( int i = 0; i<n ;i++){
        std::cin>>re;
        getchar();
        std::cin>>im;

        Complex complexe(re,im);
        numere.push_back( complexe );

    }

    double min =numere[0].norm();

    for( int i = 0 ;i < n ;i++){

        if( numere[i].norm() < min ){
            min = numere[i].norm();
            poz=i;

        }

    }
    std::cout<<numere[poz].getRe()<<" "<<numere[poz].getIm();




    return 0;
}