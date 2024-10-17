#include <iostream>
#include <string>
#include <ctime>

using namespace std;

struct Avengers
{
    string hero;
    double intelligence;
    double leadership;
    double outfit;
    double powers;
    double damage;
};

/*-------------------------------1st Requirement-------------------------------------------------------*/
void Change_Const ();
/*-------------------------------2nd Requirement-------------------------------------------------------*/
Avengers *Read_Avengers ();                                          
string *Print_String ();
int **Read_2D_Mat ();
void Free_Memory (Avengers *);
void Free_Memory (string *);
void Free_Memory (int **, const int);
/*-------------------------------3rd Requirement-------------------------------------------------------*/
double Max_Stats (const Avengers *, string &, const int);
int &Search_Lowest_Even (int **, const int, const int);
/*-------------------------------4th Requirement-------------------------------------------------------*/
double Avg_Stats (const Avengers *, const int);
double Avg_Stats (int, int, int);
void Print_Avg_Stats (int, int, int);
void Print_Avg_Stats (const Avengers *, const int);
void Check_Memory (Avengers *);
void Check_Memory (string *);
void Check_Memory (int **);
void Check_Memory (int *);
void Append_Characters (char, char, char = '#', char = '$');
/*---------------------Additional Helper Functions---------------------------------------------*/
void Print_Avengers (const Avengers *, const int);
void Print_Strongest_Avenger (const Avengers *, string, const int);
int Random_Generator (int, int);
void Print_2D_Mat (int **, const int, const int);

int main (int argc, char **argv)
{
    Avengers *Marvel;
    double max_stats;
    string x;
    int **Matrix;

    srand (time (NULL));
    
    Change_Const ();                                          // 1st Requirement
    Marvel = Read_Avengers ();                                // 2nd Requirement
    Print_Avengers (Marvel, 4);                               // Additional Helper Functions
    Print_Avg_Stats (Marvel, 4);                              // 4th Requirement
    Print_Strongest_Avenger (Marvel, x, 4);                   // Additional Helper Functions
    Free_Memory (Marvel);                                     // 2nd Requirement
    Print_Avg_Stats (3, 4, 11);                               // 4th Requirement
    Matrix = Read_2D_Mat ();                                  // 2nd Requirement
    Print_2D_Mat (Matrix, 3, 3);                              // Additional Helper Functions
    int &lowest_even = Search_Lowest_Even (Matrix, 3, 3);     // 3rd Requirement
    lowest_even = 999999;
    Print_2D_Mat (Matrix, 3, 3);                              // Additional Helper Functions
    Free_Memory (Matrix, 3);                                  // 2nd Requirement
    Append_Characters ('a', 'b', 'c', 'd');                   // 4th Requirement
	Append_Characters ('a', 'b', 'c');                        // 4th Requirement
	Append_Characters ('a', 'b');                             // 4th Requirement
    
    return 0;
}

/*----------------------------------------------------1st Requirement-----------------------------------------------------------------------------------------------*/

void Change_Const ()
{
    const double e = 2.17182;
    double *ptr;
    
    ptr = (double *) &e;
    *ptr = 4.59412;
    cout << "e    : " << e << endl << "*ptr : " << *ptr << endl;
    cout << "&e   : " << &e << endl << "&ptr : "  << &(*ptr) << endl;
    cout << "---------------------------------------------------------------" << endl;
}

/*----------------------------------------------------2nd Requirement-----------------------------------------------------------------------------------------------*/

Avengers *Read_Avengers ()
{
    Avengers *marvel = new Avengers [4];
    
    Check_Memory (marvel);                                    // 4th Requirement
    marvel->hero = "Iron Man";
    marvel->intelligence = 8.540;
    marvel->leadership = 6.171;
    marvel->outfit = 7.942;
    marvel->powers = 5.971;
    marvel->damage = 5.914;
    (marvel + 1)->hero = "Captain America";
    (marvel + 1)->intelligence = 6.110;
    (marvel + 1)->leadership = 8.114;
    (marvel + 1)->outfit = 6.514;
    (marvel + 1)->powers = 4.457;
    (marvel + 1)->damage = 6.600;
    (marvel + 2)->hero = "Thor";
    (marvel + 2)->intelligence = 4.949;
    (marvel + 2)->leadership = 5.485;
    (marvel + 2)->outfit = 5.485;
    (marvel + 2)->powers = 7.914;
    (marvel + 2)->damage = 8.142;
    (marvel + 3)->hero = "Hulk";
    (marvel + 3)->intelligence = 6.314;
    (marvel + 3)->leadership = 3.314;
    (marvel + 3)->outfit = 3.457;
    (marvel + 3)->powers = 7.401;
    (marvel + 3)->damage = 8.542;
    
    return marvel;
}

string *Print_String ()
{
	string *p;
	
    p = new string;
    Check_Memory (p);                                        // 4th Requirement
	*p = "Avenger       Intelligence  Leadership  Outfit  Powers  Damage\n\n";
	
    return p;
}

int **Read_2D_Mat ()
{
    int **Mat = new int* [3];
    
    Check_Memory (Mat);                                      // 4th Requirement
    for (int i = 0; i < 3; i++)
    {
        *(Mat + i) = new int [3];
        Check_Memory (Mat[i]);                               // 4th Requirement
    }
    for (int j = 0; j < 3; j++)
        for (int k = 0; k < 3; k++)
        {
            Mat[j][k] = Random_Generator (1, 100);           // Additional Helper Functions
        }
    
    return Mat;
}

void Free_Memory (Avengers *Mar)
{
    delete [] Mar;
}

void Free_Memory (string *P)
{
    delete P;
}

void Free_Memory (int **Mar, const int N)
{
    for (int i = 0; i < N; i++)
        delete [] Mar[i];
    delete [] Mar;
}

/*----------------------------------------------------3rd Requirement-----------------------------------------------------------------------------------------------*/

double Max_Stats (const Avengers *M, string &avenger, const int N)
{
    double max;
    
    max = Avg_Stats (M, 0);                                  // 4th Requirement
    avenger = M->hero;
    for (int i = 0; i < N; i++)
    {
        if (Avg_Stats (M, i) >= max)
        {
            max = Avg_Stats (M, i);                          // 4th Requirement
            avenger = (M + i)->hero;
        }
    }
    
    return max;
}

int &Search_Lowest_Even (int **Mat, const int M, const int N)
{
    int min = 100;
    int k, l;
    
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
        {
            if (Mat[i][j] % 2 == 0)
                if (Mat[i][j] <= min)
                {
                    min = Mat[i][j];
                    k = i;
                    l = j;
                }
        }

    return Mat[k][l];
}

/*----------------------------------------------------4th Requirement-----------------------------------------------------------------------------------------------*/

double Avg_Stats (const Avengers *Mar, const int i)
{
    double avg, sum;
   
    sum = (Mar + i)->intelligence + (Mar + i)->leadership + (Mar + i)->outfit + (Mar + i)->powers + (Mar + i)->damage;
    avg = sum / 5;
    
    return avg;
}

double Avg_Stats (int x, int y, int z)
{
    double avg;
    
    avg = (x + y + z) / 3;
    
    return avg;
}

void Print_Avg_Stats (const Avengers *M, const int N)
{
    double avg_stats;
    string avenger;
    
    cout << "---------------------------------------------------------------" << endl;
    cout << "Avenger       Average Ability" << endl << endl;
    
    for (int i = 0; i < N; i++)
    {
        switch (i)
        {
            case 0 :
                avg_stats = Avg_Stats (M, i);                // 4th Requirement
                avenger = (M + i)->hero;
                cout << avenger << "       " << avg_stats << endl;
                break;
            case 1 :
                avg_stats = Avg_Stats (M, i);                // 4th Requirement
                avenger = (M + i)->hero;
                cout << avenger << "  " << avg_stats << endl;
                break;
            case 2 : 
                avg_stats = Avg_Stats (M, i);                // 4th Requirement
                avenger = (M + i)->hero;
                cout << avenger << "     " << avg_stats << endl;
                break;
            case 3 :
                avg_stats = Avg_Stats (M, i);                // 4th Requirement
                avenger = (M + i)->hero;
                cout << avenger << "    " << avg_stats << endl;
                break;
        }
    }
}

void Print_Avg_Stats (int x, int y, int z)
{
    double avg;
    
    avg = Avg_Stats (x, y, z);                               // 4th Requirement
    cout << "The average of the three integers (3, 4, 11) is : " << avg << endl;
    cout << "---------------------------------------------------------------" << endl;
}

void Check_Memory (Avengers *Mar)
{
    if (Mar == NULL)
    {
        system ("clear");
        cout << "Memory allocation problem" << endl;
        exit (1);
    }
}

void Check_Memory (string *Str)
{
    if (Str == NULL)
    {
        system ("clear");
        cout << "Memory allocation problem" << endl;
        exit (1);
    }
}

void Check_Memory (int **P)
{
    if (P == NULL)
    {
        system ("clear");
        cout << "Memory allocation problem" << endl;
        exit (1);
    }
}

void Check_Memory (int *P)
{
    if (P == NULL)
    {
        system ("clear");
        cout << "Memory allocation problem" << endl;
        exit (1);
    }
}

void Append_Characters (char a, char b, char c, char d)
{
	cout << a << b << c << d << endl;	
}

/*----------------------------------------------------Additional Helper Functions---------------------------------------------------------------------------*/

void Print_Avengers (const Avengers *M, const int N)
{
    string *Pin;
	
    Pin = Print_String ();                                       // 2nd Requirement
	cout << *Pin;
	Free_Memory (Pin);                                           // 2nd Requirement
	for (int i = 0; i < N; i++)
        cout << (M + i)->hero << "\t" << (M + i)->intelligence << "\t" << (M + i)->leadership << "\t" << (M + i)->outfit << "\t   " << (M + i)->powers << "\t " << (M + i)->damage << endl;
}

void Print_Strongest_Avenger (const Avengers *Mar, string hero, const int N)
{
    double max_stats;
    
    max_stats = Max_Stats (Mar, hero, N);                        // 3rd Requirement
    cout << endl << "The strongest 'Avenger' is " << hero << " with an average ability of: " << max_stats << endl;
    cout << "---------------------------------------------------------------" << endl;
}

int Random_Generator (int L1, int L2)
{
    return rand () % (L2 - L1 + 1) + L1;
}

void Print_2D_Mat (int **Mat, const int M, const int N)
{
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            cout << "Mat[" << i << "][" << j << "] = " << Mat[i][j] << endl;
    cout << "---------------------------------------------------------------" << endl;
}
