#include <iostream>
#include <string>
using namespace std;


class Media {
protected:
    string title;
    float price;

public:
    Media(string t, float p) : title(t), price(p) {}

    virtual void display() = 0;
};


class Book : public Media {
    int pages;

public:
    Book(string t, float p, int pg) : Media(t, p), pages(pg) {}

    void display() override {
        cout << "Book Title: " << title << endl;
        cout << "Price: Rs. " << price << endl;
        cout << "Pages: " << pages << endl;
    }
};


class AudioTape : public Media {
    float duration;

public:
    AudioTape(string t, float p, float d) : Media(t, p), duration(d) {}

    void display() override {
        cout << "Audio Tape Title: " << title << endl;
        cout << "Price: Rs. " << price << endl;
        cout << "Duration: " << duration << " minutes" << endl;
    }
};

int main() {
    Media* mediaList[2];

    mediaList[0] = new Book("C++ Fundamentals", 450.0, 300);
    mediaList[1] = new AudioTape("Learn C++ Audio", 299.0, 90.5);

    cout << "Media Information:\n";
    for (int i = 0; i < 2; i++) {
        mediaList[i]->display();
        cout << endl;
    }

    return 0;
}
