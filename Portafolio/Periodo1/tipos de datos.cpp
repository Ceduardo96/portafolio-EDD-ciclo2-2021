#include <iostream>
#include <limits>

using namespace std;

int main(){
    int imin = numeric_limits<int>::min();
    int imax = numeric_limits<int>::max();
    
    cout << " imin = " << imin << endl;
    cout << " imax = " << imax << "\n";
    cout << " tamaño de int : " << sizeof(int) << endl;
    
    float fmin = std::numeric_limits<float>::min();
    float fmax = std::numeric_limits<float>::max();
    
    cout << " fmin = " << fmin << endl;
    cout << " fmax = " << fmax << "\n";
    cout << " tamaño de float : " << sizeof(float) << endl;
    
    char cmin = numeric_limits<char>::min();
    char cmax = numeric_limits<char>::max();
    
    cout << " cmin = " << cmin << endl;
    cout << " cmax = " << cmax << "\n";
    cout << " tamaño de char : " << sizeof(char) << endl;
    
    unsigned char ucmin = numeric_limits<unsigned char>::min();
    unsigned char ucmax = numeric_limits<unsigned char>::max();
    
    cout << " ucmin = " << ucmin << endl;
    cout << " ucmax = " << ucmax << "\n";
    cout << " tamaño de unsigned char : " << sizeof(unsigned char) << endl;
    
    double dmin = numeric_limits<double>::min();
    double dmax = numeric_limits<double>::max();
    
    cout << " dmin = " << dmin << endl;
    cout << " dmax = " << dmax << "\n";
    cout << " tamaño de double : " << sizeof(double) << endl;
    
    wchar_t wmin = numeric_limits<wchar_t>::min();
    wchar_t wmax = numeric_limits<wchar_t>::max();
    
    cout << " wmin = " << wmin << endl;
    cout << " wmax = " << wmax << "\n";
    cout << " tamaño de wchar_t : " << sizeof(wchar_t) << endl;
    
    long double ldmin = numeric_limits<long double>::min();
    long double ldmax = numeric_limits<long double>::max();
    
    cout << " ldmin = " << ldmin << endl;
    cout << " ldmax = " << ldmax << "\n";
    cout << " tamaño de long double : " << sizeof(long double) << endl;
    
    signed char scmin = numeric_limits<signed char>::min();
    signed char scmax = numeric_limits<signed char>::max();
    
    cout << " scmin = " << scmin << endl;
    cout << " scmax = " << scmax << "\n";
    cout << " tamaño de signed char : " << sizeof(signed char) << endl;
    
    unsigned int uimin = numeric_limits<unsigned int>::min();
    unsigned int uimax = numeric_limits<unsigned int>::max();
    
    cout << " uimin = " << uimin << endl;
    cout << " uimax = " << uimax << "\n";
    cout << " tamaño de unsigned int : " << sizeof(unsigned int) << endl;
    
    signed int simin = numeric_limits<signed int>::min();
    signed int simax = numeric_limits<signed int>::max();
    
    cout << " simin = " << simin << endl;
    cout << " simax = " << simax << "\n";
    cout << " tamaño de signed int : " << sizeof(signed int) << endl;
    
    short int shimin = numeric_limits<short int>::min();
    short int shimax = numeric_limits<short int>::max();
    
    cout << " shimin = " << shimin << endl;
    cout << " shimax = " << shimax << "\n";
    cout << " tamaño de short int : " << sizeof(short int) << endl;
    
    unsigned short int ushimin = numeric_limits<unsigned short int>::min();
    unsigned short int ushimax = numeric_limits<unsigned short int>::max();
    
    cout << " ushimin = " << ushimin << endl;
    cout << " ushimax = " << ushimax << "\n";
    cout << " tamaño de unsigned short int : " << sizeof(unsigned short int) << endl;
    
    signed short int ssimin = numeric_limits<signed short int>::min();
    signed short int ssimax = numeric_limits<signed short int>::max();
    
    cout << " ssimin = " << ssimin << endl;
    cout << " ssimax = " << ssimax << "\n";
    cout << " tamaño de signed short int : " << sizeof(signed short int) << endl;
    
    long int limin = numeric_limits<long int>::min();
    long int limax = numeric_limits<long int>::max();
    
    cout << " limin = " << limin << endl;
    cout << " limax = " << limax << "\n";
    cout << " tamaño de long int : " << sizeof(long int) << endl;
    
    signed long int slimin = numeric_limits<signed long int>::min();
    signed long int slimax = numeric_limits<signed long int>::max();
    
    cout << " slimin = " << slimin << endl;
    cout << " slimax = " << slimax << "\n";
    cout << " tamaño de signed long int : " << sizeof(signed long int) << endl;
    
    unsigned long int ulimin = numeric_limits<unsigned long int>::min();
    unsigned long int ulimax = numeric_limits<unsigned long int>::max();
    
    cout << " ulimin = " << ulimin << endl;
    cout << " ulimax = " << ulimax << "\n";
    cout << " tamaño de unsigned long int : " << sizeof(unsigned long int) << endl;
    
    long long int llimin = numeric_limits<long long int>::min();
    long long int llimax = numeric_limits<long long int>::max();
    
    cout << " llimin = " << llimin << endl;
    cout << " llimax = " << llimax << "\n";
    cout << " tamaño de long long int : " << sizeof(long long int) << endl;
    
    unsigned long long int ullimin = numeric_limits<unsigned long long int>::min();
    unsigned long long int ullimax = numeric_limits<unsigned long long int>::max();
    
    cout << " ullimin = " << ullimin << endl;
    cout << " ullimax = " << ullimax << "\n";
    cout << " tamaño de unsigned long long int : " << sizeof(unsigned long long int) << endl;
    
    return 0;
}
