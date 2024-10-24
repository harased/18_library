#include <iostream> 
#include "library.h" 
#include <string> 
#include <fstream> 
using namespace std;

int main()
{
    const int SIZE2 = 50;

    int bookSize = 0;
    Book* library = nullptr;

    //int bookSize = 5;
    //Book* library = new Book[bookSize]{
    //    {"Whispers of the Forest", "Emily Green", "Nature Press", "Fantasy"},
    //    {"The Digital Frontier", "Mark Thompson", "Tech World Publications", "Technology"},
    //    {"Secrets of the Deep", "Anna Rivers", "Oceanic Publishing", "Adventure"},
    //    {"Secrets of the Space", "Anna Rivers", "Space Publishing", "Adventure"},
    //    {"Secrets of the World", "Anna Rivers", "World Publishing", "Adventure"},
    //};

    int magazineSize = 0;
    Magazine* magazines = nullptr;

    //int magazineSize = 5;
    //Magazine* magazines = new Magazine[magazineSize]{
    //    {"Style Insider", "Olivia Hart", "Fashion Forward"},
    //    {"Future Tech", "Jason Lee", "Tech Insights"},
    //    {"Wellness Today", "Anna White", "Healthy Life Press"},
    //    {"Wellness Tomorrow", "Anna White", "Healthy Life Press"},
    //    {"Wellness Yesterday", "Anna White", "Healthy Life Press"},
    //};

    int newspaperSize = 0;
    NewsPaper* newspapers = nullptr;

    //int newspaperSize = 5;
    //NewsPaper* newspapers = new NewsPaper[newspaperSize]{
    //    {"City Gazette", "Urban News", "1978"},
    //    {"World Observer", "International Media Group", "1988"},
    //    {"Sunset Bulletin", "Evening Press", "1978"},
    //    {"Todays news", "Evening Press", "1978"},
    //    {"Last week news", "Evening Press", "1988"},
    //};

    //loadBooks(library, bookSize);
    //printBooks(library, bookSize);
    //printMagazines(magazines, magazineSize);
    //printNewsPapers(newspapers, newspaperSize);
    //addNewBook(library, bookSize);
    //addNewMagazine(magazines, magazineSize);
    //addNewNewsPaper(newspapers, newspaperSize);
    //deleteBook(library, bookSize);
    //printBooks(library, bookSize);
    //deleteMagazine(magazines, magazineSize);
    //deleteNewsPaper(newspapers, newspaperSize);
    //deleteNewsPaperYear(newspapers, newspaperSize);
    //cout << countBooks(library, bookSize) << endl;
    //cout << boolalpha << findBook(library, bookSize) << endl;
    //cout << boolalpha << findMagazine(magazines, magazineSize) << endl;
    //sortBooks(library, bookSize);
    //sortMagazine(magazines, magazineSize);
    //sortNewsPapers(newspapers, newspaperSize);
    //printBooks(library, bookSize);
    //printMagazines(magazines, magazineSize);
    //printNewsPapers(newspapers, newspaperSize);
    //viewBookAuthor(library, bookSize);
    //viewBookGenre(library, bookSize);
    //viewNewsPaperYear(newspapers, newspaperSize);
    //loadBooks(library, bookSize);
    //printBooks(library, bookSize);
    //addNewBook(library, bookSize);
    //printBooks(library, bookSize);
    //saveBooks(library, bookSize);
    //saveMagazines(magazines, magazineSize);
    //saveNewPapers(newspapers, newspaperSize);
    //loadBooks(library, bookSize);
    //loadMagazines(magazines, magazineSize);
    //loadNewPapers(newspapers, newspaperSize);
    //printBooks(library, bookSize);
    //printMagazines(magazines, magazineSize);
    //printNewsPapers(newspapers, newspaperSize);

    loadBooks(library, bookSize);
    loadMagazines(magazines, magazineSize);
    loadNewPapers(newspapers, newspaperSize);

    int choose;
    do {

    cout << R"(Menu ::
1. View all information
2. View all books
3. View all magazines
4. View all newspapers
5. Add new book
6. Add new magazine
7. Add new newspaper
8. Delete book
9. Delete magazine
10. Delete newspaper
11. Sort books
12. Sort magazines
13. Sort newspapers
14. Find book as author and name
15. Find magazines as name
16. Check author books
17. Check genre books
18. Check newspapers at year
19. Count books as genre
20. Delete newspaper as year
0. Exit
)";

    cin >> choose;
    cin.ignore();
    switch (choose)
    {
        case 1:
            printBooks(library, bookSize);
            printMagazines(magazines, magazineSize);
            printNewsPapers(newspapers, newspaperSize);
            break;
        case 2:
            printBooks(library, bookSize);
            break;
        case 3:
            printMagazines(magazines, magazineSize);
            break;  
        case 4:
            printNewsPapers(newspapers, newspaperSize);
            break;
        case 5:
            addNewBook(library, bookSize);
            break;
        case 6:
            addNewMagazine(magazines, magazineSize);
            break;
        case 7:
            addNewNewsPaper(newspapers, newspaperSize);
            break;
        case 8:
            deleteBook(library, bookSize);
            break;
        case 9:
            deleteMagazine(magazines, magazineSize);
            break;
        case 10:
            deleteNewsPaper(newspapers, newspaperSize);
            break;
        case 11:
            sortBooks(library, bookSize);
            break;
        case 12:
            sortMagazine(magazines, magazineSize);
            break;
        case 13:
            sortNewsPapers(newspapers, newspaperSize);
            break;
        case 14:
            cout << boolalpha << findBook(library, bookSize) << endl;
            break;
        case 15:
            cout << boolalpha << findMagazine(magazines, magazineSize) << endl;
            break;
        case 16:
            viewBookAuthor(library, bookSize);
            break;
        case 17:
            viewBookGenre(library, bookSize);
            break;
        case 18:
            viewNewsPaperYear(newspapers, newspaperSize);
            break;
        case 19:
            cout << countBooks(library, bookSize) << endl;
            break;
        case 20:
            deleteNewsPaperYear(newspapers, newspaperSize);
            break;
        case 0:
            cout << "Exit" << endl;
            break;
        default:
            cout << "Choice error," << endl;
            break;
        }
    } while (choose != 0);

    saveBooks(library, bookSize);
    saveMagazines(magazines, magazineSize);
    saveNewPapers(newspapers, newspaperSize);

    delete[] library;
    delete[] magazines;
    delete[] newspapers;

}