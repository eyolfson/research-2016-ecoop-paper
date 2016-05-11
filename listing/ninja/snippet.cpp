TimeStamp StatTest::Stat(const string& path, ...) const {
  this->stats_.push_back(path);
}
