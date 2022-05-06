#ifndef CELL_H
#define CELL_H

#include<string>
#include<vector>

using namespace std;

class Pin
{
public:
    Pin() { _x = 0; _y = 0; }

    //get
    int getId() { return _id; }
    string getName() { return _name; }
    int getX() { return _x; }
    int getY() { return _y; }
    Cell* getCell(Cell* cell) { _cell = cell; }

    //set
    void setId(int id) { _id = id; }
    void setName(string name) { _name = name; }
    void setX(int x) { _x = x; }
    void setY(int y) { _y = y; }
    void setCell(Cell* cell) { _cell = cell; }

private:
    int _id;
    string _name;
    int _x;
    int _y;
    Cell* _cell;
};

class LibraryCell
{
public:
    LibraryCell() { _width = 0, _height = 0; }

    //get
    int getId() { return _id; }
    string getName() { return _name; }
    int getWidth() { return _width; }
    int getHeight() { return _height; }
    vector <Pin*> getPinList() { return  _pinList; }

    //set
    void setId(int id) { _id = id; }
    void setName(string name) { _name = name; }
    void setWidth(int width) { _width = width; }
    void setHeight(int height) { _height = height; }
    void addPin(Pin* pin) { _pinList.push_back(pin);}

private:
    int _id;
    string _name;
    int _width;
    int _height;
    vector <Pin*> _pinList;
};

class Technology
{
public:
    Technology();

    //get
    int getId() { return _id; }
    string getName() { return _name; }
    vector <LibraryCell*> getLibraryCellList() { return _libraryCellList; }

    //set
    void setId(int id) { _id = id; }
    void setName(string name) { _name = name; }
    void addLibraryCell(LibraryCell* lc) {  _libraryCellList.push_back(lc); }

private:
    int _id;
    string _name;
    vector <LibraryCell*> _libraryCellList;
};

class Cell
{
public:
    Cell() { _x = 0, _y = 0; }

    //get
    int getId() { return _id; }
    string getName() { return _name; }
    int getX() { return _x; }
    int getY() { return _y; }
    LibraryCell* getLibraryCell() { return _lib; }

    //set
    void setId(int id) { _id = id; }
    void setName(string name) { _name = name; }
    void setX(int x) { _x = x; }
    void setY(int y) { _y = y; }
    void setLibraryCell(LibraryCell* lib) { _lib = lib; }

private:
    int _id;
    string _name;
    int _x;
    int _y;
    LibraryCell* _lib;
};

#endif