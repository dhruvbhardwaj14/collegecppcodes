#include <iostream>
#include <fstream>

using namespace std;

// int main(){
//     // string st = "Harry bhai";
//     // // Opening files using constructor and writing it
//     // ofstream out("sample60.txt"); // Write operation
//     // out<<st;
//     // cout<<"Data sent"<<endl;

//     string st2;
//     // Opening files using constructor and reading it
//     ifstream in("sample60.txt"); // Read operation
//     // in>>st2;
//     getline(in,st2);
//     cout<<st2<<endl;

//     return 0;
// }

// int main()
// {

//     // connecting our file with hout stream
//     ofstream hout("sample60.txt");

//     // creating a name string variable and filling it with string entered by the user
//     string name;
//     cout << "Enter your name: ";
//     getline(cin,name);
//     // cin >> name;

//     // writing a string to the file
//     hout << name + " is my name";

//     // disconnecting our file
//     hout.close();
//     // connecting our file with hin stream
//     ifstream hin("sample60.txt");

//     // creating a content string variable and filling it with string present there in the text file
//     string content;
//     getline(hin,content);
//     // hin >> content;
//     cout << "The content of the file is: " << content<<endl;;

//     // disconnecting our file
//     hin.close();
//     return 0;
// }

int main()
{

    // declaring an object of the type ofstream
    ofstream out;

    //connecting the object out to the text file using the member function open()
    out.open("sample60.txt");

    //writing to the file
    out << "This is 1me\n";
    out << "This is also me";
    //closing the file connection
    out.close();
    return 0;

    // declaring an object of the type ifstream
    ifstream in;
    //declaring string variable st
    string st;
    //opening the text file into in
    in.open("sample60.txt");

    // giving output the string lines by storing in st until the file reaches the end of it
    while (in.eof() == 0)
    {
        // using getline to fill the whole line in st
        getline(in, st);
        cout << st << endl;
    }
    return 0;
}
