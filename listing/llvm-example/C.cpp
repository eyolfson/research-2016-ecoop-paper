class C {
  int *x;
public:
  void foo() const {
    *x = 42;
  }
};
