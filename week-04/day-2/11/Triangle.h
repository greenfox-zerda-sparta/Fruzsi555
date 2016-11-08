#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {
  public:
    Triangle(int number);
    void draw_halftree();
    void draw_tree();
    void diamond();

  private:
    int number;
};

#endif // TRIANGLE_H
