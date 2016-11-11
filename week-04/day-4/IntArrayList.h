#ifndef INTARRAYLIST_H
#define INTARRAYLIST_H


class IntArrayList : public IntList {
  public:
    IntArrayList();
    virtual void append(int _a);
    virtual void insert(int _idx, int _a);
    virtual int getFirst();
    virtual int getLast();
    virtual int getLength();
    void printList();
    virtual bool isEmpty();
    virtual ~IntArrayList();
  protected:
    void setLength(int _length);
  private:
    int mLength;
    int* array;
};

#endif // INTARRAYLIST_H
