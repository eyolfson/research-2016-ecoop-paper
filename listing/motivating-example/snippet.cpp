class A { public: int id; };
size_t std::hash(const A& a) { return std::hash(a.id); }
std::unordered_map<A, std::string> m;
const A a;

m.insert(a, "Value");
evil(a);
m.find(a);

void evil(const A& a) { writeId(const_cast<A*>(&a)); }
void writeId(A *pa) { pa->id = 5; }
