#include <iostream>

using namespace std;

int main() {
  int n;
  int HP, MP, ATK, DEF;
  int HP_item, MP_item, ATK_item, DEF_item;
  int CP;

  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> HP >> MP >> ATK >> DEF;
    cin >> HP_item >> MP_item >> ATK_item >> DEF_item;

    HP += HP_item;
    MP += MP_item;
    ATK += ATK_item;
    DEF += DEF_item;
    
    if (HP < 1) HP = 1;
    if (MP < 1) MP = 1;
    if (ATK < 0) ATK = 0;

    CP = HP + (5 * MP) + 2 * (ATK + DEF);

    cout << CP << endl;
  }

  return 0;
}
