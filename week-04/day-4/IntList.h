#ifndef INTLIST_H
#define INTLIST_H

using namespace std;

class IntList {
  public:
    // We want the descendant classes to implement (define)
    // How these methods will actually work.
    IntList();
    virtual void append(int _a) = 0;
    virtual void insert(int _idx, int _a) = 0;
    virtual int getFirst() = 0;
    virtual int getLast() = 0;
    int getLength();
    virtual bool isEmpty() = 0;
    virtual ~IntList();
  protected:
    void setLength(int _length);
  private:
    int mLength; //We don't want others to set the length of this list

};

#endif // INTLIST_H
