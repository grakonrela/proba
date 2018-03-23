#include <iostream>
#include "character.h"

using namespace std;

int main()
{
    Character czarodziejowicz(1);
    Character barb(2);
    Character zlodziej(3);
    Character druid(4);
    Character rycerz(5);
    Character lucznik(6);
    Character ksiarze(7);
    Character kaplan(8);
    Character mroczny_druid(9);
    Character krol(10);
    Character general_goblinow(11);
    Character krol_goblinow(12);

    char status='n';
    while(status=='n')
    {
        int i=0;
        for(i; i<12; i++)
        {
            if(i==0)
                mroczny_druid.Your_Turn();
            else if(i==1)
                general_goblinow.Your_Turn();
            else if(i==2)
                krol.Your_Turn();
            else if(i==3)
                wizard.Your_Turn();
            else if(i==4)
                barb.Your_Turn();
            else if(i==5)
                rycerz.Your_Turn();
            else if(i==6)
                zlodziej.Your_Turn();
            else if(i==7)
                druid.Your_Turn();
            else if(i==8)
                kaplan.Your_Turn();
            else if(i==9)
                lucznik.Your_Turn();
            else if(i==10)
                ksiarze.Your_Turn();
            else if(i==11)
                krol_goblinow.Your_Turn();
        }
        system("cls");
        cout << "Minela pelna kolejka."<<endl<<"Gra zostala zapisana."<<endl<<"Zamknac gre?(y/n)"<<endl;
        cin >> status;
        system("cls");
        if(i==12)
            i=0;

        wizard.Save_To_File( wizard,  barb,  zlodziej,  druid,  rycerz,  lucznik,  ksiarze,  kaplan,  mroczny_druid,  krol,  general_goblinow,  krol_goblinow);
    }

    cout << "Aby zakonczyc nacisnij dowolny klawisz.";
    exit(0);

    return 0;
}

