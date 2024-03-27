#include <iostream>
using namespace std;

int main(){

  int CPF, CPFtemp, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, total, resultado, digVer1, digVer2;

  cout << "Insira os 9 ou 8 primeiros digitos do CPF: \n\n"; //pede ao usuário que insira os primeiros dígitos que serão utilizados para criação dos dígitos verificadores
  cin >> CPF;
  CPFtemp = CPF;

  if (CPF > 99999999){

      C9 = CPFtemp % 10;
      CPFtemp = CPFtemp / 10;
      C8 = CPFtemp % 10;
      CPFtemp = CPFtemp / 10;
      C7 = CPFtemp % 10;
      CPFtemp = CPFtemp / 10;
      C6 = CPFtemp % 10;
      CPFtemp = CPFtemp / 10;
      C5 = CPFtemp % 10;
      CPFtemp = CPFtemp / 10;
      C4 = CPFtemp % 10;
      CPFtemp = CPFtemp / 10;
      C3 = CPFtemp % 10;
      CPFtemp = CPFtemp / 10;
      C2 = CPFtemp % 10;
      CPFtemp = CPFtemp / 10;
      C1 = CPFtemp % 10;
      CPFtemp = CPFtemp / 10;

      C1 = C1 * 10;
      C2 = C2 * 9;
      C3 = C3 * 8;
      C4 = C4 * 7;
      C5 = C5 * 6;
      C6 = C6 * 5;
      C7 = C7 * 4;
      C8 = C8 * 3;
      C9 = C9 * 2;

      /*cout << C1 << endl;
      cout << C2 << endl;
      cout << C3 << endl;
      cout << C4 << endl;
      cout << C5 << endl;
      cout << C6 << endl;
      cout << C7 << endl;
      cout << C8 << endl;
      cout << C9 << endl;*/

      total = C1 + C2 + C3 + C4 + C5 + C6 + C7 + C8 + C9;
     // cout << total << endl;

      if ((total % 11) < 2 ){
        digVer1 = 0;
        C10 = digVer1;
      } else{
        digVer1 = 11 - (total % 11);
        C10 = digVer1;
      }
     // cout << digVer1 << endl;
     // cout << "\n O CPF completo eh: " << CPF << "-" << digVer1 << endl;

      CPFtemp = CPF;

      C9 = CPFtemp % 10;
      CPFtemp = CPFtemp / 10;
      C8 = CPFtemp % 10;
      CPFtemp = CPFtemp / 10;
      C7 = CPFtemp % 10;
      CPFtemp = CPFtemp / 10;
      C6 = CPFtemp % 10;
      CPFtemp = CPFtemp / 10;
      C5 = CPFtemp % 10;
      CPFtemp = CPFtemp / 10;
      C4 = CPFtemp % 10;
      CPFtemp = CPFtemp / 10;
      C3 = CPFtemp % 10;
      CPFtemp = CPFtemp / 10;
      C2 = CPFtemp % 10;
      CPFtemp = CPFtemp / 10;
      C1 = CPFtemp % 10;
      CPFtemp = CPFtemp / 10;

      C1 = C1 * 11;
      C2 = C2 * 10;
      C3 = C3 * 9;
      C4 = C4 * 8;
      C5 = C5 * 7;
      C6 = C6 * 6;
      C7 = C7 * 5;
      C8 = C8 * 4;
      C9 = C9 * 3;
      C10 = C10 * 2;

      /*cout << C1 << endl;
      cout << C2 << endl;
      cout << C3 << endl;
      cout << C4 << endl;
      cout << C5 << endl;
      cout << C6 << endl;
      cout << C7 << endl;
      cout << C8 << endl;
      cout << C9 << endl;
      cout << C10 << endl;*/

      total = C1 + C2 + C3 + C4 + C5 + C6 + C7 + C8 + C9 + C10;
      // cout << total << endl;

      if ((total % 11) < 2 ){
        digVer2 = 0;
      } else{
        digVer2 = 11 - (total % 11);
      }
      cout << "\nO CPF completo eh: " << CPF << "-" << digVer1 << digVer2 << endl;
      // cout << digVer2 << endl;

  } else { //else para CPF com 8 dígitos

      C8 = CPFtemp % 10;
      CPFtemp = CPFtemp / 10;
      C7 = CPFtemp % 10;
      CPFtemp = CPFtemp / 10;
      C6 = CPFtemp % 10;
      CPFtemp = CPFtemp / 10;
      C5 = CPFtemp % 10;
      CPFtemp = CPFtemp / 10;
      C4 = CPFtemp % 10;
      CPFtemp = CPFtemp / 10;
      C3 = CPFtemp % 10;
      CPFtemp = CPFtemp / 10;
      C2 = CPFtemp % 10;
      CPFtemp = CPFtemp / 10;
      C1 = CPFtemp % 10;
      CPFtemp = CPFtemp / 10;

      /*cout << C1 << endl;
      cout << C2 << endl;
      cout << C3 << endl;
      cout << C4 << endl;
      cout << C5 << endl;
      cout << C6 << endl;
      cout << C7 << endl;
      cout << C8 << endl;*/

      C1 = C1 * 9;
      C2 = C2 * 8;
      C3 = C3 * 7;
      C4 = C4 * 6;
      C5 = C5 * 5;
      C6 = C6 * 4;
      C7 = C7 * 3;
      C8 = C8 * 2;

      /*cout << C1 << endl;
      cout << C2 << endl;
      cout << C3 << endl;
      cout << C4 << endl;
      cout << C5 << endl;
      cout << C6 << endl;
      cout << C7 << endl;
      cout << C8 << endl;*/

      total = C1 + C2 + C3 + C4 + C5 + C6 + C7 + C8;
     // cout << total << endl;

      if ((total % 11) < 2 ){
        digVer1 = 0;
        C9 = digVer1;
      } else{
        digVer1 = 11 - (total % 11);
        C9 = digVer1;
      }
     // cout << digVer1 << endl;
     // cout << "\nO CPF completo eh: " << CPF << "-" << digVer1 << endl;

      CPFtemp = CPF;

      C8 = CPFtemp % 10;
      CPFtemp = CPFtemp / 10;
      C7 = CPFtemp % 10;
      CPFtemp = CPFtemp / 10;
      C6 = CPFtemp % 10;
      CPFtemp = CPFtemp / 10;
      C5 = CPFtemp % 10;
      CPFtemp = CPFtemp / 10;
      C4 = CPFtemp % 10;
      CPFtemp = CPFtemp / 10;
      C3 = CPFtemp % 10;
      CPFtemp = CPFtemp / 10;
      C2 = CPFtemp % 10;
      CPFtemp = CPFtemp / 10;
      C1 = CPFtemp % 10;
      CPFtemp = CPFtemp / 10;

      C1 = C1 * 10;
      C2 = C2 * 9;
      C3 = C3 * 8;
      C4 = C4 * 7;
      C5 = C5 * 6;
      C6 = C6 * 5;
      C7 = C7 * 4;
      C8 = C8 * 3;
      C9 = C9 * 2;

      /*cout << C1 << endl;
      cout << C2 << endl;
      cout << C3 << endl;
      cout << C4 << endl;
      cout << C5 << endl;
      cout << C6 << endl;
      cout << C7 << endl;
      cout << C8 << endl;
      cout << C9 << endl;*/

      total = C1 + C2 + C3 + C4 + C5 + C6 + C7 + C8 + C9;
     // cout << total << endl;

      if ((total % 11) < 2 ){
        digVer2 = 0;
      } else{
        digVer2 = 11 - (total % 11);
      }

    //  cout << digVer2 << endl;

      cout << "\nO CPF completo eh: 0" << CPF << "-" << digVer1 << digVer2 << endl;
  }

  return 0;
}
