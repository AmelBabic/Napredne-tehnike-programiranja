#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

void Unos(char imePrezime[], char fakultet[], int&godStudija, int velicina)
{
    cout<<"Unesite ime i prezime: ";
    cin.getline(imePrezime, velicina);
    cout<<"Unesite fakultet: ";
    cin.getline(fakultet, velicina);
    cout<<"Unesite godinu studija: ";
    cin>>godStudija;

}
void ispis(char imeprezime[], char fakultet[], int godstudija)
{
    cout<<imeprezime<<endl;
    cout<<fakultet<<endl;
    cout<<godstudija<<endl;
}
void info(const char* tekst)
{
    int brojrazmaka=0;
    int brojcifara=0;
    int brojintrp=0;
    int brojmalih=0;
    int brojvelikih=0;
    for (int i=0;i<strlen(tekst);i++)
    {
        if (isspace(tekst[i]))
        {
            brojrazmaka++;
        }
        if (isdigit(tekst[i]))
        {
            brojcifara++;
        }
        if (ispunct(tekst[i]))
        {
            brojintrp++;
        }
        if (islower(tekst[i]))
        {
            brojmalih++;
        }
        if (isupper(tekst[i]))
        {
            brojvelikih++;
        }
    }
    cout<<"Broj razmaka: "<<brojrazmaka<<endl;
    cout<<"Broj cifara: "<<brojcifara<<endl;
    cout<<"Broj interpukcijskih znakova: "<<brojintrp<<endl;
    cout<<"Broj malih slova: "<<brojmalih<<endl;
    cout<<"Broj velikih slova: "<<brojvelikih<<endl;
}
void pretvori(char imeprezime[])
{
    for (int i=0;i<strlen(imeprezime);i++)
    {
        if (isupper(imeprezime[i]))
        {
            imeprezime[i]=tolower(imeprezime[i]);
        }else imeprezime[i]=toupper(imeprezime[i]);
    }
    cout<<endl;
    cout<<imeprezime;
}

int main()
{
    char imePrezime [40];
    char fakultet [40];
    int godStudija;

    Unos(imePrezime,fakultet,godStudija,40);

    if (islower(fakultet[0]))
    {
        fakultet[0]=toupper(fakultet[0]);
    }
    cout<<fakultet;
    bool validanUnos = false;
    while (!validanUnos)
    {
        int duzina = strlen(imePrezime);
        cout << "\nDuzina niza imePrezime: " << duzina;

        bool imaspace = false;
        bool imacifre = false;
        for (int i = 0; i < duzina; i++)
        {
            if (isspace(imePrezime[i]))
                imaspace = true;
            if (isdigit(imePrezime[i]))
                imacifre = true;
        }

        if (!imaspace)
        {
            cout << "\nGreska: nema razmaka izmedju imena i prezimena!\n";
        }
        if (imacifre)
        {
            cout << "\nGreska: imePrezime ne smije sadrzavati cifre!\n";
        }

        if (imaspace && !imacifre)
        {
            validanUnos = true;
        }
        else
        {
            cout << "Ponovo unesite ime i prezime: ";
            cin.ignore();
            cin.getline(imePrezime, 40);
        }
    }
    int duzina = strlen(imePrezime);
    char tempIP[duzina+1];
    strncpy(tempIP, imePrezime, duzina);
    if (strcmp(imePrezime, tempIP)==0)
    {
        cout<<"\nimePrezime i tempIP su identicni";
    }else cout<<"\nimePrezime i tempIP nisu identicni";
    strcat_s(fakultet, " UNZE");
    cout<<endl;
    ispis(imePrezime,fakultet,godStudija);
    char pretraga[20];
    cout<<"Unesite rijec za pretragu: ";
    cin.ignore();
    cin.getline(pretraga,20,'\n');
    char *pok=strstr(fakultet,pretraga);
    if (pok==nullptr)
    {
        cout<<"Trazena rijec nije pronadjena u fakultetu";
    }else cout<<"Trazena rijec je pronadjena u fakultetu";
    char Godstudija[5];
    itoa(godStudija,Godstudija,10);
    char tekst[100];
    cout<<"\n Unesite neki tekst: ";
    cin.getline(tekst, 100, '\n');
    info(tekst);
    pretvori(imePrezime);
    return 0;
}