
#include <iostream>
using namespace std;

double discount(double day)
{
    if (day > 10 && day <= 30)
    {
        return (day - 10);
        
    }
    else if (day > 30)
    {
        return (20) + ((day - 30) * 2);
    }
    else
    {
        return 0;
    }
}
double price(double height, double weight, double lenght, double width)
{
    
    return ((lenght*width * 2) + (lenght*height * 2) + (width*height * 2)) * 10;
    
    
    
}
double pricein(double height, double weight, double lenght, double width)
{
    
    
    return (((2 * (width*lenght)*6.4516) + (2 * (width*height)*6.4516) + (2 * (lenght*height)*6.4516)) * (weight * 0.00220462262)) * 10;
    
    
}

int main(){

    double hei = 0;
    double we = 0;
    double le = 0;
    double wi = 0;
    double day = 0;
    int am = 0;
    double b = 0;
    char mem;
    double total[10];
    
    cout << "Are you member:Y/N" << endl;
    cin >> mem;
    cout << "How many books??" << endl;
    cin >> am;
    
    
    for (int i = 0; i<am; i++)
    {
        
       
        cout << "height" << endl;
        cin >> hei;
        cout << "lenght" << endl;
        cin >> le;
        cout << "width" << endl;
        cin >> wi;
        cout << "weight" << endl;
        cin >> we;
        cout << "day" << endl;
        cin >> day;
        
        
        cout << pricein(hei, we, le, wi) - discount(day) << endl;
        total[i] = pricein(hei, we, le, wi) - discount(day);
    }
    cout << "______________________________________________" << endl;
    
    for (int i = 0; i<am - 1; i++)
    {
        
            if (total[0] > total[i + 1])
            {
                b = total[0];
                total[0] = total[i + 1];
                total[i + 1] = b;
                
            
            
            
        }
        
    }
    for (int i = 0; i<am; i++) {
        
        cout << total[i] << endl;
    }
    cout << "______________________________________________" << endl;
    if (mem == 'Y')
    {
        
        if (am >= 3)
        {
            cout << "The cheapest book" << total[0] << endl;
            cout << "After discount" << total[0] - (total[0] * 20) / 100 << endl;
            total[0] = total[0] - (total[0] * 20) / 100;
            for (int i = 0; i < am; i++)
            {
                cout << total[i] << endl;
            }
        }
        else
        {
            for (int i = 0; i < am; i++)
            {
                cout << total[i] << endl;
            }
        }
    }
    
    total[am] = 0;
    for (int i = 0; i < am; i++)
    {
        total[am] = total[am] + total[i];
    }
    cout << "______________________________________________" << endl;
    cout << total[am] << endl;
    
    return 0;
    
}
