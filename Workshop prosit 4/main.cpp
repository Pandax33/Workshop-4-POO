
#include <iostream>
using namespace std;

typedef struct Tab
{
    int num;
    struct Tab* next;
}Tab;

void afficher(Tab* liste)
{
    while (liste != NULL)
    {
        std::cout << liste->num << std::endl;
        liste = liste->next;
    }
}

int main() {
    //exo 1 Tableau
    int tab[3];
    tab[0]=1;
    tab[1]=2;
    tab[2]=3;
    cout <<tab<< endl;

    //exo 2 Tableau dynamique
    int* tab1;
    tab1= new int [3];
    tab1[0]= 0;
    tab1[1]=1;
    tab1[2]=2;
    for(int i=0;i< 3;i++){
        cout<<"oui "<<tab1[i]<<endl;

    }

    //exo 3 Liste chainée
    Tab* liste;
    Tab v1;
    Tab v2;
    Tab v3;
    liste=&v1;
    v1.next=&v2;
    v2.next=&v3;
    v3.next= NULL;

    v1.num=1;
    v2.num=2;
    v3.num=3;
    afficher(liste);

    return 0;
}