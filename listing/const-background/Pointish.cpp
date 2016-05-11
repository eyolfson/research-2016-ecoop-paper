class Pointish {
private:
  int x;
  int * y;
public:
  int getX() const { return x; }
  void setX(int val) { x = val; }
  void setY(int val) { *y = val; }
};
