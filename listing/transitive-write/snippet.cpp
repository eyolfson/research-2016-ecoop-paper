class TW {
  int *x;
public:
  void transitiveWrite() const { *x = 42; }
};
