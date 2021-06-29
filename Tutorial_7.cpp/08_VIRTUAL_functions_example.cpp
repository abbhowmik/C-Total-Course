#include <iostream>
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
    virtual void display(void)
    {
        cout << "Displaying the base class" << endl;
    }
};

class CWHVideo : public CWH
{
    float length;

public:
    CWHVideo(string s, float r, float ln) : CWH(s, r)
    {
        length = ln;
    }

    virtual void display(void)
    {
        cout << "This is a video with title: " << title << endl;
        cout << "The rating is: " << rating << " out of 5" << endl;
        cout << "The length of the video is: " << length << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, float wr) : CWH(s, r)
    {
        words = wr;
    }

    void display(void)
    {
        cout << "This is a video with title " << title << endl;
        cout << "The rating is: " << rating << " out of 5" << endl;
        cout << "No. of words used in the article are " << words << endl;
    }
};
// if any display derived class is not present and we call this then base class's display fucncion will be executed

int main()
{
    CWHVideo pythonVideo("Python Tutorial For Beginners", 4.5, 15.45);
    CWHText pythonText("Python Tutorial For Beginners", 4.5, 55600);
    // pythonVideo.display();
    // pythonText.display();

    CWH *tuts[2]; // array object
    tuts[0] = &pythonVideo;
    tuts[1] = &pythonText;
    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
