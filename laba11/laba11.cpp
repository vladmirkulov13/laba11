

#include <iostream>
#include <laba1.h>

using namespace std;
class Point
{
public:
    int x, y;
};

int main()
{
   
    Point* mass;
    int n;
    cout << "Input the nuber of points : ";
    cin >> n;
    mass = new Point[n];
    for (int i = 0; i < n; i++)
    {
        cout << "x " << (i + 1) << " :";
        cin >> mass[i].x;
        cout << "y " << (i + 1) << " :";
        cin >> mass[i].y;
    }
    cout << "The smallest distance is " << bruteForce(mass, n) << endl;
    system("pause");
    return 0;
}

