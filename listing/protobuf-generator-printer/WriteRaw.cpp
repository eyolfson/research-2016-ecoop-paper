void Printer::WriteRaw(..., int size)
  this->buffer_ += size;
  this->buffer_size_ -= size;
}
