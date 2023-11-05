#include <iostream>

using namespace std;

int main()
{
    float cgpa, sem, goal, current_sgpa, final;
    cout << "Enter your CGPA: \n";

    cin >> cgpa;
    cout << "Enter your current semester (Whose result is not declared yet): \n";
    cin >> sem;
    cout << "Enter the CGPA you want to achieve by end of ENGG: \n";
    cin >> goal;

    current_sgpa = cgpa * (sem - 1);
    final = (((goal * 8) - current_sgpa) / ((8 - sem) + 1));

    if (final <= 10)
        cout << "You need to score " << final << " in all remaining semesters";
    else
        cout << "Sorry!! You can't achieve that much even if you score 10 sgpa in all remaining semesters";
    return 0;
}