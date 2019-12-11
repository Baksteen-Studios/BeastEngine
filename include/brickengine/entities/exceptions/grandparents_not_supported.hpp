#ifndef FILE_GRANDPARENTS_NOT_SUPPORTED_EXCEPTION_HPP
#define FILE_GRANDPARENTS_NOT_SUPPORTED_EXCEPTION_HPP

#include <iostream>
#include <exception>

class GrandparentsNotSupportedException : public std::exception {
private:
  std::string m_msg;
public:
  GrandparentsNotSupportedException() : m_msg(std::string("The entity manager currently does not support grandparents.")){}

  virtual const char* what() const throw() {
    return m_msg.c_str();
  }
};

#endif // FILE_GRANDPARENTS_NOT_SUPPORTED_EXCEPTION_HPP