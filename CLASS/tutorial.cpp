/*Develop a library application using multiple inheritence. Consider book , magezines and journals as the base classes and Library as the derived class. In book class perform the operations like search book , issue book , return book and fine claculations . In magazine and journal class perform issue and return operations*/
#include <bits/stdc++.h>
#include <cctype>
#include <iostream>
#include <vector>
#include <string>
class Book
{
private:
    std::vector<std::string> book;
    std::vector<std::string> issued;
    int issue_date, issue_month, issue_year;
    int ret_date, ret_month, ret_year;

public:
    void in_it_Book(void) // Books
    {
        book.push_back("WINGS OF FIRE");
        book.push_back("OBJECT ORIENTED PROGRAMMING");
        book.push_back("PYTHON PROGRAMMING");
        book.push_back("CPP BALAGURUSWAMY");
    }
    Book() // No argument constructor
    {
        in_it_Book();
    }
    Book(const std::string &choice) // Checking for the presence of book
    {
        in_it_Book();
        bool is_present = false;
        for (int i = 0; i < book.size(); i++)
        {
            if (book[i] == choice)
            {
                is_present = true;
                break;
            }
        }
        if (is_present)
        {
            std::cout << "Available!" << std::endl;
        }
        else
        {
            std::cout << "Not available!" << std::endl;
        }
    }
    void searchBook(const std::string &choice)
    {
        bool is_present = false;
        for (int i = 0; i < book.size(); i++)
        {
            if (book[i] == choice)
            {
                is_present = true;
                break;
            }
        }
        if (is_present)
        {
            std::cout << "Available!" << std::endl;
        }
        else
        {
            auto it = std::find(issued.begin(), issued.end(), choice);
            if (it != issued.end())
            {
                std::cout << "Book '" << choice << "' is already issued." << std::endl;
            }
            else
            {
                std::cout << "Not available!" << std::endl;
                exit(1);
            }
        }
    }
    void addBook(const std::string &bookName) // to add more books in the vector
    {
        book.push_back(bookName);
    }

    void displayBook(void) // To display books present in the vector of the books
    {
        std::cout << "Books in the collection:" << std::endl;
        for (const auto &b : book)
        {
            std::cout << b << std::endl;
        }
    }

    void issueBook(const std::string &book_name, int &date, int &month, int &year) // fuction which issue books to the user
    {
        issue_date = date;
        issue_month = month;
        issue_year = year;
        auto it = std::find(book.begin(), book.end(), book_name);

        if (it != book.end())
        {
            book.erase(it);
            book_issued(book_name);
        }
        std::cout << "\n*******************************Book issued successfully***********************************************\n"
                  << std::endl;
    }
    void book_issued(const std::string &book)
    { // Function which store the book issued from the department
        std::cout << "Book '" << book << "' issued successfully." << std::endl;
        issued.push_back(book);
        std::cout << "Issued books: ";
        for (auto &i : issued)
        {
            std::cout << i << std::endl;
        }
    }
    void returnBook(const std::string &book_name, int &return_date, int &return_month, int &return_year)
    { // Fuction for returning book
        ret_date = return_date;
        ret_month = return_month;
        ret_year = return_year;
        auto it = std::find(issued.begin(), issued.end(), book_name);
        if (it != issued.end())
        {
            issued.erase(it);
            book.push_back(book_name);
            std::cout << "Book '" << book_name << "' returned successfully." << std::endl;
            if (issued.size() != 0)
            {
                std::cout << "Issued books: ";
                for (auto &i : issued)
                {
                    std::cout << i << std::endl;
                }
            }
        }
        fine_calculation();
        std::cout << "\n*******************************Book returned successfully***********************************************\n"
                  << std::endl;
    }
    void renewBook(const std::string &book_name, int date, int month, int year)
    {
        issue_date = date;
        issue_month = month;
        issue_year = year;
        std::cout << "\n********************************************************* Book renewed successfully ***************************\n";
        std::cout << std::endl;
    }

    void fine_calculation()
    {
        int fine = 0;
        int days_late = std::abs(ret_date - issue_date) + std::abs(ret_month - issue_month) * 30 + std::abs(ret_year - issue_year) * 365;
        if (days_late > 30)
        {
            fine = (days_late - 30) * 5;
        }
        std::cout << "Fine amount: " << fine << std::endl;
    }
};

class Magazine
{
    std::vector<std::string> magazine;
    std::vector<std::string> issued;

public:
    void in_it_Magazine(void)
    {
        magazine.push_back("OXFORD");
        magazine.push_back("INDIA TIMES");
        magazine.push_back("INDIA TODAY");
    }
    Magazine()
    {
        in_it_Magazine();
    }
    Magazine(std::string &choice)
    {
        in_it_Magazine();
        bool is_present = false;
        for (int i = 0; i < magazine.size(); i++)
        {
            if (magazine[i] == choice)
            {
                is_present = true;
                break;
            }
        }
        if (is_present)
        {
            std::cout << "Available!" << std::endl;
        }
        else
        {
            std::cout << "Not available!" << std::endl;
        }
    }
    void addMagazine(const std::string &newMagazine)
    {
        magazine.push_back(newMagazine);
    }
    void displayMagazine(void) // To display magazine present in the vector of the Magazine
    {
        std::cout << "Magazines in the collection:" << std::endl;
        for (auto &m : magazine)
        {
            std::cout << m << std::endl;
        }
    }
    void searchMagazine(const std::string &MagazineName)
    {
        bool is_present = false;
        for (int i = 0; i < magazine.size(); i++)
        {
            if (magazine[i] == MagazineName)
            {
                is_present = true;
                break;
            }
        }
        if (is_present)
        {
            std::cout << "Available!" << std::endl;
        }
        else
        {
            auto it = std::find(issued.begin(), issued.end(), MagazineName);
            if (it != issued.end())
            {
                std::cout << "Magazine '" << MagazineName << "' is already issued." << std::endl;
            }
            else
            {
                std::cout << "Not available!" << std::endl;
            }
        }
    }
    void issueMagazine(const std::string &magazine_name)
    {
        auto it = std::find(magazine.begin(), magazine.end(), magazine_name);
        if (it != magazine.end())
        {
            magazine.erase(it);
            issuedMagazine(magazine_name);
        }
        std::cout << "\n*******************************Magazine issued successfully***********************************************\n"
                  << std::endl;
    }
    void issuedMagazine(const std::string &magazine_name)
    {
        issued.push_back(magazine_name);
        std::cout << "Magazine issued: ";
        for (auto &it : issued)
        {
            std::cout << it << std::endl;
        }
    }
    void returnMagazine(const std::string &magazine_name)
    {
        auto it = std::find(issued.begin(), issued.end(), magazine_name);
        if (it != issued.end())
        {
            issued.erase(it);
            magazine.push_back(magazine_name);
        }
        std::cout << "Magazine '" << magazine_name << "' returned." << std::endl;
        std::cout << "\n*******************************  Magazine returned successfully  ***********************************************\n"
                  << std::endl;
    }
};

class Journals
{
    std::vector<std::string> journal;
    std::vector<std::string> issued;

public:
    void in_it_Journals(void)
    {
        journal.push_back("OXFORD");
        journal.push_back("INDIA TIMES");
        journal.push_back("INDIA TODAY");
    }
    Journals()
    {
        in_it_Journals();
    }
    Journals(std::string &choice)
    {
        in_it_Journals();
        bool is_present = false;
        for (int i = 0; i < journal.size(); i++)
        {
            if (journal[i] == choice)
            {
                is_present = true;
                break;
            }
        }
        if (is_present)
        {
            std::cout << "Available!" << std::endl;
        }
        else
        {
            std::cout << "Not available!" << std::endl;
        }
    }
    void addJournal(const std::string &newJournal)
    {
        journal.push_back(newJournal);
    }
    void displayJournal(void) // To display magazine present in the vector of the Magazine
    {
        std::cout << "Journals in the collection:" << std::endl;
        for (auto &j : journal)
        {
            std::cout << j << std::endl;
        }
    }
    void searchJournal(const std::string &JournalName)
    {
         bool is_present = false;
        for (const auto &jr : journal)
        {
            if (jr == JournalName)
            {
                is_present = true;
                break;
            }
        }
        if (is_present)
        {
            std::cout << "Available!" << std::endl;
        }
        else
        {
            auto it = std::find(issued.begin(), issued.end(), JournalName);
            if (it != issued.end())
            {
                std::cout << "Journal '" << JournalName << "' is already issued." << std::endl;
            }
            else
            {
                std::cout << "Not available!" << std::endl;
            }
        }
    }
    void issueJournal(const std::string &journal_name)
    {
        auto it = std::find(journal.begin(), journal.end(), journal_name);
        if (it != journal.end())
        {
            journal.erase(it);
            issuedJournal(journal_name);
        }
    }
    void issuedJournal(const std::string &journal_name)
    {
        issued.push_back(journal_name);
        std::cout << "Journals issued: ";
        for (auto &it : issued)
        {
            std::cout << it << std::endl;
        }
        std::cout << "\n*******************************  Journal issued successfully  ***********************************************\n"
                  << std::endl;
    }
    void returnJournal(const std::string &journal_name)
    {
        auto it = std::find(issued.begin(), issued.end(), journal_name);
        if (it != issued.end())
        {
            issued.erase(it);
        }
        std::cout << "journal '" << journal_name << "' returned." << std::endl;
        std::cout << "\n*******************************  Journal returned   successfully  ***********************************************\n"
                  << std::endl;
    }
};

class Library : public Book, public Magazine, public Journals
{
public:
    void display_library()
    {
        std::cout << "Library:" << std::endl;
        std::cout << "\nBooks: " << std::endl;
        displayBook();
        std::cout << "\nMagazines: " << std::endl;
        displayMagazine();
        std::cout << "\nJournals: " << std::endl;
        displayJournal();
    }
};

std::string capitalize(std::string &str)
{
    std::transform(str.begin(), str.end(), str.begin(), ::toupper);
    return str;
}
int main()
{
    Library c;
    std::string choice;
    std::string book_name;
    std::string return_book;
    std::string issue_book;
    int date, month, year;
    int return_date, return_month, return_year;

    std::string magazine_name;
    std::string return_magazine;
    std::string issue_magazine;
    int m_date, m_month, m_year;
    int m_return_date, m_return_month, m_return_year;

    std::string journal_name;
    std::string return_journal;
    std::string issue_journal;
    int j_date, j_month, j_year;
    int j_return_date, j_return_month, j_return_year;

    std::cout << "\n\n***************** Welcome in the Library *****************\n";
    std::cout << std::endl;
    std::cout << "For 'Books' type either 'books' or '1' \n";
    std::cout << "For 'Magazines' type either 'magazines' or '2' \n";
    std::cout << "For 'Journals' type either 'journals' or '3' \n\n";
    std::cout<<"****************************************************************\n"<<std::endl;
    std::cout << "What are you looking for: ";
              
    std::getline(std::cin, choice);
    capitalize(choice);
    if (choice == "BOOKS" || choice == "1")
    {
        c.displayBook();
        std::cout << "\nEnter name of the book you are looking for: ";

        std::getline(std::cin, book_name);
        capitalize(book_name);
        c.searchBook(book_name);

        std::cout << "Do you Want to issue this book? ";
        std::getline(std::cin, issue_book);

        capitalize(issue_book);
        if (issue_book == "YES")
        {
            std::cout << "Enter Today's date: ";
            std::cin >> date;
            std::cout << "Enter month: ";
            std::cin >> month;
            std::cout << "Enter year: ";
            std::cin >> year;
            c.issueBook(book_name, date, month, year);
            
        }
        else
        {
            std::cout << "NO book issued!" << std::endl;
            exit(1);
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cout << "Do you Want to return this book? ";
        std::getline(std::cin, return_book);
        capitalize(return_book);
        if (return_book == "YES")
        {
            std::cout << "Enter today's date: ";
            std::cin >> return_date;
            std::cout << "Enter month(1 to 12): ";
            std::cin >> return_month;
            std::cout << "Enter year: ";
            std::cin >> return_year;

            c.returnBook(book_name, return_date, return_month, return_year);
        }
        else
        {
            std::cout << "NO book returned!" << std::endl;
        }
        std::cout << "Enter the book you are looking for: ";
        std::string renew_book;
        std::getline(std::cin, renew_book);
        capitalize(renew_book);

        c.renewBook(renew_book, date, month, year);
        c.searchBook(book_name);
    }
    else if (choice == "MAGAZINES" || choice == "2")
    {
        c.displayMagazine();
        std::cout << "\nEnter name of the Magazine you are looking for: ";

        std::getline(std::cin, magazine_name);
        capitalize(magazine_name);
        c.searchMagazine(magazine_name);

        std::cout << "Do you Want to issue this Magazine? ";
        std::getline(std::cin, issue_magazine);

        capitalize(issue_magazine);
        if (issue_magazine == "YES")
        {
            // std::cout << "Enter Today's date: ";
            // std::cin >> date;
            // std::cout << "Enter month: ";
            // std::cin >> month;
            // std::cout << "Enter year: ";
            // std::cin >> year;
            c.issueMagazine(magazine_name);
           
        }
        else
        {
            std::cout << "NO Magazine issued!" << std::endl;
            exit(1);
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cout << "Do you Want to return this Magazine? ";
        std::getline(std::cin, return_book);
        capitalize(return_magazine);
        if (return_magazine == "YES")
        {
            // std::cout << "Enter today's date: ";
            // std::cin >> m_return_date;
            // std::cout << "Enter month(1 to 12): ";
            // std::cin >> m_return_month;
            // std::cout << "Enter year: ";
            // std::cin >> m_return_year;

            c.returnMagazine(book_name);
            exit(1);
        }
        else
        {
            std::cout << "NO Magazine returned!" << std::endl;
        }
        std::cout << "Enter the Magazine you are looking for: ";
        std::getline(std::cin, magazine_name);
        capitalize(magazine_name);
        c.searchMagazine(magazine_name);
    }
    else if (choice == "JOURNALS" || choice == "3")
    {
        c.displayJournal();
        std::cout << "\nEnter name of the Journal you are looking for: ";

        std::getline(std::cin, journal_name);
        capitalize(journal_name);
        c.searchJournal(journal_name);

        std::cout << "Do you Want to issue this Magazine? ";
        std::getline(std::cin, issue_journal);

        capitalize(issue_journal);
        if (issue_journal == "YES")
        {
            // std::cout << "Enter Today's date: ";
            // std::cin >> date;
            // std::cout << "Enter month: ";
            // std::cin >> month;
            // std::cout << "Enter year: ";
            // std::cin >> year;
            c.issueJournal(journal_name);
        }
        else
        {
            std::cout << "NO journal issued!" << std::endl;
            exit(1);
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cout << "Do you Want to return this journal? ";
        std::getline(std::cin, return_journal);
        capitalize(return_journal);
        if (return_journal == "YES")
        {
            // std::cout << "Enter today's date: ";
            // std::cin >> m_return_date;
            // std::cout << "Enter month(1 to 12): ";
            // std::cin >> m_return_month;
            // std::cout << "Enter year: ";
            // std::cin >> m_return_year;

            c.returnJournal(journal_name);
        }
        else
        {
            std::cout << "NO journal returned!" << std::endl;
        }
        std::cout << "Enter the journal you are looking for: ";
        std::getline(std::cin, journal_name);
        capitalize(journal_name);
        c.searchJournal(journal_name);
    }
    else
    {
        std::cout << "Invalid value!" << std::endl;
        exit(1);
    }
    return 0;
}
