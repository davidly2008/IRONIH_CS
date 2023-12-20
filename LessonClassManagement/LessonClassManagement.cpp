// // // ---------------------
// // // LessonClassManagement
// // // ---------------------

#include <iostream>
using namespace std;
struct student{
    char name[15];
    int id;
    int grade;
};
int main(){
int yourmom;
cout << "for adding a student press 1" << endl;
        cout << "for deleting a student press 2" << endl;
        cout << "for searching a student press 3" << endl;
        cout << "to exit press 0" << endl;
        cin >> yourmom;
        switch(yourmom){
            case 1:
                cout << "enter the name of the student" << endl;
                char name[15];
                cin >> name;
                cout << "enter the id of the student" << endl;
                int id;
                cin >> id;
                cout << "enter the grade of the student" << endl;
                int grade;
                cin >> grade;
                student s;
                strcpy(s.name,name);
                s.id = id;
                s.grade = grade;
                break;
               
// //         }
// // }
// #include <iostream>
// #include <fstream>
// #include <cstdlib>
// using namespace std;

// int** bussmain;
// int len;

// // Function prototypes
// void addline(int linenr, int linestops, int linetime);
// void deleteLine(int linenr);
// void searchline(int linenr);
// void saveDataToFile();
// void loadDataFromFile();
// void avregetime();
// void avregestop();
// const char FILENAME[] = "bussdata.txt";

// int main()
// {
//     loadDataFromFile(); // Load data from the file at the beginning

//     int linestops;
//     int linenr;
//     int linetime;
//     int select;
//     double avrege;

//     do{
//         cout << "for adding a line press 1" << endl;
//         cout << "for deleting a line press 2" << endl;
//         cout << "for searching a line press 3" << endl;
//         cout << "for avrege time prees 4" << endl;
//         cout << "for avrege stops prees 5" << endl;
//         cout << "to exit press 0" << endl;
//         cin >> select;

//         switch (select)
//         {
//         case 1:
//             cout << "Enter bus line number: ";
//             cin >> linenr;
//             cout << "Enter number of stops: ";
//             cin >> linestops;
//             cout << "Enter time: ";
//             cin >> linetime;
//             addline(linenr, linestops, linetime);
//             break;

//         case 2:
//             cout << "Enter bus line number for delete: ";
//             cin >> linenr;
//             deleteLine(linenr);
//             break;

//         case 3:
//             cout << "Enter bus line number for searching: ";
//             cin >> linenr;
//             searchline(linenr);
//             break;

//             case 4:
//                 avregetime();
//             break;

//             case 5:
//                 avregestop();
//             break;
//         }

//     }while (select != 0);

//     saveDataToFile(); // Save data to the file before exiting

//     // Free allocated memory before program exits
//     for (int i = 0; i < len; ++i)
//     {
//         free(bussmain[i]);
//     }
//     free(bussmain);

//     return 0;
// }

// void addline(int linenr, int linestops, int linetime)
// {
//     int* line;

//     if (len == 0)
//     {
//         bussmain = (int**)malloc(1 * sizeof(int*));
//     }
//     else
//     {
//         bussmain = (int**)realloc(bussmain, (len + 1) * sizeof(int*));
//     }

//     line = (int*)malloc(3 * sizeof(int));
//     line[0] = linenr;
//     line[1] = linestops;
//     line[2] = linetime;
//     bussmain[len] = line;
//     len++;
// }

// void deleteLine(int linenr)
// {
//     int bussline = -1;

//     for (int i = 0; i < len; ++i)
//     {
//         if (bussmain[i][0] == linenr)
//         {
//             bussline = i;
//             break;
//         }
//     }

//     if (bussline != -1)
//     {
//         free(bussmain[bussline]);

//         for (int j = bussline; j < len - 1; ++j)
//         {
//             bussmain[j] = bussmain[j + 1];
//         }

//         len--;
//         bussmain = (int**)realloc(bussmain, len * sizeof(int*));

//         cout << "Bus line " << linenr << " deleted." << endl;
//     }
//     else
//     {
//         cout << "Bus line " << linenr << " not found." << endl;
//     }
// }

// void searchline(int linenr)
// {
//     for (int i = 0; i < len; ++i)
//     {
//         if (bussmain[i][0] == linenr)
//         {
//             cout << "Bus line " << linenr << " found." << endl;
//             return;
//         }
//     }

//     cout << "Bus line " << linenr << " not found." << endl;
// }

// void saveDataToFile()
// {
//     ofstream outputFile(FILENAME);

//     if (outputFile.is_open())
//     {
//         for (int i = 0; i < len; ++i)
//         {
//             outputFile << bussmain[i][0] << " " << bussmain[i][1] << " " << bussmain[i][2] << endl;
//         }

//         outputFile.close();
//         cout << "Data saved to file: " << FILENAME << endl;
//     }
//     else
//     {
//         cout << "Unable to open file for saving data." << endl;
//     }
// }

// void loadDataFromFile()
// {
//     ifstream inputFile(FILENAME);

//     if (inputFile.is_open())
//     {
//         while (!inputFile.eof())
//         {
//             int linenr, linestops, linetime;
//             inputFile >> linenr >> linestops >> linetime;

//             if (!inputFile.eof())
//             {
//                 addline(linenr, linestops, linetime);
//             }
//         }

//         inputFile.close();
//         cout << "Data loaded from file: " << FILENAME << endl;
//     }
//     else
//     {
//         cout << "No previous data found. Starting fresh." << endl;
//     }
// }

// void avregetime()
// {
//     int temp = 0;
//     double avrege;
//     for(int i=0;i<len;i++) {
//         temp += bussmain[i][2];
//     }

//     avrege = temp / len;
//     cout << "Average time: " << avrege << endl;
// }
// void avregestop() {

//     int temp1 = 0;
//     double avrege2;

//     for(int i=0;i<len;i++) {
//         temp1 += bussmain[i][1];
//         avrege2 = temp1 / len;
//         cout << "Average stop: " << avrege2 << endl;
//     }
//     }
