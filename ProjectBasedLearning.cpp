#include <iostream>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <cstdlib>
using namespace std;

const int LOADING_BAR_SIZE = 26;
const int SLEEP_500_MS = 500;
const int SLEEP_30_MS = 30;
const int SLEEP_1_S = 1000;
const int SLEEP_100_MS = 100;

int s = 9000, w = 11000, t = 8500;

// Function to print loading bar
void loadingBar()
{
	// 0 - black background,
	// A - Green Foreground
	system("color 75");

	// Initialize char for printing
	// loading bar
	char a = 177;
	char b = 219;

	cout << "\n\n\n\n";
	cout << "\n\n\n\n\t\t\t\t\t LOADING ! PLEASE WAIT..!\n\n";
	cout << "\t\t\t\t\t";

	// Print initial loading bar
	for (int i = 0; i < LOADING_BAR_SIZE; i++)
		cout << a;

	// Set the cursor again starting
	// point of loading bar
	cout << "\r";
	cout << "\t\t\t\t\t";

	// Print loading bar progress
	for (int i = 0; i < LOADING_BAR_SIZE; i++)
	{
		printf("%c", b);

		// Sleep for 1 second
		Sleep(50);
	}
}


void main_menu()
{
	cout << "\n\n\n\n\t\t\t\tK R I S H N A K U N J     A P A R T M E N T";
	Sleep(SLEEP_500_MS);
}

// Function to print welcome screen
void pwellcome()
{
	char welcome[50] = "WELCOME";
	char welcome2[50] = "TO";
	char welcome3[50] = " KRISHNAKUNJ APARTMENT";
	char welcome4[50] = "AND HOUSING SOCIETY";
	cout << "\n\n\t\t\t\t\t\t";
	for (int wlc = 0; wlc < strlen(welcome); wlc++)
	{
		cout << " " << welcome[wlc];
		Sleep(SLEEP_100_MS);
	}
	cout << "\n\n\t\t\t\t\t\t     ";
	for (int wlc2 = 0; wlc2 < strlen(welcome2); wlc2++)
	{
		cout << " " << welcome2[wlc2];
		Sleep(SLEEP_100_MS);
	}
	cout << "\n\n\t\t\t\t";
	for (int wlc3 = 0; wlc3 < strlen(welcome3); wlc3++)
	{
		cout << " " << welcome3[wlc3];
		Sleep(SLEEP_100_MS);
	}
	cout << "\n\n\t\t\t\t    ";
	for (int wlc4 = 0; wlc4 < strlen(welcome4); wlc4++)
	{
		cout << " " << welcome4[wlc4];
		Sleep(SLEEP_100_MS);
	}
}

// Function to print flat details
void flatdetails(void)
{
	char apart[50] = "**********KRISHNAKUNJ APARTMENT**********";
	char apart1[50] = "*********WELCOME TO OUR HOUSING SOCIETY**********";

	char owner[100] = "********THE OWNERS OF THE APARTMENT ARE*********";
	char owner1[100] = "|  Sr.No  |     Name of the Owner    |      Contact No      |";
	char owner2[100] = "|    1.   |     Siddhant Sonawane    |      9456******      |";
	char owner3[100] = "|    2.   |      Harshal Gangurde    |      8967******      |";
	char owner4[100] = "|    3.   |       Omkar Navsupe      |      9034******      |";

	char apart2[90] = "------------WHAT DO YOU WANT TO KNOW ?------------";
	cout << "\n\n\t\t\t";
	// Printing the name of the society
	for (int apt = 0; apt < strlen(apart); apt++)
	{
		cout << " " << apart[apt];
		Sleep(SLEEP_100_MS);
	}
	cout << "\n\n\t\t";
	for (int apt1 = 0; apt1 < strlen(apart1); apt1++)
	{
		cout << " " << apart1[apt1];
		Sleep(SLEEP_100_MS);
	}
	cout << "\n\n\t\t";
	for (int own = 0; own < strlen(owner); own++)
	{
		cout << "" << owner[own];
		Sleep(SLEEP_30_MS);
	}
	cout << "\n\n\t\t";
	for (int own1 = 0; own1 < strlen(owner1); own1++)
	{
		cout << "" << owner1[own1];
		Sleep(SLEEP_30_MS);
	}
	cout << "\n\n\t\t";
	for (int own2 = 0; own2 < strlen(owner2); own2++)
	{
		cout << "" << owner2[own2];
		Sleep(SLEEP_30_MS);
	}
	cout << "\n\n\t\t";
	for (int own3 = 0; own3 < strlen(owner3); own3++)
	{
		cout << "" << owner3[own3];
		Sleep(SLEEP_30_MS);
	}
	cout << "\n\n\t\t";
	for (int own4 = 0; own4 < strlen(owner4); own4++)
	{
		cout << "" << owner4[own4];
		Sleep(SLEEP_30_MS);
	}
	cout << "\n\n\n\n\n\t\t";
	for (int apt2 = 0; apt2 < strlen(apart2); apt2++)
	{
		cout << " " << apart2[apt2];
		Sleep(SLEEP_100_MS);
	}
	cout << "\n\n\t\t";
}

// Function to print the content
void content(void)
{
	char content1[100] = "1. Details of Flats in Society";
	char content2[100] = "2. Expenses happening in society (MONTHLY)";
	char content3[100] = "3. To book a Flat in society";
	char content4[100] = "4. Other Issues realated to society";
	char content5[100] = "5. Exit";

	cout << "\n\n\t\t";
	for (int con1 = 0; con1 < strlen(content1); con1++)
	{
		cout << "" << content1[con1];
		Sleep(SLEEP_30_MS);
	}
	cout << "\n\n\t\t";
	for (int con2 = 0; con2 < strlen(content2); con2++)
	{
		cout << "" << content2[con2];
		Sleep(SLEEP_30_MS);
	}
	cout << "\n\n\t\t";
	for (int con3 = 0; con3 < strlen(content3); con3++)
	{
		cout << "" << content3[con3];
		Sleep(SLEEP_30_MS);
	}
	cout << "\n\n\t\t";
	for (int con4 = 0; con4 < strlen(content4); con4++)
	{
		cout << "" << content4[con4];
		Sleep(SLEEP_30_MS);
	}
	cout << "\n\n\t\t";
	for (int con5 = 0; con5 < strlen(content5); con5++)
	{
		cout << "" << content5[con5];
		Sleep(SLEEP_30_MS);
	}
	cout << "\n\n\t\t";
}

// Function to print the details of flats
void option1(void)
{
	char detail[150] = " KRISHNAKUNJ APARTMENT";
	char detail1[150] = "TOTAL NUMBER OF WINGS IN SOCIETY ---->  3(A , B ,C )";
	char detail2[150] = "IS LIFT SYSTEM AVAILABLE ?------------>  YES, IN ALL WINGS";
	char detail3[150] = "TOTAL NUMBER OF FLATS IN SOCIETY :";
	char detail4[150] = "|    Type   |       No. of flats Available    |";
	char detail5[150] = "|    1 BHK  |                10               |";
	char detail6[150] = "|    2 BHK  |                12               |";
	char detail7[150] = "|    3 BHK  |                09               |";
	char detail8[150] = "Maintenance of Flats Acoording to their types: \n";
	char detail9[150] = "|    Type   |       Maintenance per Flat      |";
	char detail10[150] = "|    1 BHK  |             Rs 1000 /-          |";
	char detail11[150] = "|    2 BHK  |             Rs 2000 /-          |";
	char detail12[150] = "|    3 BHK  |             Rs 3000 /-          |";
	char detail13[150] = "IS CLUB HOUSE AVAILABLE ? ------------>  YES";
	char detail14[150] = "IS SOCIETY OFFICE WELL GROOMED ? ----->  YES";
	char detail15[150] = "FOR MORE DETAILS CONTACT OUR OWNERS";
	char detail16[150] = "-----------------THANK YOU SO MUCH...!--------------------";

	cout << "\n\n\t\t";

	for (int det = 0; det < strlen(detail); det++)
	{
		cout << "" << detail[det];
		Sleep(SLEEP_30_MS);
	}
	cout << "\n\n\t\t";
	for (int det1 = 0; det1 < strlen(detail1); det1++)
	{
		cout << "" << detail1[det1];
		Sleep(SLEEP_30_MS);
	}
	cout << "\n\n\t\t";
	for (int det2 = 0; det2 < strlen(detail2); det2++)
	{
		cout << "" << detail2[det2];
		Sleep(SLEEP_30_MS);
	}
	cout << "\n\n\t\t";
	for (int det3 = 0; det3 < strlen(detail3); det3++)
	{
		cout << "" << detail3[det3];
		Sleep(SLEEP_30_MS);
	}
	cout << "\n\n\t\t";
	for (int det4 = 0; det4 < strlen(detail4); det4++)
	{
		cout << "" << detail4[det4];
		Sleep(SLEEP_30_MS);
	}
	cout << "\n\n\t\t";
	for (int det5 = 0; det5 < strlen(detail5); det5++)
	{
		cout << "" << detail5[det5];
		Sleep(SLEEP_30_MS);
	}
	cout << "\n\n\t\t";
	for (int det6 = 0; det6 < strlen(detail6); det6++)
	{
		cout << "" << detail6[det6];
		Sleep(SLEEP_30_MS);
	}
	cout << "\n\n\t\t";
	for (int det7 = 0; det7 < strlen(detail7); det7++)
	{
		cout << "" << detail7[det7];
		Sleep(SLEEP_30_MS);
	}
	cout << "\n\n\t\t";
	for (int det8 = 0; det8 < strlen(detail8); det8++)
	{
		cout << "" << detail8[det8];
		Sleep(SLEEP_30_MS);
	}
	cout << "\n\n\t\t";
	for (int det9 = 0; det9 < strlen(detail9); det9++)
	{
		cout << "" << detail9[det9];
		Sleep(SLEEP_30_MS);
	}
	cout << "\n\n\t\t";
	for (int det10 = 0; det10 < strlen(detail10); det10++)
	{
		cout << "" << detail10[det10];
		Sleep(SLEEP_30_MS);
	}
	cout << "\n\n\t\t";
	for (int det11 = 0; det11 < strlen(detail11); det11++)
	{
		cout << "" << detail11[det11];
		Sleep(SLEEP_30_MS);
	}
	cout << "\n\n\t\t";
	for (int det12 = 0; det12 < strlen(detail12); det12++)
	{
		cout << "" << detail12[det12];
		Sleep(SLEEP_30_MS);
	}
	cout << "\n\n\t\t";
	for (int det13 = 0; det13 < strlen(detail13); det13++)
	{
		cout << "" << detail13[det13];
		Sleep(SLEEP_30_MS);
	}
	cout << "\n\n\t\t";
	for (int det14 = 0; det14 < strlen(detail14); det14++)
	{
		cout << "" << detail14[det14];
		Sleep(SLEEP_30_MS);
	}
	cout << "\n\n\t\t";
	for (int det15 = 0; det15 < strlen(detail15); det15++)
	{
		cout << "" << detail15[det15];
		Sleep(SLEEP_30_MS);
	}
	cout << "\n\n\t\t";
	for (int det16 = 0; det16 < strlen(detail16); det16++)
	{
		cout << "" << detail16[det16];
		Sleep(SLEEP_30_MS);
	}
	cout << "\n\n\t\t";
}

// Booking Procedure
void option3(void)
{
	char book[100] = "The Procedure For Booking a Flat is as Follows :\n";
	char book1[100] = "To book a Flat plase provide following Details: \n";

	cout << "\n\n\t\t";

	for (int bok = 0; bok < strlen(book); bok++)
	{
		cout << "" << book[bok];
		Sleep(SLEEP_30_MS);
	}
	cout << "\n\n\t\t";
	for (int bok1 = 0; bok1 < strlen(book1); bok1++)
	{
		cout << "" << book1[bok1];
		Sleep(SLEEP_30_MS);
	}
	cout << "\n\n\t\t";
}

// Contact Details for any Issues
void option4(void)
{
	char last[100] = "For Any other Issues Contact Our Owners...!";
	cout << "\n\n\t\t";
	for (int las = 0; las < strlen(last); las++)
	{
		cout << "" << last[las];
		Sleep(50);
	}
}

// Class for Maintenance includes methods to calculate maintenance costs based on the number of flats
class maintenance
{
public:
	int putmaintenance1(void);
	int putmaintenance2(void);
	int putmaintenance3(void);
	int totalmaintenance(void);
};

int maintenance::putmaintenance1(void)
{
	int onebm;
	int oneb = 10;
	return onebm = oneb * 1000;
}

int maintenance::putmaintenance2(void)
{
	int twobm;
	int twob = 12;
	return twobm = twob * 2000;
}

int maintenance::putmaintenance3(void)
{
	int threebm;
	int threeb = 9;
	return threebm = threeb * 3000;
}

int maintenance::totalmaintenance(void)
{
	return putmaintenance1() + putmaintenance2() + putmaintenance3();
}
// next class
class apartment
{
public:
	int l;
	void getLightbill(void);
};

// Function for Light Bill
void apartment::getLightbill(void)
{
	cin >> l;
}

// Main Function
int main()
{
	loadingBar();
	main_menu();
	pwellcome();
	Sleep(3000);
	cout << "\n\n\n\t\t\t\t ";
	std::cout << "\033[2J\033[1;1H";
	flatdetails();

	int tsp;
	int total;
	apartment apt;
	maintenance main;

s:
	int n;
	content();
	cout << "\n\nEnter the number you want Infomation about ?: \t";
	cin >> n;
	std::cout << "\033[2J\033[1;1H";

	switch (n)
	{
	case 1:
		option1();
		getch();
		break;

	case 2:
		cout << "There are few men working in our society. We need to pay them every month.\n";
		Sleep(SLEEP_1_S);
		cout << "Salaries of these workmen are as follows : \n";
		cout << "Salaries :\n";
		cout << "1. Sweeper         : \t\t" << s << endl;
		cout << "2. Watchman        : \t\t" << w << endl;
		cout << "3. Floor cleaner   : \t\t" << t << endl;
		Sleep(SLEEP_1_S);

		cout << "\n\n****************Maintenance of our Apartment******************\n\n";

		cout << "\nMaintenance for ONE BHK flats (Including All Flats) :          " << main.putmaintenance1() << endl;
		cout << "\nMaintenance for TWO BHK flats (Including All Flats) :          " << main.putmaintenance2() << endl;
		cout << "\nMaintenance for THREE BHK flats (Including All Flats) :        " << main.putmaintenance3() << endl;
		cout << "\nMaintenance Collected from All Flats in Society:               " << main.totalmaintenance() << endl;
		Sleep(3000);

		total = s + w + t + main.totalmaintenance();
		cout << "\n\nThe total of all Maintenance and Salaries of workmen is :    " << total << endl;

		cout << "\nEnter lightbill for current month :                            ";
		apt.getLightbill();

		tsp = main.totalmaintenance() - s - w - t - apt.l;

		cout << "\n\nTotal money spent in this month =                            " << tsp;
		getch();

		break;

	case 3:
		option3();
		int n, f;

		cout << "\n\t\tEnter your contact ID: ";
		cin >> n;

		cout << "\n\t\tEnter type of flat you want (1/2/3 BHK) : ";
		cin >> f;

		cout << "\n\n\t\tWe will book your flat by contacting You !";

		cout << "\n\t\tThank you so much ...!";
		getch();
		break;
	case 4:
		option4();
		getch();
		break;

	case 5:
		cout << "\n\n\t\tThank You Visit Again...!";
		Sleep(300);
		exit(0);
		break;

	default:
		cout << "No data" << endl;
		break;
	}
	std::cout << "\033[2J\033[1;1H";

	goto s;
	return 0;
}