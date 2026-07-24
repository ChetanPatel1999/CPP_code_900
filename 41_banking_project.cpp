#include <iostream>
using namespace std;
class account
{
    string accountHolderName;
    string acNumber;
    int balence;
    static int totalBankBalence;
    static int totalAccount;
    static string bankName;

    static int isValid(string name) // ram
    {
        int i;
        for (i = 0; name[i] != '\0'; i++)
        {
            if (!(name[i] >= 'a' && name[i] <= 'z'))
            {
                return 0;
            }
        }
        return 1;
    }

public:
    static int createAccount(account ac[], int index)
    {
        string name;
        cout << "\nWelcome to account create page .....\n";
        cout << "enter your name : ";
        cin >> name;
        if (isValid(name))
        {
            ac[index].accountHolderName = name;
        }
        else
        {
            cout << "\n inavlid name formate \n\n";
            return 0;
        }

        cout << "enter account number : ";
        cin >> ac[index].acNumber;
        cout << "enter balence : ";
        cin >> ac[index].balence;
        totalBankBalence = totalBankBalence + ac[index].balence;
        totalAccount++;
        cout << "\naccount create succefully\n\n";
        return 1;
    }

    static void displayAllAccount(account ac[], int index)
    {
        if (index > 0)
        {
            int i;
            for (i = 0; i < index; i++) // 2
            {
                cout << "\naccount info :\n";
                cout << "Bank Name : " << bankName << endl;
                cout << "Account Holder Name : " << ac[i].accountHolderName << endl;
                cout << "Account Number : " << ac[i].acNumber << endl;
                cout << "Account Balenec : " << ac[i].balence << endl
                     << endl;
            }
        }
        else
        {
            cout << "\n no one account create in HDFC bank\n\n";
        }
    }

    static void displaySingleAccount(account ac[], int index)
    {
        if (index > 0)
        {

            string acno;
            cout << "\nEnter account Number : ";
            cin >> acno;
            int i, f = 0;
            for (i = 0; i < index; i++) // 4
            {
                if (ac[i].acNumber == acno)
                {
                    cout << "\naccount info :\n";
                    cout << "Bank Name : " << bankName << endl;
                    cout << "Account Holder Name : " << ac[i].accountHolderName << endl;
                    cout << "Account Number : " << ac[i].acNumber << endl;
                    cout << "Account Balenec : " << ac[i].balence << endl
                         << endl;
                    f = 1;
                }
            }
            if (f == 0)
            {
                cout << "\ninvalid account number please enter correct account number\n\n";
            }
        }
        else
        {
            cout << "\n no one account create in HDFC bank\n\n";
        }
    }

    static void showTotalBankeBalence()
    {
        cout << "\n    ------------------------" << endl;
        cout << "           HDFC Bank " << endl;
        cout << "    ------------------------" << endl;
        cout << "    totalBankBalence : " << totalBankBalence << endl
             << endl;
    }
    static void showTotalAccount()
    {
        cout << "\n    ------------------------" << endl;
        cout << "           HDFC Bank " << endl;
        cout << "    ------------------------" << endl;
        cout << "    totalAccount : " << totalAccount << endl
             << endl;
    }

    static void depositeAmount(account ac[], int index)
    {
        if (index > 0)
        {
            string acno;
            cout << "enter account number : ";
            cin >> acno;
            int i, f = 0;
            for (i = 0; i < index; i++)
            {
                if (acno == ac[i].acNumber)
                {
                    f = 1;
                    int amount;
                    cout << "enter amount : ";
                    cin >> amount; // 200
                    ac[i].balence = ac[i].balence + amount;
                    totalBankBalence = totalBankBalence + amount;
                    cout << "\namount added succesfully\n\n";
                }
            }
            if (f == 0)
            {
                printf("\ninvalid account number please enter correcxt account number\n\n");
            }
        }
        else
        {
            printf("\nfirst create account then deposite ammount\n\n");
        }
    }

    static void withdrawAmount(account ac[], int index)
    {
        if (index > 0)
        {
            string acno;
            cout << "enter account number : ";
            cin >> acno;
            int i, f = 0;
            for (i = 0; i < index; i++)
            {
                if (acno == ac[i].acNumber)
                {
                    f = 1;
                    int amount;
                    cout << "enter amount : ";
                    cin >> amount; // 200

                    if (amount <= ac[i].balence)
                    {
                        ac[i].balence = ac[i].balence - amount;
                        totalBankBalence = totalBankBalence - amount;
                        cout << "\namount withdraw succefully\n\n";
                    }
                    else
                    {
                        cout << "\ninsuficiant balence\n";
                        cout << "you have only " << ac[i].balence << " amount\n\n";
                    }
                }
            }
            if (f == 0)
            {
                printf("\ninvalid account number please enter correcxt account number\n\n");
            }
        }
        else
        {
            printf("\nfirst create account then withdraw ammount\n\n");
        }
    }
};

int account::totalBankBalence = 0;
int account::totalAccount = 0;
string account::bankName = "HDFC";

int main()
{
    account ac[10];
    int index = 0;
    int num, res;
    while (true)
    {
        cout << "<----- Welcome to HDFC Bank APP ----->\n";
        cout << "<------------------------------------>\n";
        cout << "    choose options : \n";
        cout << "    1. create account : \n";
        cout << "    2. display All Account : \n";
        cout << "    3. display single Account : \n";
        cout << "    4. withdraw balence : \n";
        cout << "    5. deposit balence : \n";
        cout << "    6. show total bank balence : \n";
        cout << "    7. show total Account : \n";
        cout << "    8. exit app : \n";
        cout << "   select option : ";
        cin >> num;
        switch (num)
        {
        case 1:
            res = account::createAccount(ac, index);
            if (res == 1)
            {
                index++;
            }
            break;
        case 2:
            account::displayAllAccount(ac, index);
            break;
        case 3:
            account::displaySingleAccount(ac, index);
            break;
        case 4:
            account::withdrawAmount(ac, index);
            break;
        case 5:
            account::depositeAmount(ac, index);
            break;
        case 6:
            account::showTotalBankeBalence();
            break;
        case 7:
            account::showTotalAccount();
            break;
        case 8:
            exit(0);
            break;
        default:
            cout << "\ninvalid number please select right number\n\n";
        }
    }

    return 0;
}