
#include <iostream>
#include <string.h>
#include <climits>
#include <fstream>
#include <Windows.h>
using namespace std;
#define INF 999
int mindistance(float distance[], bool stat[])
{
    float minimum = INT_MAX, ind;
    for (int k = 0; k < 12; k++)
    {
        if (stat[k] == false && distance[k] <= minimum)
        {
            minimum = distance[k];
            ind = k;
        }
    }
    return ind;
}
void dijkstra(float graph[12][12], int source, string stations[12])
{
    float distance[12];
    bool stat[12];
    for (int k = 0; k < 12; k++)
    {
        distance[k] = INT_MAX;
        stat[k] = false;
    }
    distance[source] = 0;
    for (int k = 0; k < 12; k++)
    {
        int m = mindistance(distance, stat);
        stat[m] = true;
        for (int k = 0; k < 12; k++)
        {
            if (!stat[k] && graph[m][k] && distance[m] != INT_MAX && distance[m] + graph[m][k] < distance[k])
                distance[k] = distance[m] + graph[m][k];
        }
    }
    // cout << "\n\n\nMinimum Number of Stations from "
    //      << "[" << stations[source] << "]"
    //      << " To every station\n\n\n"
    //      << endl;
    int n;
    cout<<endl<<endl;
    cout << "Enter the station code of destination:";
    cin >> n;
    // for (int k = 0; k < 12; k++)
    // {
    //         if(k==source)
    //         continue;

    //     cout << "Enter"
    //          << " " << k << " "
    //          << "To Check Distance Between " << stations[source] << " To "
    //          << "[" << stations[k] << "]"
    //          << " "
    //          << "Station" << endl;
    // }
    cout<<endl<<endl;
    cout << "\t\t----------------Total Distance from source to destination----------------"<<endl<<endl;
    cout<<"\t\t"<<stations[source]<<" <------------> "<<stations[n]<<" = "<<distance[n]<<" km"<<endl;
}

int login()
{
    char dum, u_name[30], name[30], g_pwd[30], pwd[30];
    int flag = 0, s = 1;
    cout << "\n\n\n\n\n\n\t\t\t\t\t  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb" << endl;
    cout << "\t\t\t\t\t\t*WELLCOME TO LOGIN*" << endl;
    cout << "\t\t\t\t\t  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb " << endl;
    if (s == 1)
    {

        cout << "Enter your USER NAME  : " << endl;
        cin >> name;
    }

    cout << "Enter the PASSWORD   : " << endl;
    cin >> pwd;
    fstream f;
    f.open("user_logins.txt", ios::in);
    f.seekg(0);
    while (f)
    {
        f.get(dum);
        f.get(u_name, 30);
        f.get(dum);
        f.get(g_pwd, 30);
        if (strcmp(u_name, name) == 0 && strcmp(pwd, g_pwd) == 0)
        {
            flag = 1;
           cout<<"\t\t\t You have successfully logged in !"<<endl;
            break;
        }
        else if (strcmp(u_name, name) == 0 && strcmp(pwd, g_pwd) != 0)
        {
            do
            {
              
                cout<<"----INCORRECT PASSWORD!----"<<endl;
                cout << "Re-Enter the PASSWORD : " << endl;

                cin >> pwd;
            } while (strcmp(pwd, g_pwd) != 0);

            
            cout<<"\t\t\t You have successfully logged in !"<<endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "\n\t\t\tSORRY!!! USER NAME does not Exist, please REGISTER yourself first !" << endl<<endl;
    Sleep(2000);
    system("CLS");
    f.close();
    return flag;
}


void signup()
{
    cout << "\n\n\n\n\n\n\t\t\t\t\t  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb " << endl;
    cout << "\t\t\t\t\t\t*WELLCOME TO SIGNUP*" << endl;
    cout << "\t\t\t\t\t  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb " << endl;
    char name[30], pwd[30], check_pwd[30];
    fstream f;
    f.open("user_logins.txt", ios::in);
    char g_name[30], g_pwd[30], dum;
    int flag;
    cout << "Enter the USER NAME : ";
    string phrase = "Enter your USER NAME And PASSWORD: ";
  
    cin >> name;
    do
    {
        f.seekg(0);
        while (f)
        {
            flag = 1;
            f.get(dum);
            f.get(g_name, 30);
            f.get(dum);
            f.get(g_pwd, 30);
            if (strcmp(g_name, name) == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "\n\t\t\t----SORRY! USER-NAME ALREADY EXIST----" << endl;
            cout << "Enter the USER NAME : ";
            cin >> name;
        }
    } while (flag == 0);
    f.close();
    f.open("user_logins.txt", ios::out | ios::app);
    cout << "Enter your PASSWORD : ";
    cin >> pwd;
    cout << "Re-Enter your PASSWORD : ";
    cin >> check_pwd;
    while (strcmp(pwd, check_pwd) != 0)
    {
        cout << "\t\t\t----INCORRECT PASSWORD!!!----" << endl;
        cout << "Enter your PASSWORD : ";
        cin >> pwd;
        cout << "Re-Enter your PASSWORD : ";
        cin >> check_pwd;
    }
    f << endl
      << name << endl
      << pwd;
    cout << "\n\t\t\t\t\t  YOUR NEW ID IS CREATING PLEASE WAIT";
    for (int i = 0; i < 6; i++)
    {
        cout << ".";
        Sleep(500);
    }
    cout << "\n\n\t\t\t\t\t\aCONGRATULATION!!!YOUR ID CREATED SUCCESSFULL....Please wait";
    Sleep(5000);
    system("CLS");
    f.close();
}
int main()
{
    float graph[12][12] = {
        {0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0},
        {4, 0, 7, 0, 0, 0, 0, 17, 0, 14, 0, 0},
        {0, 7, 0, 5, 0, 0, 0, 0, 0, 15, 10, 0},
        {0, 0, 5, 0, 21, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 21, 0, 33, 0, 12, 0, 0, 0, 0},
        {0, 0, 0, 0, 33, 0, 48, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 48, 0, 20, 0, 0, 0, 0},
        {0, 17, 0, 0, 12, 0, 20, 0, 26, 0, 0, 45},
        {10, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 22},
        {0, 14, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 45, 22, 0, 0, 0}

    };
    int source;
    int n, W, ch, flag;
    char s;
    cout<<"\n\n\n";
     cout<<"\t\t\t-----------------------------------WELLCOME TO MY PROJECT-----------------------------------"<<endl<<endl;;
    do
    {
        cout << endl;
        cout << "\t\t\t\t\t\t\t \t\t\t\t\t_____________________\n";
        cout << "\t\t\t\t\t\t\t \t\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb_____________\xdb\xdb\xdb\xdb\xdb\xdb \n";
        cout << "\t\t\t\t\t\t\t \t\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb 1) LOGIN    \xdb\xdb\xdb\xdb\xdb\xdb\n";
        cout << "\t\t\t\t\t\t\t \t\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb 2) REGISTER \xdb\xdb\xdb\xdb\xdb\xdb\n";
        cout << "\t\t\t\t\t\t\t\t\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb 3) EXIT     \xdb\xdb\xdb\xdb\xdb\xdb\n";
        cout << "\t\t\t\t\t\t\t \t\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb_____________\xdb\xdb\xdb\xdb\xdb\xdb\n";
        cout << "\t\t\t\t\t\t\t \t\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb_____________\xdb\xdb\xdb\xdb\xdb\xdb\n";
        cout << "Enter your Choice : ";
        cin >> ch;
        system("cls");
        switch (ch)
        {
        case 1:
            flag = login();
            break;
        case 2:
            signup();
            cout << "Do you want to LOGIN (Y/N)? : ";
            cin >> s;
            if (s == 'y' || s == 'Y')
                flag = login();
            else
            {
                cout<<"\n\n\n";
               cout<<"\t\t\t-------------------------------Thank you have a nice day !-------------------------------\t\t\t"<<endl;
                exit(1);
            }
            break;
        case 3:
            cout<<"\n\n\n";
            cout<<"\t\t\t-------------------------------Thank you have a nice day !-------------------------------\t\t\t"<<endl;
            exit(0);
            break;
        default:
            cout << "\t\t\t----INCORRECT CHOICE!!!----" << endl;
            break;
        }
    } while (flag != 1);
    if (flag == 1)
    {
        string stations[12] = {"Chembur", "Kurla", "Dadar", "Bandra", "Borevali", "Virar", "Kalyan", "Thane", "Vashi", "CST", "ChurchGate", "Panvel"};
        char x;

       
        do
        {
            cout << "\t\t\t-------------------------------Mumbai Local Minimum Distance Calculator-------------------------------\t\t\t\n\n"<<endl<<endl;
            cout<<"Select the Source station"<<endl<<endl;
            for (int i = 0; i < 12; i++)
            {
                cout << "Enter "
                     << " " << i << " "
                     << " for " << stations[i] << endl;
            }
                
            cout << endl<<"Enter the code for source station:";
            cin >> source;
            // system("cls");
            dijkstra(graph, source, stations);

            cout << "\n\nDo you want to continue (Y/N)? : ";

            cin >> x;
            system("cls");
        } while (x == 'y' || x == 'Y');
        cout<<"\n\n\n";
        cout<<"\t\t\t-------------------------------Thank you have a nice day !-------------------------------\t\t\t"<<endl;
        Sleep(2000);
        return 0;
    }
}
