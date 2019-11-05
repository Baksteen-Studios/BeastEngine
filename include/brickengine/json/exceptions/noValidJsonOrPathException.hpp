#ifndef FILE_NOVALIDJSONORPATHEXCEPTION_HPP
#define FILE_NOVALIDJSONORPATHEXCEPTION_HPP

#include <iostream>
#include <exception>

class NoValidJsonOrPathException : public std::exception {
private:
  std::string m_msg;
public:
  NoValidJsonOrPathException() : m_msg(std::string("The path or JSON is not valid")){}

  virtual const char* what() const throw() {
    return m_msg.c_str();
  }
};

#endif // FILE_NOVALIDJSONORPATHEXCEPTION_HPP