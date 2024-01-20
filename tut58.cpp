#include<iostream>
#include<cstring>
using namespace std;
class Cwh{              // *************ABSTRACT CLASS*************
    protected:
        string title;
        float rating;
    public:
        Cwh(string s, float r){
            title = s;
            rating = r;
        }
        virtual void display()=0; // do-nothing function  --> pure virtual function
};

class CwhVideo : public Cwh{
    float videoLength;
    public:
        CwhVideo(string s, float r, float vL) : Cwh(s,r){
            videoLength = vL;          
        }
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars "<<endl;
            cout<<"Length of this video is: "<<videoLength<<" minutes "<<endl;
        }

};

class CwhText : public Cwh{
    int words;
    public:
        CwhText(string s, float r, int wc) : Cwh(s,r){
            words = wc;          
        }
        void display(){
            cout<<"This is an amazing text tutorial with title "<<title<<endl;
            cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars "<<endl;
            cout<<"No of words in this text tutorial: "<<words<<" words "<<endl;
        }
};

int main(){
    string title;
    float rating, vlen;
    int words;

    // for Code With Harry video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CwhVideo djVideo(title, rating, vlen);
    // djVideo.display();

    // for Code with Harry Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CwhText djText(title, rating, words);
    // djText.display();

    Cwh* tuts[2];
    tuts[0]= &djVideo;
    tuts[1]= &djText;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
} 
