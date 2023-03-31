#include <iostream>

using namespace std;

int main()
{
	int numofstudents;
	int numofsubjects;
	int grade, gba, percentage;

	cout << "Enter the number of students: ";
	cin >> numofstudents;

	cout << "Enter the number of subjects: ";
	cin >> numofsubjects;
	cout << endl;

	for (int i = 1; i <= numofstudents; i++)
	{
		cout << "Enter grades for student " << i << " (Each subject from 1 to 100)" << ":" << endl;

		gba = 0;

		for (int j = 1; j <= numofsubjects; j++)
		{
			do
			{
				cout << "Subject " << j << ":";
				cin >> grade;
			} while (grade > 100 || grade < 0);

			gba += grade;
		}

		cout << endl << "The total gba for student " << i << " is " << gba << endl;

		percentage = gba / numofsubjects;
		if (percentage >= 85)
		{
			cout << "Grade: Excellent" << endl;
		}
		else if (percentage >= 75 && percentage < 85)
		{
			cout << "Grade: Very Good" << endl;
		}
		else if (percentage >= 65 && percentage < 75)
		{
			cout << "Grade: Good" << endl;
		}
		else if (percentage >= 50 && percentage < 65)
		{
			cout << "Grade: Pass" << endl;
		}
		else {
			cout << "Grade: Fail" << endl;
		}
		cout << endl;
	}

	return 0;
}