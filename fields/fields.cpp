#include "iostream"
#include "algorithm"
#include "sstream"
#include "vector"
#include "string"
#include "units.h"

using namespace std;
using namespace units;
using namespace length;
using namespace time;
using namespace mass;
using namespace charge;
using namespace force;

int main(int argc, char** argv)
{
 cout << "*** Planck units ***" << endl;
 auto Pl = meter_t(1.616255e-35);
 cout << "Planck length: " << Pl << endl;
 auto Pt = second_t(5.391247e-44);
 cout << "Planck time: " << Pt << endl;
 auto Pm = kilogram_t(2.176434e-8);
 cout << "Planck mass: " << Pm << endl;
 auto Pc = coulomb_t(1.8755468e-18);
 cout << "Planck charge: " << Pc << endl;
 cout << "*** Related constants ***" << endl;
 auto Cv = Pl / Pt;
 cout << "Speed of light: " << Cv << endl;
 auto Cv2 = Cv * Cv;
 cout << "Speed of light squared: " << Cv2 << endl;
 auto Cr = Pl / Pm;
 cout << "Length over mass constant: " << Cr << endl;
 auto Lm = Pl * Pm;
 cout << "Length-mass constant: " << Lm << endl;
 auto Cf = Lm / (Pt * Pt);
 cout << "Planck force: " << Cf << endl;
 auto Ce = Cf * Pl;
 cout << "Planck energy: " << Ce << endl;
 auto Cb = Cf * Pl * Pt;
 cout << "Reduced planck's constant: " << Cb << endl;
 auto Pi = 4 * atan(double(1.0));
 auto Ch = 2 * Pi * Cb;
 cout << "Planck's constant: " << Ch << endl;
 cout << "*** Possible force field constants ***" << endl;
 auto F0 = Cv2; // ie: Cv2 * Cr^0  
 cout << "Field(0) [electromagnetic]: " << F0 << endl; 
 auto V0 = Cf / F0;
 cout << "Field(0) variables: " << V0 << endl;
 auto F1 = Cv2 * Cr; // ie: Cv2 * Cr^1  
 cout << "Field(1) [gravitational]: " << F1 << endl; 
 auto V1 = Cf / F1;
 cout << "Field(1) variables: " << V1 << endl;
 auto F2 = Cv2 * Cr * Cr; // ie: Cv2 * Cr^2  
 cout << "Field(2) [strong force?]: " << F2 << endl;
 auto V2 = Cf / F2;
 cout << "Field(2) variables: " << V2 << endl;
 auto F3 = Cv2 * Cr * Cr * Cr; // ie: Cv2 * Cr^3  
 cout << "Field(3) [X17 particle?]: " << F3 << endl;
 auto V3 = Cf / F3;
 cout << "Field(3) variables: " << V3 << endl;
 cout << "*** Connection between charge and length-mass? ***" << endl;
 auto Pc2 = Pc * Pc;
 cout << "Planck charge squared: " << Pc2 << endl; 
 auto scale = 1e-7;
 auto Pc2_ = Lm / scale;
 cout << "Length-mass with scaling removed: " << Pc2_ << endl;
}
    