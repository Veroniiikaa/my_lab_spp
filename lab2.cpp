#include <iostream>
using namespace std;
void
calculateRectangularParallelepipedProperties(int w, int l, int h, int& volume, int& LateralArea) {
    volume =w*l*h;
    LateralArea = 2*(w*h+l*h);

}
int main(){
    int w,l,h;
    cout << "\nEnter w:";
    cin >> w;
     cout << "\nEnter l:";
    cin >> l;
     cout << "\nEnter h:";
    cin >> h;
    int volume, LateralArea;

    calculateRectangularParallelepipedProperties(w,l,h, volume,LateralArea);
    cout<<"VolumeoftheRectangularParallelepiped"<< volume;
    cout<<"VolumeoftheRectangularParallelepiped"<<LateralArea;
    return 0;
}