#include <iostream>
#include <conio.h>
using namespace std;
// Function prototype start.
void printheader();
void printwelcome();
void firstMenu();
void main1();
void printloginMenu();
void printSignup();
void Signup_inMenu();
void selectOption();
void printadminoptions();
void printSignin();
bool signinoptions();
void Aaddproducts();
void Aviewproducts();
void Aupdate();
void Asorting();
// Function prototype end.
// Errays start.
const int size = 2;
string nameA[size];
string passwordA[size];
const int med_size = 3;
string medicineA[med_size];
int priceA[med_size];
int quantityA[med_size];
string sort_medicineA[med_size];
int sort_priceA[med_size];
int sort_quantityA[med_size];
// Errays end.
// variables start.
int idx = 0;
int option;
string name;
string password;
int count = 0;
string update_medicine;
int update_price;
int update_quantity;
// variables end.

main()
{
    while (true)
    {
        system("cls");
        printheader();
        printwelcome();
        firstMenu();
        selectOption();
        if (option == 1)
        {
            main1();
        }
        else if (option == 3)
        {
            system("cls");
            break;
        }
    }
}

void printheader()
{
    cout << "              ****************************************************************" << endl;
    cout << "              ****************************************************************" << endl;
    cout << "              **                 *PHARMACY MANAGEMENT SYSTEM*               **" << endl;
    cout << "              ****************************************************************" << endl;
    cout << "              ****************************************************************" << endl;
}

void printwelcome()
{
    cout << "                         ************WELCOME TO PAHRMACY**********" << endl;
}

void printloginMenu()
{
    cout << "Login Menu" << endl;
    cout << "***********************************" << endl;
    cout << endl;
    cout << endl;
    cout << "1.SignUp" << endl;
    cout << "2.Signin" << endl;
    cout << "3.Exit." << endl;
}

void printSignup()
{
    cout << "SignUp Menu" << endl;
    cout << "***********************************" << endl;
}
void Signup_inMenu()
{
    cout << "Enter your name: ";
    cin >> nameA[idx];
    cout << "Enter your password: ";
    cin >> passwordA[idx];
    while (true)
    {
        if (passwordA[idx].size() == 8)
        {
            break;
        }
        else
        {
            cout << "invalid, Enter 8 character password: " << endl;
            cout << "Enter your password: ";
            cin >> passwordA[idx];
        }
    }
}

void printSignin()
{
    cout << "Signin Menu" << endl;
    cout << "**************************************" << endl;
}

void selectOption()
{
    cout << "Enter option number: ";
    cin >> option;
}

void firstMenu()
{
    cout << "1.Admin." << endl;
    cout << "2.User." << endl;
    cout << "3.Exit." << endl;
}

void printadminoptions()
{

    cout << "1- Add products." << endl;
    cout << "2- View products in pharmacy." << endl;
    cout << "3- set and update the product's price." << endl;
    cout << "4- Delete the products." << endl;
    cout << "5- Sorting out all the data." << endl;
    //cout << "6- Validate the products." << endl;
    cout << "7- Recommend the products." << endl;
    cout << "8- Check totla stock." << endl;
    cout << "9- Check the sails." << endl;
    cout << "10-Exit." << endl;
}

void main1()
{
    while (true)
    {
        system("cls");
        printheader();
        printwelcome();
        printloginMenu();
        selectOption();
        if (option == 1)
        {
            if (idx == size)
            {
                cout << "There is no more limit for signUp." << endl;
                cout << "Enter any key to continue: ";
                getch();
            }
            else
            {
                system("cls");
                printheader();
                printSignup();
                Signup_inMenu();
                idx++;
                cout << "Successfully SignUp. " << endl;
                cout << "Enter any key to continue: " << endl;
                getch();
            }
        }
        else if (option == 2)
        {
            system("cls");
            printheader();
            printwelcome();
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter password: ";
            cin >> password;
            if (signinoptions())
            {
                while (true)
                {
                    printadminoptions();
                    selectOption();
                    system("cls");
                    if (option == 1) // add products.
                    {
                        Aaddproducts();
                    }
                    else if (option == 2) // view products
                    {
                        Aviewproducts();
                    }
                    else if (option == 3) // Set and update product's price.
                    {
                        Aupdate();
                    }
                    else if (option == 4) // Delete the  products.
                    {
                    }
                    else if (option == 5) // Sorting out the products.
                    {
                        Asorting();        
                    }
                    else if (option == 6) // validate the products.
                    {
                    }
                    else if (option == 7) // Recommend the products.
                    {
                    }
                    else if (option == 8) // Check total stock.
                    {
                    }
                    else if (option == 9) // Check total sails.
                    {
                    }
                    else if (option == 10) // Exit.
                    {
                        break;
                    }
                }
            }
            else
            {
                cout << "Wrong information: " << endl;
                cout << "Enter any key to continue: " << endl;
                getch();
            }
        }
        else if (option == 3)
        {
            system("cls");
            break;
        }
    }
}

bool signinoptions()
{
    bool flag = false;
    for (int a = 0; a < size; a++)
    {
        if (nameA[a] == name && passwordA[a] == password)
        {
            flag = true;
            break;
        }
    }
    return flag;
}

void Aaddproducts()
{
    for (int a = 0; a < med_size; a++)
    {
        cout << "1.Add products and price." << endl;
        cout << "2.Exit" << endl;
        cout << "Enter your option : ";
        cin >> option;
        if (count == med_size)
        {
            cout << "There is no more limit to add the products." << endl;
            cout << "Enter any key to continue: " << endl;
            getch();
            break;
        }
        else if (option == 1)
        {
            cout << "Enter products: ";
            cin >> medicineA[count];
            cout << "Enter product's price: ";
            cin >> priceA[count];
            cout << "Enter product's quntity: ";
            cin >> quantityA[count];
            count++;
            system("cls");
        }
        else if (option == 2)
        {
            break;
        }
    }
}

void Aviewproducts()
{
    cout << "Products"
         << " "
         << " price"
         << " "
         << "Quantity" << endl;
    for (int a = 0; a < med_size; a++)
    {
        cout << a + 1 << " - " << medicineA[a] << "       " << priceA[a] << "         " << quantityA[a] << endl;
    }
}

void Aupdate()
{
    system("cls");
    Aviewproducts();
    while (true)
    {
        cout << "Enter product option to change: ";
        cin >> option;
        if (option > med_size)
        {
            cout << "There is no product at that index"<<endl;
            cout << "Enter any key to continue: "<<endl;
            getch();
        }
        else if (option >= med_size || option <= med_size)
        {
            cout << "Enter product to update: ";
            cin >> update_medicine;
            cout << "Enter price of updated product: ";
            cin >> update_price;
            cout << "Enter updated product's quantity: ";
            cin >> update_quantity;
            medicineA[option - 1] = update_medicine;
            priceA[option - 1] = update_price;
            quantityA[option - 1] = update_quantity;
            cout << "Enter any key to exit: ";
            getch();
            break;
        }
    }
}

void Asorting()
{
    int flag = 0;
    for(int a=0;a<med_size;a++)
    {

    }
}
