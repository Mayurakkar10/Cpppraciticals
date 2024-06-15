//bookclass
#include <iostream>
#include <string.h>
using namespace std;
class Book
{
    int id, price;
    char bookName[20], authorName[20];

public:
    void addBook()
    {
        cout << "\nEnter id,bookName,authorName,price: ";
        cin >> id >> bookName >> authorName >> price;
        int i;
        char b[20];
        char a[20];
        int p;

        id = i;
        strcpy(bookName, b);
        strcpy(authorName, a);
        price = p;
    }
    void showRecord()
    {
        cout << "\nRecord is: ";
        cout << "\n"
             << id << " " << bookName << " " << authorName << " " << price;
    }
    int getId()
    {
        return id;
    }

    char *getAuthor()
    {
        return authorName;
    }

    int getPrice()
    {
        return price;
    }

    char *getBookName()
    {
        return bookName;
    }
};
int main()
{
    Book b[3], temp;
    int x;
    do
    {
        cout << "\n1. Add the Book Records";
        cout << "\n2. Display all records of the books";
        cout << "\n3. Search book by id return found or not";
        cout << "\n4. Search book by author";
        cout << "\n5. Display book information whio has maximum";
        cout << "\n6. Sort the data using Book Name return the sorting array";
        cout << "7. exit";

        int choice;
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            for (int i = 0; i < 3; i++)
            {
                b[i].addBook();
            }
            break;
        case 2:
            for (int i = 0; i < 3; i++)
            {
                b[i].showRecord();
            }
            break;
        case 3:
            int sid;
            cout << "\nEnter sid: ";
            cin >> sid;
            for (int i = 0; i < 3; i++)
            {
                if (sid == b[i].getId())
                {
                    cout << "\nRecord found: ";
                    b[i].showRecord();
                }
            }
            break;
        case 4:
            char sauthor[20];
            cout << "\nEnter author name: ";
            cin >> sauthor;
            for (int i = 0; i < 3; i++)
            {
                if (strcmp(b[i].getAuthor(), sauthor) == 0)
                {
                    b[i].showRecord();
                }
            }
            break;
        case 5:
            int max;
            max = b[0].getPrice();
            int index;
            for (int i = 0; i < 3; i++)
            {
                if (b[i].getPrice() > max)
                {
                    max = b[i].getPrice();
                    index = i;
                }
            }
            b[index].showRecord();
            break;
        case 6:
            char bookname[20];
            for (int i = 0; i < 3; i++)
            {
                for (int j = i + 1; j < 3; j++)
                {
                    if (strcmp(b[i].getAuthor(), b[j].getAuthor()) > 0)
                    {
                        temp = b[i];
                        b[i] = b[j];
                        b[j] = temp;
                    }
                }
            }
            cout << "After sort: ";
            for (int i = 0; i < 3; i++)
            {
                b[i].showRecord();
            }
            break;
        }

        cout << "\nDo you want to continue(yes-1/no-0): ";
        cin >> x;
    } while (x != 0);
    cout << "\nThank you!";

    return 0;
}