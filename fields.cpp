#include "iostream"
using namespace std;

#include "units.h"
using namespace units;
using namespace length;
using namespace time;
using namespace mass;
using namespace charge;
using namespace force;

int main(int argc, char** argv)
{
 cout << "*** Planck units (NIST 2019 CODATA values) ***" << endl;
 auto Pl = meter_t(1.616255e-35);
 cout << "Planck length: " << Pl << endl;
 auto Pt = second_t(5.391247e-44);
 cout << "Planck time: " << Pt << endl;
 auto Pm = kilogram_t(2.176434e-8);
 cout << "Planck mass: " << Pm << endl;
 auto Pc = coulomb_t(1.8755468e-18);
 cout << "Planck charge: " << Pc << endl;

 cout << endl;

 cout << "*** Related constants ***" << endl;
 auto Cv = Pl / Pt;
 cout << "Speed of light: " << Cv << endl;
 auto Cv2 = Cv * Cv;
 cout << "Speed of light squared: " << Cv2 << endl;
 auto Cr = Pl / Pm;
 cout << "Length over mass constant: " << Cr << endl;
 auto Lm = Pl * Pm;
 cout << "Length-mass constant: " << Lm << endl;
/*
  Artifact introduced by the definition of the ampere

  https://en.wikipedia.org/wiki/Ampere#Former_definition_in_the_SI
*/
 auto ampere_scaling_factor = 1e-7;
 auto Pc2_ = Lm / ampere_scaling_factor;
 cout << "Length-mass (with scaling removed): " << Pc2_ << endl;
 auto Pc2 = Pc * Pc;
 cout << "Planck charge squared: " << Pc2 << " (Same as above!)" << endl;
 auto Cf = Lm / (Pt * Pt);
 cout << "Planck force: " << Cf << endl;
 auto Ce = Cf * Pl;
 cout << "Planck energy: " << Ce << endl;
 auto Cb = Ce * Pt;
 cout << "Reduced planck's constant: " << Cb << endl;
 auto Pi = 4 * atan(double(1.0));
 auto Ch = 2 * Pi * Cb;
 cout << "Planck's constant: " << Ch << endl;

 cout << endl;

 cout << "*** The five fundamental forces of nature? ***" << endl;

 cout << endl;
  
 auto F1 = Cv2; // ie: Cv^2 * Cr^0
 cout << "Field(1) [electromagnetic]: " << F1 << endl;
 auto V1 = Cf / F1;
 cout << "Field(1) variables: " << V1 << endl;

 cout << endl;

 auto F2 = Cv2 * Cr; // ie: Cv^2 * Cr^1
 cout << "Field(2) [gravitational]: " << F2 << endl;
 auto V2 = Cf / F2;
 cout << "Field(2) variables: " << V2 << endl;

 cout << endl;

 auto F3 = Cv2 * Cr * Cr; // ie: Cv^2 * Cr^2
 cout << "Field(3) [quark field?]: " << F3 << endl;
 auto V3 = Cf / F3;
 cout << "Field(3) variables: " << V3 << endl;

 cout << endl;

 auto F4 = Cv2 * Cr * Cr * Cr; // ie: Cv^2 * Cr^3
 cout << "Field(4) [X17 particle?]: " << F4 << endl;
 auto V4 = Cf / F4;
 cout << "Field(4) variables: " << V4 << endl;

 cout << endl;

 auto F5 = Cv2 * Cr * Cr * Cr * Cr; // ie: Cv^2 * Cr^4
 cout << "Field(5) [???]: " << F5 << endl;
 auto V5 = Cf / F5;
 cout << "Field(5) variables: " << V5 << endl;
}

