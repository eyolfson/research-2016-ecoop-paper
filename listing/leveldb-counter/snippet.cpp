class CountingFile : public RandomAccessFile {
  virtual Status Read(...) const {
    this->counter_->Increment();
  }
};
