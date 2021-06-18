//Important!!!!!
#include <iostream>
#include <cstring>
using namespace std;
class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() {}
};

class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float vL) : CWH(s, r)
    {
        videoLength = vL;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Rating: " << rating << " out of 5 stars." << endl;
        cout << "The length of this video is: " << videoLength << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Rating of this text tutorial " << rating << " out of 5 stars." << endl;
        cout << "Number of wrods in this text tutorial: " << words << endl;
    }
};
int main()
{
    string title;
    float rating, vLen;
    int words;

    //for CWH Video-
    title = "Django tutorial";
    vLen = 12.4;
    rating = 4.5;
    words = 433;
    CWHVideo djvideo(title, rating, vLen);

    //for CWH text-
    CWHText djtext(title, rating, words);

    CWH *tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0] -> display();
    tuts[1] -> display();

    return 0;
}

// Rules for virtual functions-
// They cannot be static
// They are accessed by object pointers
// Virtual functions can be a friend of another class
// A virtual function in the base class might not be used.
// If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class