#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <deque>
#include <conio.h>
#include <windows.h>

#define pi 3.14
using namespace std;

void cond();

void CalLen()
{
    cout << "What conversion do you want to do:\n1 - m to cm\n2 - cm to m\n";
    int choice;
    cin >> choice;
    double m, cm;

    if (choice == 1)
    {
        cout << "Enter the value in meters:";
        cin >> m;
        system("cls");
        cm = m * 100;
        cout << m << " m = " << cm << " cm" << endl;
    }

    else if (choice == 2)
    {
        cout << "Enter the value in centimeters: " << endl;
        cin >> cm;
        system("cls");
        m = cm / 100;
        cout << cm << " cm = " << m << " m" << endl;
    }

    else
    {
        cout << "Please enter a valid choice" << endl;
    }
    cond();
}

void CalMass()
{
    cout << "What conversion do you want to do:\n1 - kg to g\n2 - g to kg\n";
    int choice;
    cin >> choice;
    system("cls");
    double kg, g;

    if (choice == 1)
    {
        cout << "Enter value in kg: ";
        cin >> kg;
        system("cls");
        cout << kg << " kg = " << kg * 1000 << " g" << endl;
    }

    else if (choice == 2)
    {
        cout << "Enter value in g: ";
        cin >> g;
        system("cls");
        kg = g / 1000;
        cout << g << " g = " << kg << " kg" << endl;
    }

    else
    {
        cout << "Please enter a valid choice" << endl;
    }
    cond();
}

void CalVolume()
{
    cout << "What conversion do you want to do:\n1 - L to mL\n2 - ml to L\n";
    int choice;
    cin >> choice;
    double L, mL;

    if (choice == 1)
    {
        cout << "Enter value in Litres: ";
        cin >> L;
        system("cls");
        cout << L << " L = " << L * 1000 << " mL" << endl;
    }

    else if (choice == 2)
    {
        cout << "Enter value in mL: ";
        cin >> mL;
        system("cls");
        L = mL / 1000;
        cout << mL << " mL = " << L << " L" << endl;
    }

    else
    {
        cout << "Please enter a valid choice" << endl;
    }
    cond();
}

void ConvertTime()
{
    cout << "What conversion do you want to do -\n1-sec to min\n2-min to sec" << endl;
    int choice;
    cin >> choice;
    system("cls");
    double t;

    switch (choice)
    {
    case 1:
        cout << "Enter time in seconds: " << endl;
        cin >> t;
        system("cls");
        
        cout << t << " s = " << t / 60 << " mins" << endl;
        break;

    case 2:
        cout << "Enter time in minutes: " << endl;
        cin >> t;
        system("cls");
        cout << t << " mins = " << t * 60 << " sec" << endl;
        break;

    default:
        cout << "Please enter a valid choice" << endl;
    }
    cond();
}

void CalVelociy()
{
    cout << "Give appropiate input(in SI units):\n v - velocity\n s - displacement\n t - time\n";
    char ch;
    cin >> ch;

    if (ch == 'v'|| ch=='V')
    {
        cout << "Enter displacement and time\n";
        double s, t, v;
        cin >> s >> t;
        system("cls");
        v = s / t;
        cout << "Velocity = " << v <<" m/s"<< endl;
    }

    else if (ch == 's'|| ch=='S')
    {
        cout << "Enter velocity and time\n";
        double s, v, t;
        cin >> v >> t;
        system("cls");
        s = v * t;
        cout << "Displacement = " << s << " m"<< endl;
    }

    else if (ch == 't'||ch == 'T')
    {
        cout << "Enter Velocity and Displacement\n";
        double s, v, t;
        cin >> v >> s;
        system("cls");
        t = s / v;
        cout << "Time = " << t <<" sec"<<endl;
    }

    else
    {
        cout << "Invalid Input" << endl;
    }
    cond();
}

void CalAccelration()
{
    cout << "Give appropiate input:\n v - change in velocity\n a- acceleration \n t - time\n";
    char ch;
    cin >> ch;

    if (ch == 'v'|| ch == 'V')
    {
        cout << "Enter acceleration and time" << endl;
        double v, a, t;
        cin >> a >> t;
        system("cls");
        v = a * t;
        cout << "Velocity = " << v <<" m/s"<<endl;
    }

    else if (ch == 'a'|| ch == 'A')
    {
        cout << "Enter velocity and time" << endl;
        double a, v, t;
        cin >> v >> t;
        system("cls");
        a = v / t;
        cout << "Accelration = " << a <<" m/s^2"<<endl;
    }

    else if (ch == 't'|| ch == 'T')
    {
        cout << "Enter accelration and velocity" << endl;
        double a, v, t;
        cin >> a >> v;
        system("cls");
        t = v / a;
        cout << "Time = " << t <<" s"<< endl;
    }

    else
    {
        cout << "Invalid choice" << endl;
    }
    cond();
}

void CalForce()
{
    cout << "Give appropiate input:\n F - force \n m - mass \n a - accelration\n";
    char ch;
    cin >> ch;

    if (ch == 'F'|| ch=='f')
    {
        cout << "Enter mass and acceleration\n";
        double F, m, a;
        cin >> m >> a;
        system("cls");
        F = m * a;
        cout << "Force = " << F <<" N"<< endl;
    }

    else if (ch == 'm' || ch=='M')
    {
        cout << "Enter force and acceleration\n";
        double F, m, a;
        cin >> F >> a;
        system("cls");
        m = F / a;
        cout << "Mass = " << m <<" kg"<<endl;
    }

    else if (ch == 'a' || ch=='A')
    {
        cout << "Enter force and mass\n";
        double F, m, a;
        cin >> F >> m;
        system("cls");
        a = F / m;
        cout << "Acceleration = " << a <<" m/s^2"<<endl;
    }

    else
    {
        cout << "Invalid Input" << endl;
    }
    cond();
}

void CalDensity()
{
    cout << "Press \nd - density\n m - mass\n v - volume\n";
    char ch;
    cin >> ch;
    double d, m, v;
    switch (ch)
    {
    case 'D':
    case 'd':
        cout << "Enter mass and volume\n";
        cin >> m >> v;
        system("cls");
        d = m / v;
        cout << "Density = " << d <<" kg/m^3"<< endl;
        break;

    case 'M':
    case 'm':
        cout << "Enter density and volume\n";
        cin >> d >> v;
        system("cls");
        m = d * v;
        cout << "Mass = " << m <<" kg"<<endl;
        break;

    case 'V':
    case 'v':
        cout << "Enter mass and density" << endl;
        cin >> m >> d;
        system("cls");
        v = m / d;
        cout << "Volume = " << v << endl;
        break;

    default:
        cout << "Invalid Input" << endl;
    }
    cond();
}

void CalPower()
{
    cout << "Press:\nP-Power\nW-Workdone\nt=time\n";
    char ch;
    cin >> ch;
    double P, W, t;

    switch (ch)
    {
    case 'P':
        cout << "Enter the Workdone and time\n";
        cin >> W >> t;
        P = W / t;
        cout << "Power = " << P << endl;
        break;

    case 'W':
        cout << "Enter Power and Time\n";
        cin >> P >> t;
        W = P * t;
        cout << "Work done = " << W << endl;
        break;

    case 't':
        cout << "Enter the Workdone and Power\n";
        cin >> W >> P;
        t = W / P;
        cout << "Time = " << t << endl;
        break;

    default:
        cout << "Invalid Input" << endl;
    }
    cond();
}

void CalWeight()
{
    const double g = 9.89;
    cout << "What do you want to calculate\n W - Weight\n m - mass\n";
    char ch;
    cin >> ch;
    double W, m;

    if (ch == 'W')
    {
        cout << "Enter the mass of the object: ";
        cin >> m;
        W = m * g;
        cout << "Weight = " << W << endl;
    }

    else if (ch == 'm')
    {
        cout << "Enter the weight of the object: ";
        cin >> W;
        m = W / g;
        cout << "Mass = " << m << endl;
    }

    else
    {
        cout << "Invalid Input" << endl;
    }
    cond();
}

void CalPressure()
{
    cout << "What do you want to calculate\n P - Pressure\n F - Force\n A - Area\n";
    char ch;
    cin >> ch;
    double P, F, A;

    if (ch == 'P')
    {
        cout << "Enter force and area: ";
        cin >> F >> A;
        P = F / A;
        cout << "Pressure = " << P << endl;
    }

    else if (ch == 'F')
    {
        cout << "Enter pressure and area: ";
        cin >> P >> A;
        F = P * A;
        cout << "Force = " << F << endl;
    }

    else if (ch == 'A')
    {
        cout << "Enter force and pressure: ";
        cin >> F >> P;
        A = F / P;
        cout << "Area = " << A << endl;
    }

    else
    {
        cout << "Invalid Input" << endl;
    }
    cond();
}

void CalVoltage()
{
    cout << "What do you want to calculate\n V - Voltage\n I - Current\n R - Resistance\n";
    char ch;
    cin >> ch;
    double V, I, R;

    if (ch == 'V')
    {
        cout << "Enter current and resistance: ";
        cin >> I >> R;
        V = I * R;
        cout << "Voltage = " << V << endl;
    }

    else if (ch == 'I')
    {
        cout << "Enter voltage and resistance: ";
        cin >> V >> R;
        I = V / R;
        cout << "Force = " << I << endl;
    }

    else if (ch == 'R' )
    {
        cout << "Enter voltage and current: ";
        cin >> V >> I;
        R = V / I;
        cout << "Area = " << R << endl;
    }

    else
    {
        cout << "Invalid Input" << endl;
    }
    cond();
}

void CalKinetic_Energy()
{
    cout << "What do you want to calculate\n K - Kinetic Energy\n m - mass\n v - velocity\n";
    char ch;
    cin >> ch;
    double K, m, v;

    if (ch == 'K')
    {
        cout << "Enter mass of the body and velocity: ";
        cin >> m >> v;
        K = 0.5 * m * v * v;
        cout << "Kinetic Energy = " << K << endl;
    }

    else if (ch == 'm')
    {
        cout << "Enter kinetic energy and velocity: ";
        cin >> K >> v;
        m = (2 * K) / (v * v);
        cout << "Mass of the body = " << m << endl;
    }

    else if (ch == 'v')
    {
        cout << "Enter kinetic energy and mass: ";
        cin >> K >> m;
        v = sqrt((2 * K) / m);
        cout << "Velocity of the body = " << v << endl;
    }

    else
    {
        cout << "Invalid Input" << endl;
    }
    cond();
}

void CalPotential_Energy()
{
    const double g = 9.89;
    cout << "What do you want to calculate\n P - Potential Energy\n m - mass\n h - height\n";
    char ch;
    cin >> ch;
    double P, m, h;

    if (ch == 'P')
    {
        cout << "Enter mass of the body and height covered by the object: ";
        cin >> m >> h;
        P = m * g * h;
        cout << "Potential Energy = " << P << endl;
    }

    else if (ch == 'm')
    {
        cout << "Enter Potential energy and height coverd by the object: ";
        cin >> P >> h;
        m = P / (g * h);
        cout << "Mass of the body = " << m << endl;
    }

    else if (ch == 'h')
    {
        cout << "Enter Potential energy and mass of the body: ";
        cin >> P >> m;
        h = P / (g * m);
        cout << "Height covered by the body = " << h << endl;
    }

    else
    {
        cout << "Invalid Input" << endl;
    }
    cond();
}

void CalTotal_Energy()
{
    cout << "What do you want to calculate\n P - Potential Energy\n K - Kinetic Energy\n T - Total Energy\n";
    char ch;
    cin >> ch;
    double T, P, K;

    if (ch == 'T')
    {
        cout << "Enter Potential energy and Kinetic energy ";
        cin >> P >> K;
        T = K + P;
        cout << "Total Energy = " << T << endl;
    }

    else if (ch == 'K')
    {
        cout << "Enter Potential energy and Total energy ";
        cin >> P >> T;
        K = T - P;
        cout << "Kinetic Energy = " << K << endl;
    }

    else if (ch == 'P')
    {
        cout << "Enter Kinetic energy and Total energy ";
        cin >> K >> T;
        P = T - K;
        cout << "Potential Energy = " << P << endl;
    }

    else
    {
        cout << "Invalid Input" << endl;
    }
    cond();
}

void CalRefractive_Index()
{
    cout << "What do you want to calculate\n R - Refractive Index\n i - Angle of Incidence\n r - Angle of Refraction\n";
    char ch;
    cin >> ch;
    double R, i, r;

    if (ch == 'R')
    {
        cout << "Enter Angle of Incidence and Angle of Refraction ";
        cin >> i >> r;
        i = i * (pi / 180);
        r = r * (pi / 180);
        R = sin(i) / sin(r);
        cout << "Refractive Index = " << R << endl;
    }

    if (ch == 'i')
    {
        cout << "Enter Refractive Index and Angle of Refraction ";
        cin >> R >> r;
        r = r * (pi / 180);
        i = asin(R * sin(r));
        i = i * (180 / pi);
        cout << "Angle of Incidence = " << i << endl;
    }

    if (ch == 'r')
    {
        cout << "Enter Angle of Incidence and Refractive Index ";
        cin >> i >> R;
        i = i * (pi / 180);
        r = asin(sin(i) / R);
        r = r * (180 / pi);
        cout << "Angle of Refraction= " << r << endl;
    }
    cond();
}

void convertTemp()
{
    int k = 0;
    cout << "Press for appropiate conversion\n 1 for Celcius to Kelvin\n 2 for Kelvin to Celcius \n 3 for Fahrenheit to Celcius \n 4 for Celcius to Fahrenheit \n 5 for Fahrenheit to Kelvin \n 6 for Kelvin to Fahrenheit \n 7 for Exit" << endl
         << endl;
    cin >> k;
    while (k > 0)
    {
        double C, K, f;
        switch (k)
        {
        case 1:
            cout << "Enter temperature in Celcius: ";
            cin >> C;
            K = C + 273.15;
            cout << C << " C = " << K << " K" << endl;
            break;

        case 2:
            cout << "Enter temperature in Kelvin: ";
            cin >> K;
            C = K - 273.15;
            cout << K << " K = " << C << " C" << endl;
            break;

        case 3:
            cout << "Enter temperature in Fahrenheit: ";
            cin >> f;
            C = 0.556 * (f - 32);
            cout << f << " F = " << C << " C" << endl;
            break;

        case 4:
            cout << "Enter temperature in Celcius: ";
            cin >> C;
            f = 1.8 * C + 32;
            cout << C << " C = " << f << " F" << endl;
            break;

        case 5:
            cout << "Enter tempreture in Fahrenheit: ";
            cin >> f;
            K = 0.556 * (f - 32) + 273.15;
            cout << f << " F = " << K << " K" << endl;
            break;

        case 6:
            cout << "Enter tempreture in Kelvin: ";
            cin >> K;
            f = 1.8 * (K - 273.15) + 32;
            cout << K << " K = " << f << " F" << endl;
            break;

        case 7:
            break;
        }

        if (k > 0 && k != 7)
        {
            convertTemp();
        }

        else
        {
            break;
        }
    }
    cond();
}

void DecimalToBinary()
{
    int num;
    deque<int> dq;
    cout << "Enter any decimal number: ";
    cin >> num;
    int bu = num;

    if (num == 0)
    {
        cout << "Binary = " << 0 << endl;
    }

    else
    {
        while (num != 0)
        {
            int d = num % 2;
            dq.push_front(d);
            num /= 2;
        }

        cout << "Binary = ";
        for (int ele : dq)
        {
            cout << ele;
        }
        cout << "\n\n\n";
    }
    cond();
}

int BinaryToDecimal()
{
    deque<int> dq;
    long long num;
    long long sum = 0;
    int p = 0;
    cout << "Enter any binary number: ";
    cin >> num;
       system("cls");
    long long num_cpy = num;
    while (num_cpy != 0)
    {
        int d = num_cpy % 10;
        if (d > 1 || d < 0)
        {
            cout << "Please enter a valid binary number\n\n";

            return 0;
        }
        sum += d * pow(2, p);
        p++;
        num_cpy /= 10;
    }

    cout << "Decimal = " << sum << endl;
    cout << endl;
    cond();
}

int DecimalToOctal()
{
    deque<int> dq;
    int num, num_cpy;
    cout << "Enter a decimal integer number: ";
    cin >> num;
    if (num == 0)
    {
        cout << "Octal = " << 0 << "\n\n\n";
    }
    else
    {
        num_cpy = num;

        while (num_cpy != 0)
        {
            int d = num_cpy % 8;
            dq.push_front(d);
            num_cpy /= 8;
        }
        cout << "Octal = ";
        for (int ele : dq)
        {
            cout << ele;
        }
        cout << endl
             << endl
             << endl;
    }
    cond();
}

int OctalToDecimal()
{
    size_t num;
    cout << "Enter a number in octal number system: ";
    cin >> num;
    int num_cpy = num;
    size_t sum = 0;
    size_t p = 0;
    while (num_cpy != 0)
    {
        int d = num_cpy % 10;
        if (d > 7)
        {
            cout << "Please enter a valid octal number" << endl
                 << endl
                 << endl;
            return 0;
        }
        sum += d * pow(8, p++);
        num_cpy /= 10;
    }
    cout << "Decimal = " << sum << endl
         << endl
         << endl;
    cond();
}

int DecimalToHex()
{
    int num;
    string DectoHex = "";
    cout << "Enter a decimal number: ";
    cin >> num;
    if (num == 0)
    {
        cout << "Hexadecimal = " << num << "\n\n\n";
    }
    else
    {
        int num_cpy = num;

        while (num != 0)
        {
            int r = num % 16;
            if (r < 10)
            {
                DectoHex += to_string(r);
            }

            else
            {
                DectoHex += char(55 + r);
            }
            num /= 16;
        }
        reverse(DectoHex.begin(), DectoHex.end());
        cout << "Hexadecimal = " << DectoHex << "\n\n\n";
    }
    cond();
}

int Decimal(char HexDigit)
{
    if (HexDigit >= '0' && HexDigit <= '9')
    {
        return int(HexDigit - 48); // basically 48 is the ASCII code for '0' (character constant zero) so subtracting the character constant with the character constants of the digits gives us the integer value
    }

    else if (HexDigit >= 'A' && HexDigit <= 'F')
    {
        return HexDigit - 'A' + 10;
    }

    else
    {
        return -1;
    }
    cond();
}

int HexToDecimal()
{
    string HexNum;
    cout << "Enter a hexadecimal number: ";
    cin >> HexNum;
       system("cls");
        
    int Dec_Sum = 0;
    int p = 0;

    int len = HexNum.length();

    for (int i = len - 1; i >= 0; i--)
    {
        int digit = Decimal(HexNum[i]);
        if (digit == -1)
        {
            cout << "Please enter a valid hexadecimal number" << endl
                 << endl
                 << endl;
            return 0;
        }
        Dec_Sum += digit * pow(16, p);
        p++;
    }
    cout << "Decimal = " << Dec_Sum << endl << endl << endl;
    cond();
}
void printLine(int length, char symbol) {
    for (int i = 0; i < length; ++i) {
        std::cout << symbol;
    }
    std::cout << std::endl;
}

void printMenu() {
    int boxWidth = 40;
    std::string title = "Menu";
    std::string option1 = "1. Arithmetic Calculations";
    std::string option2 = "2. Physics Calculations";
    std::string option3 = "3. Conversions between Number Systems";
    std::string option4 = "4. Units Conversion";
    std::string option5 = "5. Exit";

    // Calculate padding for the title
    int titlePadding = (boxWidth - title.length()) / 2;
    
    // Print the top line of the box
    printLine(boxWidth, '*');

    // Print the title line
    printLine(titlePadding, ' ');
    std::cout << title;
    if (title.length() % 2 != 0) {
        printLine(titlePadding + 1, ' ');
    } else {
        printLine(titlePadding, ' ');
    }

    // Print a separator line
    printLine(boxWidth, '-');

    // Print the menu options
    std::cout << option1 << std::endl;
    std::cout << option2 << std::endl;
    std::cout << option3 << std::endl;
    std::cout << option4 << std::endl;
    std::cout << option5 << std::endl;

    // Print the bottom line of the box
    printLine(boxWidth, '*');
}
void cond()
{
    printMenu();
    int choice = 0;
    while (choice != 5)
    {   
        
      cin>>choice;
      system("cls");

        if (choice == 1)
        {
            int op;
            cout << "Press:\n 1 for Additon \n 2 for Substraction \n 3 for Multiplication \n 4 for Division \n";
            cin >> op;
            system("cls");
          

            double x, y, ans;
            cout << "Enter two operands: \n";
            cin >> x >> y;
              system("cls");
        

            switch (op)
            {
            case 1:
                ans = x + y;
                cout << x <<" + "<< y <<" = " << ans << endl<<endl;
                break;

            case 2:
                ans = x - y;
              cout << x<<" - "<<y<<" = " << ans << endl<<endl;
            
                break;

            case 3:
                ans = x * y;
              cout << x<<" * "<<y<<" = " << ans << endl<<endl;
                 
                break;

            case 4:
                ans = x / y;
               cout << x<<" / "<<y<<" = " << ans << endl<<endl;
                 
                break;

            default:
                cout << "Invalid operator";
                 
            }
            cond();
            
        }

        else if (choice == 2)
        {
            int num;
            while (num != 13)
            {
                cout << "PRESS A NUMBER FOR CALCULATION MENU---->\n\n";
                cout << " 1 velocity /displacment/time \n\n";
                cout << " 2 acceleration/change in velocity/time \n\n";
                cout << " 3 Force/ Mass / accelration \n\n";
                cout << " 4 Density/ Mass / Volume \n\n";
                cout << " 5 Power / Work / time \n\n";
                cout << " 6 Weight / mass \n\n";
                cout << " 7 Pressure / Force / Area \n\n";
                cout << " 8 Voltage / Current / Resistance \n\n";
                cout << " 9 Kinetic Energy \n\n";
                cout << " 10 Potential Energy \n\n";
                cout << " 11 Total Energy \n\n";
                cout << " 12 Refractive index \n\n";
                cout << " 13 Exit \n\n";

                cin >> num;
                system("cls");
                switch (num)
                {
                case 1:
                    CalVelociy();
                    break;

                case 2:
                    CalAccelration();
                    break;

                case 3:
                    CalForce();
                    break;

                case 4:
                    CalDensity();
                    break;

                case 5:
                    CalPower();

                    break;

                case 6:
                    CalWeight();

                    break;

                case 7:
                    CalPressure();

                    break;

                case 8:
                    CalVoltage();

                    break;

                case 9:
                    CalKinetic_Energy();

                    break;

                case 10:
                    CalPotential_Energy();

                    break;

                case 11:
                    CalTotal_Energy();

                    break;

                case 12:
                    CalRefractive_Index();

                    break;

                default:

                    break;
                }
            }
        }

        else if (choice == 3)
        {

            size_t n = 0;

            while (n != 7)
            {
                cout << "Please type:\n1 for (Decimal ----> Binary)\n2 for(Binary ----> Decimal)\n3 for(Decimal ----> Octal)\n4 for (Octal----> Decimal)\n5 for(Decimal ----> Hexadecimal)\n6 for (Hexadecimal---->Decimal)\n7 for exit " << endl;
                cin >> n;
                system("cls");
        

                switch (n)
                {
                case 1:
                    DecimalToBinary();
                    break;

                case 2:
                    BinaryToDecimal();
                    break;

                case 3:
                    DecimalToOctal();
                    break;

                case 4:
                    OctalToDecimal();
                    break;

                case 5:
                    DecimalToHex();
                    break;

                case 6:
                    HexToDecimal();
                    break;

                case 7:
                    cout << "Thank you" << endl;
                    break;

                default:
                    cout << "Please enter number between 0 to 7" << endl;
                }
            }
        }

        else if (choice == 4)
        {

            size_t n;
            while (n != 6)
            {
                cout << "Which conversions you want to do?" << endl;
                cout << "Press:\n\n1 - m/cm\n\n2 - kg/g\n\n3 - ml/L\n\n4 - Degree/Fahrenheit/Kelvin\n\n5 - minute/seconds\n\n6 - Exit\n\n";

                cin >> n;
                system("cls");
        

                switch (n)
                {
                case 1:
                    CalLen();
                    break;

                case 2:
                    CalMass();
                    break;

                case 3:
                    CalVolume();
                    break;

                case 4:
                    convertTemp();

                    break;

                case 5:
                    ConvertTime();
                    break;

                case 6:
                    cout << "-------------------------------------------------------------------------------------------------" << endl;
                    break;
                }
                char c;
                cin >> c;
            }
        }

        else
        {
            cout << "Thank you for using our calculator" << endl;
        }
    }
}

int main() 
{
    
    cond();

    return 0;
}